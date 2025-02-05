# Intersection of Two Sorted Arrays  

**Difficulty:** Easy  
**Accuracy:** 42.53%  
**Submissions:** 66K+  
**Points:** 2  

---

## Problem Description  
Given two sorted arrays `arr1[]` and `arr2[]`, the task is to return the **intersection** of both arrays.  

The **intersection** of two arrays consists of elements that are **common** in both arrays.  
The intersection should **not** include duplicate elements.  

If there is no intersection, return an **empty array**.

---

## Examples  

### Example 1:  
**Input:**  
`arr1[] = [1, 2, 3, 4]`, `arr2[] = [2, 4, 6, 7, 8]`  

**Output:**  
`[2, 4]`  

**Explanation:**  
`2` and `4` are the only common elements in both arrays.

---

### Example 2:  
**Input:**  
`arr1[] = [1, 2, 2, 3, 4]`, `arr2[] = [2, 2, 4, 6, 7, 8]`  

**Output:**  
`[2, 4]`  

**Explanation:**  
`2` and `4` are the only common elements. Duplicates are not counted.

---

### Example 3:  
**Input:**  
`arr1[] = [1, 2]`, `arr2[] = [3, 4]`  

**Output:**  
`[]`  

**Explanation:**  
No common elements.

---

## Expected Time Complexity  
- **O(n + m)**, where `n` and `m` are the sizes of the arrays.  

## Expected Auxiliary Space  
- **O(min(n, m))**  

---

## Constraints  
- \( 1 \leq \text{arr1.size()}, \text{arr2.size()} \leq 10^5 \)  
- \( 1 \leq \text{arr1}[i], \text{arr2}[i] \leq 10^6 \)  
