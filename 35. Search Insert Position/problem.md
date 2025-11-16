<h2>Search Insert Position</h2> <img src='https://img.shields.io/badge/Difficulty-Easy-brightgreen' alt='Difficulty: Easy' />
<p><strong>Time:</strong> 0 ms (100.00%) | <strong>Memory:</strong> 18.64 MB (26.34%)</p>
<hr>
<p>Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.</p>

<p>You must write an algorithm with <code>O(log n)</code> runtime complexity.</p>

<hr>

**Example 1:**
<pre>Input: nums = [1,3,5,6], target = 5
Output: 2</pre>

**Example 2:**
<pre>Input: nums = [1,3,5,6], target = 2
Output: 1</pre>

**Example 3:**
<pre>Input: nums = [1,3,5,6], target = 7
Output: 4</pre>

<hr>
Constraints:

1. <code>1 <= nums.length <= 10<sup>4</sup></code>
2. <code>-10<sup>4</sup> <= nums[i] <= 10<sup>4</sup></code>
3. <code>nums contains distinct values sorted in ascending order</code>
4. <code>-10<sup>4</sup> <= target <= 10<sup>4</sup></code>
