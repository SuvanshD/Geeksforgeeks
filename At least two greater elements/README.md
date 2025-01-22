# At Least Two Greater Elements

**Difficulty:** Basic  
**Accuracy:** 58.49%  
**Submissions:** 57K+  
**Points:** 1  

---

## Problem Description  
Given an array `arr` of distinct elements, the task is to return an array of all elements except the two greatest elements in **sorted order**.

---

## Examples  

### Example 1:  
**Input:**  
`arr[] = [2, 8, 7, 1, 5]`  

**Output:**  
`[1, 2, 5]`  

**Explanation:**  
The two greatest elements are 7 and 8. The remaining elements, sorted, are `[1, 2, 5]`.  

---

### Example 2:  
**Input:**  
`arr[] = [7, -2, 3, 4, 9, -1]`  

**Output:**  
`[-2, -1, 3, 4]`  

**Explanation:**  
The two greatest elements are 7 and 9. The remaining elements, sorted, are `[-2, -1, 3, 4]`.  

---

## Expected Time Complexity  
- **O(nlog(n))**  

## Expected Space Complexity  
- **O(n)**  

---

## Constraints  
- \( 3 \leq \text{arr.size()} \leq 10^5 \)  
- \( -10^6 \leq \text{arr}[i] \leq 10^6 \)  
