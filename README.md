# Leetcode-1123.-Lowest-Common-Ancestor-of-Deepest-Leaves
# 🌿 Lowest Common Ancestor of Deepest Leaves

## 📘 Problem Statement

Given the root of a binary tree, return the **lowest common ancestor** (LCA) of its deepest leaves.

---

## 🧠 Approach

### Step 1: Depth Calculation 🌊

* Traverse the tree using DFS.
* Record the **depth** of every node in a hash map.
* Track the **maximum depth** encountered.

### Step 2: Find LCA 🧭

* Recursively check each node.
* If the node is `NULL` or at the **deepest level**, return it.
* Recurse on both left and right subtrees.

  * If both return a non-null node, current node is LCA.
  * Else return the non-null child.

---

## ⏱️ Time Complexity

* **O(n)** where `n` is the number of nodes — each node is visited once.

## 🧠 Space Complexity

* **O(h)** for system recursion stack where `h` is the height of the tree.
* **O(n)** for depth map.

---

## 🧪 Example

Input Tree:

```
        1
      /   \
     2     3
    /     / \
   4     5   6
```

Deepest leaves: 4, 5, 6
LCA: 1

---

## 👨‍💻 Author

* **Name**: Ridham Garg
* 🎓 Thapar Institute of Engineering and Technology
* 📧 Email: [Ridhamgarg000@gmail.com](mailto:Ridhamgarg000@gmail.com)

---

🌳 A tree may have many branches, but all roots lead to clarity! ✨🍃
