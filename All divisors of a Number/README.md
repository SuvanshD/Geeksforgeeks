# All Divisors of a Number  

**Difficulty:** Easy  
**Accuracy:** 46.73%  
**Submissions:** 42K+  
**Points:** 2  

---

## Problem Description  
Given an integer `N`, print all the divisors of `N` in ascending order.  

---

## Examples  

### Example 1:  
**Input:**  
`N = 20`  

**Output:**  
`1 2 4 5 10 20`  

**Explanation:**  
20 is completely divisible by 1, 2, 4, 5, 10, and 20.  

### Example 2:  
**Input:**  
`N = 21191`  

**Output:**  
`1 21191`  

**Explanation:**  
As 21191 is a prime number, it has only 2 factors: 1 and the number itself.  

---

## Your Task  
You need to implement the function `print_divisors()` which:  
- Takes `N` as input.  
- Prints all the factors of `N` as space-separated integers in sorted order.  
- **Note:** You don't need to print a newline character; it will be handled by the driver code.  

---

## Expected Complexity  
- **Time Complexity:** \(O(\sqrt{N})\)  
- **Space Complexity:** \(O(\sqrt{N})\)  

---

## Constraints  
- \(1 \leq N \leq 10^5\)  

---

## Code  

```python
def print_divisors(N: int) -> None:
    """
    Prints all divisors of a given number N in ascending order.

    Args:
    N (int): The number to find divisors for.

    Returns:
    None
    """
    divisors = []
    for i in range(1, int(N**0.5) + 1):
        if N % i == 0:
            divisors.append(i)
            if i != N // i:
                divisors.append(N // i)
    divisors.sort()
    print(" ".join(map(str, divisors)))

# Examples
print_divisors(20)    # Output: 1 2 4 5 10 20
print_divisors(21191) # Output: 1 21191
