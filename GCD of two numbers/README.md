# GCD of Two Numbers  

**Difficulty:** Basic  
**Accuracy:** 51.03%  
**Submissions:** 97K+  
**Points:** 1  

---

## Problem Description  
Given two positive integers `a` and `b`, find the GCD (Greatest Common Divisor) of `a` and `b`.  

**Note:** Do not use the inbuilt `gcd` function.  

---

## Examples  

### Example 1:  
**Input:**  
`a = 3, b = 6`  

**Output:**  
`3`  

**Explanation:**  
GCD of 3 and 6 is 3.  

### Example 2:  
**Input:**  
`a = 1, b = 1`  

**Output:**  
`1`  

**Explanation:**  
GCD of 1 and 1 is 1.  

---

## Your Task  
You don't need to read input or print anything. Complete the function `gcd()` which takes two positive integers as input parameters and returns the GCD of `a` and `b` as an integer.  

---

## Expected Complexity  
- **Time Complexity:** \(O(\log(\min(a, b)))\)  
- **Auxiliary Space:** \(O(1)\)  

---

## Constraints  
- \(1 \leq a, b \leq 10^9\)  

---

## Code  

```python
def gcd(a: int, b: int) -> int:
    """
    Compute the Greatest Common Divisor (GCD) of two positive integers a and b.

    Args:
    a (int): First positive integer.
    b (int): Second positive integer.

    Returns:
    int: GCD of a and b.
    """
    while b != 0:
        a, b = b, a % b
    return a

# Examples
print(gcd(3, 6))  # Output: 3
print(gcd(1, 1))  # Output: 1
print(gcd(15, 10))  # Output: 5
