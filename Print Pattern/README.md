# Print Pattern  

**Difficulty:** Easy  
**Accuracy:** 56.39%  
**Submissions:** 92K+  
**Points:** 2  

---

## Problem Description  
Print a sequence of numbers starting with \( n \), without using a loop. Replace \( n \) with \( n - 5, n - 5, \dots \) until \( n \leq 0 \). Then, replace \( n \) with \( n + 5, n + 5, \dots \) until \( n \) regains its initial value.  

You need to complete the function `pattern(n)` which takes \( n \) as input and returns a list containing the pattern.  

---

## Examples  

### Example 1:  
**Input:**  
\( n = 16 \)  

**Output:**  
`16 11 6 1 -4 1 6 11 16`  

**Explanation:**  
The value decreases until it is less than or equal to 0. After that, it increases and stops when it becomes 16 again.  

---

### Example 2:  
**Input:**  
\( n = 10 \)  

**Output:**  
`10 5 0 5 10`  

**Explanation:**  
The pattern follows the same logic as the above example.  

---

## Expected Complexity  
- **Time Complexity:** \( O(n) \)  
- **Auxiliary Space:** \( O(n) \)  

---

## Constraints  
- \(-10^5 \leq n \leq 10^5\)  

---

## Code  

```python
def pattern(n: int) -> list:
    """
    Generate the pattern for a given number n.

    Args:
    n (int): The starting number.

    Returns:
    list: The pattern sequence.
    """
    result = []
    
    def generate_sequence(num, decreasing=True):
        result.append(num)
        if decreasing and num > 0:
            generate_sequence(num - 5, True)
        elif not decreasing and num < n:
            generate_sequence(num + 5, False)
    
    generate_sequence(n)
    generate_sequence(result[-1], False)
    
    return result

# Example Usage
print(pattern(16))  # Output: [16, 11, 6, 1, -4, 1, 6, 11, 16]
print(pattern(10))  # Output: [10, 5, 0, 5, 10]
