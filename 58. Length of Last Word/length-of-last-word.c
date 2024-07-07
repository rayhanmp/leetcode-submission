/* 
Start from the end of the string and skip the trailing spaces.
Then we count the length of the last word by iterating it until we hit a space.
*/

int lengthOfLastWord(char* s) {
    int length = 0;
    int i = strlen(s) - 1; // Find the length of the string

    while (i>=0 && (s[i] == ' ') ) { // Skip the trailing spaces
        i--;
    };

    while (i>=0 && !(s[i] == ' ') ) { // Count the length of the last word
        i--;
        length++;
    }

    return length;
}