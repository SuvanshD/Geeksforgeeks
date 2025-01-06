# Sum of First N Terms  

**Difficulty:** Basic  
**Accuracy:** 23.17%  
**Submissions:** 164K+  
**Points:** 1  

---

## Problem Description  
Given an integer `n`, calculate the sum of the series \(1^3 + 2^3 + 3^3 + 4^3 + \dots + n^3\).  

---

## Examples  

### Example 1:  
**Input:**  
`n = 5`  

**Output:**  
`225`  

**Explanation:**  
The sum of the series is \(1^3 + 2^3 + 3^3 + 4^3 + 5^3 = 225\).  

### Example 2:  
**Input:**  
`n = 7`  

**Output:**  
`784`  

**Explanation:**  
The sum of the series is \(1^3 + 2^3 + 3^3 + 4^3 + 5^3 + 6^3 + 7^3 = 784\).  

---

## Your Task  
You don't need to read input or print anything. Complete the function `sum_of_series()` which takes an integer `n` as input and returns the sum of the series.  

---

## Expected Complexity  
- **Time Complexity:** \(O(1)\)  
- **Auxiliary Space:** \(O(1)\)  

---

## Constraints  
- \(1 \leq n \leq 200\)  

---

## Code  

```python
def sum_of_series(n: int) -> int:
    """
    Calculate the sum of the series 1^3 + 2^3 + ... + n^3.

    Args:
    n (int): The number of terms in the series.

    Returns:
    int: The sum of the series.
    """
    # Using the formula for the sum of cubes: (n * (n + 1) // 2) ** 2
    return (n * (n + 1) // 2) ** 2

# Examples
print(sum_of_series(5))  # Output: 225
print(sum_of_series(7))  # Output: 784
print(sum_of_series(10))  # Output: 3025
