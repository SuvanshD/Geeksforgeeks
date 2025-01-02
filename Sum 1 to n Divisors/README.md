# Sum of 1 to n Divisors  

**Difficulty:** Easy  
**Accuracy:** 43.37%  
**Submissions:** 188K+  
**Points:** 2  

---

## Problem Description  
Given a positive integer `n`, the task is to find the value of \(\sum_{i=1}^{n} F(i)\), where \(F(i)\) is the sum of all divisors of \(i\).  

---

## Examples  

### Example 1:  
**Input:**  
`n = 4`  

**Output:**  
`15`  

**Explanation:**  
- \(F(1) = 1\)  
- \(F(2) = 1 + 2 = 3\)  
- \(F(3) = 1 + 3 = 4\)  
- \(F(4) = 1 + 2 + 4 = 7\)  
\[
F(1) + F(2) + F(3) + F(4) = 1 + 3 + 4 + 7 = 15
\]  

### Example 2:  
**Input:**  
`n = 5`  

**Output:**  
`21`  

**Explanation:**  
- \(F(1) = 1\)  
- \(F(2) = 1 + 2 = 3\)  
- \(F(3) = 1 + 3 = 4\)  
- \(F(4) = 1 + 2 + 4 = 7\)  
- \(F(5) = 1 + 5 = 6\)  
\[
F(1) + F(2) + F(3) + F(4) + F(5) = 1 + 3 + 4 + 7 + 6 = 21
\]  

### Example 3:  
**Input:**  
`n = 1`  

**Output:**  
`1`  

**Explanation:**  
- \(F(1) = 1\)  
\[
F(1) = 1
\]  

---

## Expected Complexity  
- **Time Complexity:** \(O(n \log n)\)  
- **Space Complexity:** \(O(n)\)  

---

## Constraints  
- \(1 \leq n \leq 10^5\)  

---

## Code  

```python
def sum_of_divisors(n: int) -> int:
    """
    Calculate the sum of F(i) for all i from 1 to n, where F(i) is the sum of all divisors of i.

    Args:
    n (int): The positive integer up to which the sum is calculated.

    Returns:
    int: The sum of F(i) for i from 1 to n.
    """
    divisors_sum = [0] * (n + 1)

    for i in range(1, n + 1):
        for j in range(i, n + 1, i):
            divisors_sum[j] += i

    return sum(divisors_sum)

# Examples
print(sum_of_divisors(4))  # Output: 15
print(sum_of_divisors(5))  # Output: 21
print(sum_of_divisors(1))  # Output: 1
