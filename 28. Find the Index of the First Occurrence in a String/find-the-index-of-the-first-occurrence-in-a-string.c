int strStr(const char *haystack, const char *needle) {
    int n = strlen(haystack);
    int m = strlen(needle);

    if (m == 0) return 0;  // Handle empty edge case for the needle

    for (int i = 0; i <= n - m; i++) { // Loop over the haystack
        int j = 0;
        while (j < m && haystack[i + j] == needle[j]) { // If j is still smaller than haystack.length and matches with the needle
            j++; // Move the j counter forward
        }
        if (j == m) { // If after the loop exit the length is the same as the needle
            return i; // Return the index
        }

        // Otherwise we continue looping through the haystack and reset j to 0
    }

    return -1;  // Not found
}