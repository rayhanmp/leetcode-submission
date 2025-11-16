<h2>Plus One</h2> <img src='https://img.shields.io/badge/Difficulty-Easy-brightgreen' alt='Difficulty: Easy' />
<p><strong>Time:</strong> 0 ms (100.00%) | <strong>Memory:</strong> 17.96 MB (8.76%)</p>
<hr>
<p>You are given a large integer represented as an integer array <code>digits</code>, where each <code>digits[i]</code> is the <code>i<sup>th</sup></code> digit of the integer. The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading 0's.</p>

<p>Increment the large integer by one and return the resulting array of digits.</p>

<hr>

**Example 1:**
<pre>Input: digits = [1,2,3]
Output: [1,2,4]
Explanation: The array represents the integer 123.
Incrementing by one gives 123 + 1 = 124.
Thus, the result should be [1,2,4].</pre>

**Example 2:**
<pre>Input: digits = [4,3,2,1]
Output: [4,3,2,2]
Explanation: The array represents the integer 4321.
Incrementing by one gives 4321 + 1 = 4322.
Thus, the result should be [4,3,2,2].</pre>

**Example 3:**
<pre>Input: digits = [9]
Output: [1,0]
Explanation: The array represents the integer 9.
Incrementing by one gives 9 + 1 = 10.
Thus, the result should be [1,0].</pre>

<hr>
Constraints:

1. <code>1 <= digits.length <= 100</code>
2. <code>0 <= digits[i] <= 9</code>
3. <code>digits does not contain any leading 0's</code>
