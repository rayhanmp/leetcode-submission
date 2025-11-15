<h2>3Sum</h2> <img src='https://img.shields.io/badge/Difficulty-Medium-orange' alt='Difficulty: Medium' />
<p><strong>Time:</strong> 598 ms (42.13%) | <strong>Memory:</strong> 20.78 MB (37.23%)</p>
<hr>
<p>Given an integer array <code>nums</code>, return all the triplets <code>[nums[i], nums[j], nums[k]]</code> such that <code>i != j</code>, <code>i != k</code>, and <code>j != k</code>, and <code>nums[i] + nums[j] + nums[k] == 0</code>.</p>
<p>Notice that the solution set must not contain duplicate triplets.</p>

**Example 1:**
<pre>Input: nums = [-1,0,1,2,-1,-4]
Output: [[-1,-1,2],[-1,0,1]]
Explanation: 
nums[0] + nums[1] + nums[2] = (-1) + 0 + 1 = 0.
nums[1] + nums[2] + nums[4] = 0 + 1 + (-1) = 0.
nums[0] + nums[3] + nums[4] = (-1) + 2 + (-1) = 0.
The distinct triplets are [-1,0,1] and [-1,-1,2].
Notice that the order of the output and the order of the triplets does not matter.</pre>

**Example 2:**
<pre>Input: nums = [0,1,1]
Output: []
Explanation: The only possible triplet does not sum up to 0.</pre>

**Example 3:**
<pre>Input: nums = [0,0,0]
Output: [[0,0,0]]
Explanation: The only possible triplet sums up to 0.</pre>

<hr>
Constraints:

1. <code>3 <= nums.length <= 3000</code>
2. <code>-10<sup>5</sup> <= nums[i] <= 10<sup>5</sup></code>
