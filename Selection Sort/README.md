# Selection Sort  

**Difficulty:** Easy  
**Accuracy:** 64.33%  
**Submissions:** 170K+  
**Points:** 2  

---

## Problem Description  
Given an array \( \text{arr}[] \), use **Selection Sort** to sort the array in increasing order.  

---

## Examples  

### Example 1:  
**Input:**  
`arr = [4, 1, 3, 9, 7]`  

**Output:**  
`[1, 3, 4, 7, 9]`  

**Explanation:**  
Maintain sorted (in bold) and unsorted subarrays.  
1. Select \( 1 \): Array becomes `[1, 4, 3, 9, 7]`.  
2. Select \( 3 \): Array becomes `[1, 3, 4, 9, 7]`.  
3. Select \( 4 \): Array becomes `[1, 3, 4, 9, 7]`.  
4. Select \( 7 \): Array becomes `[1, 3, 4, 7, 9]`.  
5. Select \( 9 \): Array becomes `[1, 3, 4, 7, 9]`.  

---

### Example 2:  
**Input:**  
`arr = [10, 9, 8, 7, 6, 5, 4, 3, 2, 1]`  

**Output:**  
`[1, 2, 3, 4, 5, 6, 7, 8, 9, 10]`  

---

### Example 3:  
**Input:**  
`arr = [38, 31, 20, 14, 30]`  

**Output:**  
`[14, 20, 30, 31, 38]`  

---

## Constraints  
- \( 1 \leq \text{arr.size()} \leq 10^3 \)  
- \( 1 \leq \text{arr}[i] \leq 10^6 \)  

---

## Expected Complexity  
- **Time Complexity:** \( O(n^2) \)  
- **Space Complexity:** \( O(1) \)  

---

## Code  

```python
def selectionSort(arr: list[int]) -> list[int]:
    """
    Sorts an array using Selection Sort.
    
    Args:
    arr (list[int]): The input array.
    
    Returns:
    list[int]: The sorted array in increasing order.
    """
    n = len(arr)
    for i in range(n):
        # Find the minimum element in the remaining unsorted array
        min_index = i
        for j in range(i + 1, n):
            if arr[j] < arr[min_index]:
                min_index = j
        
        # Swap the found minimum element with the first element of the unsorted array
        arr[i], arr[min_index] = arr[min_index], arr[i]
    
    return arr

# Example Usage
arr1 = [4, 1, 3, 9, 7]
print(selectionSort(arr1))  # Output: [1, 3, 4, 7, 9]

arr2 = [10, 9, 8, 7, 6, 5, 4, 3, 2, 1]
print(selectionSort(arr2))  # Output: [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

arr3 = [38, 31, 20, 14, 30]
print(selectionSort(arr3))  # Output: [14, 20, 30, 31, 38]
