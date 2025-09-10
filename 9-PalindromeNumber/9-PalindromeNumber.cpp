// Last updated: 10/09/2025, 07:03:06
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        long int reversed = 0;
        long int y = x;
        while (x != 0) {
            int digit = x % 10;               // Get last digit
            reversed = reversed * 10 + digit; // Append digit
            x = x / 10;                       // Remove last digit
        }
        if (y == reversed)
            return true;
        else
            return false;
    }
};