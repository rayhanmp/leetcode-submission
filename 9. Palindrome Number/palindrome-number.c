bool isPalindrome(int x) {
    if (x<0) return false; // If x<0 then it can't be palindrome

    long int rev = 0;
    int temp = x;
    int rem = 0;

    while (temp>0) { // Loop as long as temp is above 0
        rem = temp % 10;
        rev = rev *10 + rem;
        temp /= 10;
    }


    /* The idea is to use try recreate the number but backwards, for example:
            x = 121
            temp = 121
            rem = 0
            rev = 0

            ------

            rem = 1
            rev = 1
            temp = 12

            ------

            rem = 2
            rev = 12
            temp = 1

            ------

            rem = 1
            rev = 121
            temp = 0

            In that case, x == 121 (true).
    */

    return x == rev; // Check if the calc results to the same number
}

