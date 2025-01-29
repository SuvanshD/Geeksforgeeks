# Union of Two Sorted Arrays with Duplicates  


**Difficulty:** Medium  
**Accuracy:** 31.39%  
**Submissions:** 395K+  
**Points:** 4  

---

## Problem Description  
Given two sorted arrays `a[]` and `b[]`, where each array may contain duplicate elements, the task is to return the **union** of the two arrays in sorted order.  

The **union** of two arrays is the set of distinct elements that are present in either of the arrays.

---

## Examples  

### Example 1:  
**Input:**  
`a[] = [1, 2, 3, 4, 5]`, `b[] = [1, 2, 3, 6, 7]`  

**Output:**  
`1 2 3 4 5 6 7`  

**Explanation:**  
Distinct elements in both arrays are: `1, 2, 3, 4, 5, 6, 7`.

---

### Example 2:  
**Input:**  
`a[] = [2, 2, 3, 4, 5]`, `b[] = [1, 1, 2, 3, 4]`  

**Output:**  
`1 2 3 4 5`  

**Explanation:**  
Distinct elements in both arrays are: `1, 2, 3, 4, 5`.

---

### Example 3:  
**Input:**  
`a[] = [1, 1, 1, 1, 1]`, `b[] = [2, 2, 2, 2, 2]`  

**Output:**  
`1 2`  

**Explanation:**  
Distinct elements in both arrays are: `1, 2`.

---

## Constraints  
- \( 1 \leq \text{a.size()}, \text{b.size()} \leq 10^5 \)  
- \( -10^9 \leq \text{a}[i], \text{b}[i] \leq 10^9 \)  
