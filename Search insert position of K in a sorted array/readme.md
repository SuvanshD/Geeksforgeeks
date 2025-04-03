# Floor in a Sorted Array

**Difficulty:** Easy  
**Accuracy:** 33.75%  
**Submissions:** 467K+  
**Points:** 2  
**Average Time:** 30m  

## Problem Statement
Given a sorted array `arr[]` and an integer `x`, find the index (0-based) of the largest element in `arr[]` that is less than or equal to `x`. This element is called the **floor** of `x`. If such an element does not exist, return `-1`.

**Note:** In case of multiple occurrences of the floor of `x`, return the index of the last occurrence.

## Examples

### Example 1
**Input:**  
```plaintext
arr[] = [1, 2, 8, 10, 10, 12, 19], x = 5
```
**Output:**  
```plaintext
1
```
**Explanation:** Largest number less than or equal to `5` is `2`, whose index is `1`.

### Example 2
**Input:**  
```plaintext
arr[] = [1, 2, 8, 10, 10, 12, 19], x = 11
```
**Output:**  
```plaintext
4
```
**Explanation:** Largest number less than or equal to `11` is `10`, whose indices are `3` and `4`. The index of the last occurrence is `4`.

### Example 3
**Input:**  
```plaintext
arr[] = [1, 2, 8, 10, 10, 12, 19], x = 0
```
**Output:**  
```plaintext
-1
```
**Explanation:** No element less than or equal to `0` is found. So, output is `-1`.

## Constraints
- `1 ≤ arr.size() ≤ 10^6`
- `1 ≤ arr[i] ≤ 10^6`
- `0 ≤ x ≤ arr[n-1]`
