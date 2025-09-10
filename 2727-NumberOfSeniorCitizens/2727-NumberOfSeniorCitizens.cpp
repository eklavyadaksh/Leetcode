// Last updated: 10/09/2025, 07:03:02
class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count = 0;
        int age = 0;
        int a, b;
        for (int i = 0; i < details.size(); i++) {
            a = details[i][11]-'0';
            b = details[i][12]-'0';
            age = a*10 + b;
            
            if (age > 60)
                count++;
        }
        return count;
    }
};