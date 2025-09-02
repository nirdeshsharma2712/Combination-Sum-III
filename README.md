# 📊 LeetCode Problem: Combination Sum III

## 🧩 Problem Statement

Find all **valid combinations** of `k` numbers that **sum up to n** such that the following conditions are true:
- Only numbers `1` through `9` are used.
- Each number is used at most **once**.
Return a list of all possible **valid combinations**. The list must not contain the **same combination twice**, and the combinations may be returned in **any order**.

> **Note :**
> - Use Recursion + backtracking for solving the problem.


## 🧠 Approach: Two-Pointer Technique

- Start with an empty **combination** and try picking numbers from `1` to `9`.
- At every step, add the **chosen number** and move forward with **reduced target**.
- If the **combination size** exceeds `k` or the sum goes beyond the target -> **backtrack immediately**.
- If we find a **combination** of size `k` that **equals the target** -> store it.
- Continue exploring until **all possibilities** are checked.



## ✅ Example Walkthrough

### Example 1

##### Input: k = 3, n = 7
##### Output: [[1,2,4]]

##### Explanation: 
<pre> 
- 1 + 2 + 4 = 7
- There are no other valid combinations.
  
</pre>

### Example 2

##### Input: k = 3, n = 9
##### Output: [[1,2,6],[1,3,5],[2,3,4]]

##### Explanation: 
<pre> 
- 1 + 2 + 6 = 9
- 1 + 3 + 5 = 9
- 2 + 3 + 4 = 9
- There are no other valid combinations.
  
</pre>

### Example 3

##### Input: k = 4, n = 1
##### Output: []

##### Explanation: 
<pre> 
- There are no valid combinations.
- Using 4 different numbers in the range [1,9], the smallest sum we can get is 1+2+3+4 = 10 and since 10 > 1, there are no valid combination.
  
</pre>

## 🛠️ Constraints

- `2 <= k <= 9`
- `1 <= n <= 60`
