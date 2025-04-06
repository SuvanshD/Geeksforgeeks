# Binary Tree Representation

**Difficulty:** Easy  
**Accuracy:** 75.76%  
**Submissions:** 38K+  
**Points:** 2  
**Average Time:** 15m  

## Problem Statement

You are given an array `nodes` containing **7 integers**, which represent the values of the nodes of a binary tree in **level order traversal**.  
You are also given the root of the tree which has a value equal to `nodes[0]`.

Your task is to construct a binary tree by creating nodes for the remaining 6 values.

## Example

**Input:**  
`nodes = [1, 2, 3, 4, 5, 6, 7]`  

**Output:**  
```
         1
       /   \
     2       3
   /  \     /  \
   4   5   6   7
```

**Explanation:**  
The 7-node binary tree is represented above.

## Your Task

Complete the function `void create_tree(node* root0, vector &vec)`, which takes the root of a binary tree and a vector array `vec` containing the values of nodes.

### Expected Time Complexity:  
O(1)

### Expected Auxiliary Space:  
O(1)

## Constraints

- `vec.length = 7`
- `1 <= vec[i] <= 100`