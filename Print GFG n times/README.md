# Print GFG n times  

**Difficulty:** Easy  
**Accuracy:** 75.76%  
**Submissions:** 91K+  
**Points:** 2  

---

## Problem Description  
Print "GFG" `n` times without using a loop.  

---

## Example  

### Example 1:  
**Input:**  
`n = 5`  

**Output:**  
`GFG GFG GFG GFG GFG`  

---

## Your Task  
This is a function problem. You only need to complete the function `printGfg()` that takes an integer `N` as a parameter and prints "GFG" `N` times recursively. **Do not print a newline**, as it will be handled by the driver code.  

---

## Expected Complexity  
- **Time Complexity:** \(O(N)\)  
- **Auxiliary Space:** \(O(N)\) (due to recursion stack)  

---

## Constraints  
- \(1 \leq N \leq 1000\)  

---

## Code  

```python
def printGfg(n: int) -> None:
    """
    Print 'GFG' n times recursively.

    Args:
    n (int): The number of times to print 'GFG'.

    Returns:
    None
    """
    if n > 0:
        print("GFG", end=" ")
        printGfg(n - 1)

# Example Usage
printGfg(5)  # Output: GFG GFG GFG GFG GFG
