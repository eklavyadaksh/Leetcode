// Last updated: 10/09/2025, 07:03:08
class Solution {
public:
    int reverse(int x) {
        long long int rev=0;
        long long int n = 1;
        while(x!=0){
            n=x%10;
            rev=rev*10+n;
            x=x/10;
        }
        
        if(rev>pow(2,31)-1 || rev<pow(-2,31))
            return 0;
        else
        return rev;
    }
};