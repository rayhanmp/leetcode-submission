<h2>Valid Parentheses</h2> <img src='https://img.shields.io/badge/Difficulty-Easy-brightgreen' alt='Difficulty: Easy' /><hr>
<p>Time: 0 ms (100.00%) | Memory: 5.42 MB (72.26%)</p>

<p>Given a string s containing just the characters <code>'(', ')', '{', '}', '[' and ']'</code>, determine if the input string is valid.</p>

<p>An input string is valid if:</p>

1. Open brackets must be closed by the same type of brackets.
2. Open brackets must be closed in the correct order.
3. Every close bracket has a corresponding open bracket of the same type.
 

Example 1:
<pre>
Input: s = "()"
Output: true
</pre>

Example 2:
<pre>
Input: s = "()[]{}"
Output: true
</pre>

Example 3:
<pre>
Input: s = "(]"
Output: false
 </pre>

Constraints:
1. <code>1 <= s.length <= 104</code>
2. <code>s consists of parentheses only '()[]{}'</code>
