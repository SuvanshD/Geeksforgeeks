# Array Duplicates  

**Difficulty:** Easy  
**Accuracy:** 18.95%  
**Submissions:** 798K+  
**Points:** 2  

---

## Problem Description  
Given an array \( \text{arr}[] \) of integers, find all the elements that occur more than once in the array. If no element repeats, return an empty array.

---

## Examples  

### Example 1:  
**Input:**  
`arr = [2, 3, 1, 2, 3]`  

**Output:**  
`[2, 3]`  

**Explanation:**  
- \( 2 \) and \( 3 \) occur more than once in the given array.  

---

### Example 2:  
**Input:**  
`arr = [0, 3, 1, 2]`  

**Output:**  
`[]`  

**Explanation:**  
- There is no repeating element in the array, so the output is empty.  

---

### Example 3:  
**Input:**  
`arr = [2]`  

**Output:**  
`[]`  

**Explanation:**  
- The array contains a single element. Therefore, there are no duplicates, and the output is empty.  

---

## Constraints  
- \( 1 \leq \text{arr.size()} \leq 10^6 \)  
- \( 0 \leq \text{arr}[i] \leq 10^6 \)  

---

## Expected Complexity  
- **Time Complexity:** \( O(n) \)  
- **Space Complexity:** \( O(n) \)  

---

## Code  

```python
def findDuplicates(arr: list[int]) -> list[int]:
    """
    Finds all elements that occur more than once in the array.
    
    Args:
    arr (list[int]): The input array containing integers.
    
    Returns:
    list[int]: A list of integers that occur more than once.
    """
    from collections import Counter

    # Count the occurrences of each number
    frequency = Counter(arr)

    # Extract elements that occur more than once
    duplicates = [num for num, count in frequency.items() if count > 1]
    
    return duplicates

# Example Usage
arr1 = [2, 3, 1, 2, 3]
print(findDuplicates(arr1))  # Output: [2, 3]

arr2 = [0, 3, 1, 2]
print(findDuplicates(arr2))  # Output: []

arr3 = [2]
print(findDuplicates(arr3))  # Output: []
