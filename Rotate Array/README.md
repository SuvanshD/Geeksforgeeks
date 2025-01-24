# Rotate Array

**Difficulty:** Medium  
**Accuracy:** 37.06%  
**Submissions:** 442K+  
**Points:** 4  

---

## Problem Description  
Given an array `arr[]`, rotate the array to the **left** (counter-clockwise direction) by `d` steps, where `d` is a positive integer. Perform the mentioned change in the array **in place**.

**Note:** Consider the array as circular.

---

## Examples  

### Example 1:  
**Input:**  
`arr[] = [1, 2, 3, 4, 5]`, `d = 2`  

**Output:**  
`[3, 4, 5, 1, 2]`  

**Explanation:**  
When rotated by 2 elements, it becomes `3, 4, 5, 1, 2`.

---

### Example 2:  
**Input:**  
`arr[] = [2, 4, 6, 8, 10, 12, 14, 16, 18, 20]`, `d = 3`  

**Output:**  
`[8, 10, 12, 14, 16, 18, 20, 2, 4, 6]`  

**Explanation:**  
When rotated by 3 elements, it becomes `8, 10, 12, 14, 16, 18, 20, 2, 4, 6`.

---

### Example 3:  
**Input:**  
`arr[] = [7, 3, 9, 1]`, `d = 9`  

**Output:**  
`[3, 9, 1, 7]`  

**Explanation:**  
When we rotate 9 times, we'll get `3, 9, 1, 7` as the resultant array.

---

## Constraints  
- \( 1 \leq \text{arr.size()}, d \leq 10^5 \)  
- \( 0 \leq \text{arr}[i] \leq 10^5 \)  
