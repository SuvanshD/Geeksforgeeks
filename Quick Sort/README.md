# Quick Sort

**Difficulty:** Medium  
**Accuracy:** 55.23%  
**Submissions:** 248K+  
**Points:** 4  

---

## Problem Description  
Implement **Quick Sort**, a Divide and Conquer algorithm, to sort an array `arr[]` in ascending order.  
Given an array `arr[]` with starting index `low` and ending index `high`, complete the functions `partition()` and `quickSort()`.  

Use the last element as the pivot so that:  
- All elements less than or equal to the pivot come before it.  
- Elements greater than the pivot follow it.  

**Note:** The `low` and `high` indices are inclusive.  

---

## Examples  

### Example 1:  
**Input:**  
`arr[] = [4, 1, 3, 9, 7]`  

**Output:**  
`[1, 3, 4, 7, 9]`  

**Explanation:**  
After sorting, all elements are arranged in ascending order.  

---

### Example 2:  
**Input:**  
`arr[] = [2, 1, 6, 10, 4, 1, 3, 9, 7]`  

**Output:**  
`[1, 1, 2, 3, 4, 6, 7, 9, 10]`  

**Explanation:**  
Duplicate elements (1) are retained in sorted order.  

---

### Example 3:  
**Input:**  
`arr[] = [5, 5, 5, 5]`  

**Output:**  
`[5, 5, 5, 5]`  

**Explanation:**  
All elements are identical, so the array remains unchanged.  

---

## Constraints  
- \( 1 \leq \text{arr.size()} \leq 10^5 \)  
- \( 1 \leq \text{arr}[i] \leq 10^5 \)  
