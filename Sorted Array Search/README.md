# Sorted Array Search

**Difficulty:** Basic  
**Accuracy:** 48.03%  
**Submissions:** 319K+  
**Points:** 1  

---

## Problem Description  
Given an array `arr[]` sorted in ascending order and an integer `k`, return **true** if `k` is present in the array; otherwise, return **false**.

---

## Examples  

### Example 1:  
**Input:**  
`arr[] = [1, 2, 3, 4, 6]`, `k = 6`  

**Output:**  
`true`  

**Explanation:**  
Since `6` is present in the array at index `4` (0-based indexing), the output is `true`.

---

### Example 2:  
**Input:**  
`arr[] = [1, 2, 4, 5, 6]`, `k = 3`  

**Output:**  
`false`  

**Explanation:**  
Since `3` is not present in the array, the output is `false`.

---

### Example 3:  
**Input:**  
`arr[] = [2, 3, 5, 6]`, `k = 1`  

**Output:**  
`false`  

**Explanation:**  
Since `1` is not present in the array, the output is `false`.

---

## Constraints  
- \( 1 \leq \text{arr.size()} \leq 10^6 \)  
- \( 1 \leq k \leq 10^6 \)  
- \( 1 \leq \text{arr}[i] \leq 10^6 \)  
