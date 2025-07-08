<h2>Find the Index of the First Occurrence in a String</h2> <img src='https://img.shields.io/badge/Difficulty-Easy-brightgreen' alt='Difficulty: Easy' />
<p><strong>Time:</strong> 0 ms (100.00%) | <strong>Memory:</strong> 7.99 MB (69.71)</p>
<hr>
<p>Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.</p>

**Example 1:**
<pre>Input: haystack = "sadbutsad", needle = "sad"
Output: 0
Explanation: "sad" occurs at index 0 and 6.
The first occurrence is at index 0, so we return 0.</pre>

**Example 2:**
<pre>Input: haystack = "leetcode", needle = "leeto"
Output: -1
Explanation: "leeto" did not occur in "leetcode", so we return -1.</pre>

<hr>
Constraints:

1. <code>1 <= haystack.length</code>
2. <code>needle.length <= 10<sup>4</sup></code>
2. `haystack` and `needle` consist of only lowercase English characters.
