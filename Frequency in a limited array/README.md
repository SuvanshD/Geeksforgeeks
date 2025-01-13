# Frequencies in a Limited Array  

**Difficulty:** Easy  
**Accuracy:** 27.64%  
**Submissions:** 333K+  
**Points:** 2  

---

## Problem Description  
You are given an array \( \text{arr}[] \) containing positive integers. The elements in the array \( \text{arr}[] \) range from 1 to \( n \) (where \( n \) is the size of the array), and some numbers may be repeated or absent. Your task is to count the frequency of all numbers in the range \( 1 \) to \( n \) and return an array of size \( n \) such that \( \text{result}[i] \) represents the frequency of the number \( i+1 \) (1-based indexing) .

---

## Examples  

### Example 1:  
**Input:**  
`arr = [2, 3, 2, 3, 5]`  

**Output:**  
`[0, 2, 2, 0, 1]`  

**Explanation:**  
- \( 1 \) occurs \( 0 \) times.  
- \( 2 \) occurs \( 2 \) times.  
- \( 3 \) occurs \( 2 \) times.  
- \( 4 \) occurs \( 0 \) times.  
- \( 5 \) occurs \( 1 \) time.  

---

### Example 2:  
**Input:**  
`arr = [3, 3, 3, 3]`  

**Output:**  
`[0, 0, 4, 0]`  

**Explanation:**  
- \( 1 \) occurs \( 0 \) times.  
- \( 2 \) occurs \( 0 \) times.  
- \( 3 \) occurs \( 4 \) times.  
- \( 4 \) occurs \( 0 \) times.  

---

### Example 3:  
**Input:**  
`arr = [1]`  

**Output:**  
`[1]`  

**Explanation:**  
- \( 1 \) occurs \( 1 \) time.  

---

## Constraints  
- \( 1 \leq \text{arr.size()} \leq 10^6 \)  
- \( 1 \leq \text{arr}[i] \leq \text{arr.size()} \)  

---

## Expected Complexity  
- **Time Complexity:** \( O(n) \)  
- **Space Complexity:** \( O(1) \) (excluding the result array)  

---

## Code  

```python
def frequencyCount(arr: list[int]) -> list[int]:
    """
    Calculates the frequency of numbers in the range 1 to n.
    
    Args:
    arr (list[int]): The input array containing integers ranging from 1 to n.
    
    Returns:
    list[int]: An array where result[i] represents the frequency of number i+1.
    """
    n = len(arr)
    result = [0] * n
    for num in arr:
        if 1 <= num <= n:
            result[num - 1] += 1
    return result

# Example Usage
arr1 = [2, 3, 2, 3, 5]
print(frequencyCount(arr1))  # Output: [0, 2, 2, 0, 1]

arr2 = [3, 3, 3, 3]
print(frequencyCount(arr2))  # Output: [0, 0, 4, 0]

arr3 = [1]
print(frequencyCount(arr3))  # Output: [1]
