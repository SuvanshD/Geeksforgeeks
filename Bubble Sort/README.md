# Bubble Sort  

**Difficulty:** Easy  
**Accuracy:** 59.33%  
**Submissions:** 256K+  
**Points:** 2  

--

## Problem Description  
Given an array \( \text{arr}[] \), sort the array using the **Bubble Sort** algorithm.  

---

## Examples  

### Example 1:  
**Input:**  
`arr = [4, 1, 3, 9, 7]`  

**Output:**  
`[1, 3, 4, 7, 9]`  

---

### Example 2:  
**Input:**  
`arr = [10, 9, 8, 7, 6, 5, 4, 3, 2, 1]`  

**Output:**  
`[1, 2, 3, 4, 5, 6, 7, 8, 9, 10]`  

---

### Example 3:  
**Input:**  
`arr = [1, 2, 3, 4, 5]`  

**Output:**  
`[1, 2, 3, 4, 5]`  

**Explanation:**  
An array that is already sorted remains unchanged after applying Bubble Sort.  

---

## Constraints  
- \( 1 \leq \text{arr.size()} \leq 10^3 \)  
- \( 1 \leq \text{arr}[i] \leq 10^3 \)  

---

## Expected Complexity  
- **Time Complexity:**  
  - Worst Case: \( O(n^2) \)  
  - Best Case (optimized version): \( O(n) \)  
- **Space Complexity:** \( O(1) \)  

---

## Code  

```python
def bubbleSort(arr: list[int]) -> list[int]:
    """
    Sorts an array using Bubble Sort.
    
    Args:
    arr (list[int]): The input array.
    
    Returns:
    list[int]: The sorted array in increasing order.
    """
    n = len(arr)
    for i in range(n):
        # Track whether any swaps occur during this pass
        swapped = False
        for j in range(0, n - i - 1):
            if arr[j] > arr[j + 1]:
                # Swap adjacent elements if they are in the wrong order
                arr[j], arr[j + 1] = arr[j + 1], arr[j]
                swapped = True
        # If no swaps occurred, the array is already sorted
        if not swapped:
            break
    return arr

# Example Usage
arr1 = [4, 1, 3, 9, 7]
print(bubbleSort(arr1))  # Output: [1, 3, 4, 7, 9]

arr2 = [10, 9, 8, 7, 6, 5, 4, 3, 2, 1]
print(bubbleSort(arr2))  # Output: [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

arr3 = [1, 2, 3, 4, 5]
print(bubbleSort(arr3))  # Output: [1, 2, 3, 4, 5]
