# Reverse the Array  

**Difficulty:** Easy  
**Accuracy:** 72.53%  
**Submissions:** 89K+  
**Points:** 2  

---

## Problem Description  
You are given an array of integers \( \text{arr}[] \). Your task is to reverse the given array in place.  

---

## Examples  

### Example 1:  
**Input:**  
`arr = [1, 4, 3, 2, 6, 5]`  

**Output:**  
`[5, 6, 2, 3, 4, 1]`  

**Explanation:**  
The elements of the array are reversed so that the first element becomes the last, the second becomes the second last, and so on.  

---

### Example 2:  
**Input:**  
`arr = [4, 5, 2]`  

**Output:**  
`[2, 5, 4]`  

**Explanation:**  
The array is reversed to produce the output `[2, 5, 4]`.  

---

### Example 3:  
**Input:**  
`arr = [1]`  

**Output:**  
`[1]`  

**Explanation:**  
Since the array has only one element, the reversed array is the same as the original.  

---

## Constraints  
- \( 1 \leq \text{arr.size()} \leq 10^5 \)  
- \( 0 \leq \text{arr}[i] \leq 10^5 \)  

---

## Expected Complexity  
- **Time Complexity:** \( O(n) \)  
- **Space Complexity:** \( O(1) \) (In-place modification)  

---

## Code  

```python
def reverseArray(arr: list) -> None:
    """
    Reverses the given array in place.

    Args:
    arr (list): The input array.

    Returns:
    None: The array is modified in place.
    """
    left, right = 0, len(arr) - 1
    while left < right:
        arr[left], arr[right] = arr[right], arr[left]
        left += 1
        right -= 1

# Example Usage
arr1 = [1, 4, 3, 2, 6, 5]
reverseArray(arr1)
print(arr1)  # Output: [5, 6, 2, 3, 4, 1]

arr2 = [4, 5, 2]
reverseArray(arr2)
print(arr2)  # Output: [2, 5, 4]

arr3 = [1]
reverseArray(arr3)
print(arr3)  # Output: [1]
