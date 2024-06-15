<h2>Add Two Numbers</h2> <img src='https://img.shields.io/badge/Difficulty-Medium-orange' alt='Difficulty: Medium' />
<p><strong>Time:</strong> 6 ms (91.63%) | <strong>Memory:</strong> 7.64 MB (39.85%)</p>
<hr>

<p>You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.</p>

<p>You may assume the two numbers do not contain any leading zero, except the number 0 itself.</p>

<hr>

**Example 1:**
<pre>
Input: l1 = [2, 4, 3], l2 = [5, 6, 4]
Output: [7, 0, 8]
Explanation: 342 + 465 = 807
</pre>

**Example 2:**
<pre>
Input: ;1 = [0], l2 = [0]
Output: [0]
</pre>

**Example 3:**
<pre>
Input: l1 = [9,9,9,9,9,9,9], l2 = [9,9,9,9]
Output: [8,9,9,9,0,0,0,1]
</pre>

<hr>
Constraints:

1. <code>The number of nodes in each linked list is in the range [1, 100].</code>
2. <code>0 <= Node.val <= 9</code>
3. <code>It is guaranteed that the list represents a number that does not have leading zeros.</code>
