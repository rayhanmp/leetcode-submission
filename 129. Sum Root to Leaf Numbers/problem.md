<h2>Sum Root to Leaf Numbers</h2> <img src='https://img.shields.io/badge/Difficulty-Medium-orange' alt='Difficulty: Medium' />
<p><strong>Time:</strong> 1 ms (4.68%) | <strong>Memory:</strong> 8.54 MB (61.54)</p>
<hr>
<p>You are given the root of a binary tree containing digits from 0 to 9 only.

`Each root-to-leaf path in the tree represents a number.`

For example, the root-to-leaf `path 1 -> 2 -> 3` represents the number `123`.
</p>
<p>
Return the total sum of all root-to-leaf numbers. Test cases are generated so that the answer will fit in a 32-bit integer.</p>
<p>
A leaf node is a node with no children.</p>

**Example 1:**
<pre>Input: root = [1,2,3]
Output: 25
Explanation: The root-to-leaf path 1->2 represents the number 12.
The root-to-leaf path 1->3 represents the number 13.
Therefore, sum = 12 + 13 = 25.</pre>

**Example 2:**
<pre>Input: root = [4,9,0,5,1]
Output: 1026
Explanation: The root-to-leaf path 4->9->5 represents the number 495.
The root-to-leaf path 4->9->1 represents the number 491.
The root-to-leaf path 4->0 represents the number 40.
Therefore, sum = 495 + 491 + 40 = 1026.</pre>

<hr>
Constraints:

1. The number of nodes in the tree is in the range `[1, 1000]`.
2. `0 <= Node.val <= 9`
2. The depth of the tree will not exceed `10`.
