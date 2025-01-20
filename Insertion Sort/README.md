# Insertion Sort  

**Difficulty:** Easy  
**Accuracy:** 66.61%  
**Submissions:** 201K+  
**Points:** 2  

---

## Problem Description  
Complete the `insertsort()` function to sort an array \( \text{arr}[] \) using the **Insertion Sort** algorithm.  

---

## Examples  

### Example 1:  
**Input:**  
`arr = [4, 1, 3, 9, 7]`  

**Output:**  
`[1, 3, 4, 7, 9]`  

**Explanation:**  
The sorted array is `[1, 3, 4, 7, 9]`.  

---

### Example 2:  
**Input:**  
`arr = [10, 9, 8, 7, 6, 5, 4, 3, 2, 1]`  

**Output:**  
`[1, 2, 3, 4, 5, 6, 7, 8, 9, 10]`  

**Explanation:**  
The sorted array is `[1, 2, 3, 4, 5, 6, 7, 8, 9, 10]`.  

---

### Example 3:  
**Input:**  
`arr = [4, 1, 9]`  

**Output:**  
`[1, 4, 9]`  

**Explanation:**  
The sorted array is `[1, 4, 9]`.  

---

## Constraints  
- \( 1 \leq \text{arr.size()} \leq 1000 \)  
- \( 1 \leq \text{arr}[i] \leq 1000 \)  

---

## Expected Complexity  
- **Time Complexity:**  
  - Worst Case: \( O(n^2) \)  
  - Best Case: \( O(n) \) (when the array is already sorted)  
- **Space Complexity:** \( O(1) \)  

---

## Code  

```python
def insertsort(arr: list[int]) -> list[int]:
    """
    Sorts an array using Insertion Sort.
    
    Args:
    arr (list[int]): The input array.
    
    Returns:
    list[int]: The sorted array in increasing order.
    """
    for i in range(1, len(arr)):
        key = arr[i]
        j = i - 1
        # Move elements of arr[0..i-1], that are greater than key,
        # to one position ahead of their current position
        while j >= 0 and arr[j] > key:
            arr[j + 1] = arr[j]
            j -= 1
        arr[j + 1] = key
    return arr

# Example Usage
arr1 = [4, 1, 3, 9, 7]
print(insertsort(arr1))  # Output: [1, 3, 4, 7, 9]

arr2 = [10, 9, 8, 7, 6, 5, 4, 3, 2, 1]
print(insertsort(arr2))  # Output: [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

arr3 = [4, 1, 9]
print(insertsort(arr3))  # Output: [1, 4, 9]
