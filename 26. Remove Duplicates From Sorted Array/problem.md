<h2>Remove Duplicates from Sorted Array</h2> <img src='https://img.shields.io/badge/Difficulty-Easy-brightgreen' alt='Difficulty: Easy' />
<p><strong>Time:</strong> 0 ms (100.00%) | <strong>Memory:</strong> 19.00 MB (48.47%)</p>
<hr>
<p>Given an integer array <code>nums</code> sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same.</p>

<p>Consider the number of unique elements in <code>nums</code> to be <code>k</code>. After removing duplicates, return the number of unique elements <code>k</code>.</p>

<p>The first <code>k</code> elements of <code>nums</code> should contain the unique numbers in sorted order. The remaining elements beyond index <code>k - 1</code> can be ignored.</p>

**Custom Judge:**

<p>The judge will test your solution with the following code:</p>
<pre>int[] nums = [...]; // Input array
int[] expectedNums = [...]; // The expected answer with correct length

int k = removeDuplicates(nums); // Calls your implementation

assert k == expectedNums.length;
for (int i = 0; i < k; i++) {
    assert nums[i] == expectedNums[i];
}
</pre>

<p>If all assertions pass, then your solution will be accepted.</p>

<hr>

**Example 1:**
<pre>Input: nums = [1,1,2]
Output: 2, nums = [1,2,_]
Explanation: Your function should return k = 2, with the first two elements of nums being 1 and 2 respectively.
It does not matter what you leave beyond the returned k (hence they are underscores).</pre>

**Example 2:**
<pre>Input: nums = [0,0,1,1,1,2,2,3,3,4]
Output: 5, nums = [0,1,2,3,4,_,_,_,_,_]
Explanation: Your function should return k = 5, with the first five elements of nums being 0, 1, 2, 3, and 4 respectively.
It does not matter what you leave beyond the returned k (hence they are underscores).</pre>

<hr>
Constraints:

1. <code>1 <= nums.length <= 3 * 10<sup>4</sup></code>
2. <code>-100 <= nums[i] <= 100</code>
3. <code>nums is sorted in non-decreasing order</code>

