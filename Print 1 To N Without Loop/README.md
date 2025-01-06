# Print 1 To N Without Loop  

**Difficulty:** Basic  
**Accuracy:** 61.33%  
**Submissions:** 266K+  
**Points:** 1  

---

## Problem Description  
Print numbers from 1 to `n` without the help of loops. You need to complete the function `printNos()` that takes `n` as a parameter and prints the numbers from 1 to `n` recursively.  

---

## Examples  

### Example 1:  
**Input:**  
`n = 10`  

**Output:**  
`1 2 3 4 5 6 7 8 9 10`  

### Example 2:  
**Input:**  
`n = 5`  

**Output:**  
`1 2 3 4 5`  

### Example 3:  
**Input:**  
`n = 1`  

**Output:**  
`1`  

---

## Your Task  
You don't need to read input or print anything. Complete the function `printNos()` which takes an integer `n` as input and prints the numbers from 1 to `n` recursively.  

---

## Expected Complexity  
- **Time Complexity:** \(O(n)\)  
- **Auxiliary Space:** \(O(n)\) (due to recursion stack)  

---

## Constraints  
- \(1 \leq n \leq 1000\)  

---

## Code  

```python
def printNos(n: int) -> None:
    """
    Print numbers from 1 to n recursively.

    Args:
    n (int): The upper limit to print numbers.

    Returns:
    None
    """
    if n > 0:
        printNos(n - 1)
        print(n, end=" ")

# Example Usage
printNos(10)  # Output: 1 2 3 4 5 6 7 8 9 10
print()       # To add a newline for better readability
printNos(5)   # Output: 1 2 3 4 5
