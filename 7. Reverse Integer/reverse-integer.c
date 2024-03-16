int reverse(int x){
    long int rev = 0;
    int temp = x;
    int rem = 0;

    if (x>0) {
        while (temp>0) {
            if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && rem > 7)) return 0; // Check whether rev*10 exceeds INT_MAX for int32, also handle the edge case where the last digit may cause an overflow
            rem = temp % 10;
            rev = rev *10 + rem;
            temp /= 10;
        }
    }
    else {
        if (temp == INT_MIN) return 0; // Handle edge case for -2,147,483,648 since int32 only stores up to 2,147,483,647
        temp *= -1;
        while (temp>0) {
            if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && rem > 7)) return 0;
            rem = temp % 10;
            rev = rev *10 + rem;
            temp /= 10;
        }
        rev *= -1;
    }
    return rev;
}