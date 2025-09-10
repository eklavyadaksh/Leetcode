// Last updated: 10/09/2025, 07:02:59
class Solution {
public:
    string reverseVowels(string s) {
        int i = 0, n = s.size() - 1;

        while (i < n) {
            while (i < n &&
                   !(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' ||
                     s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' ||
                     s[i] == 'O' || s[i] == 'U')) {
                i++;
            }

            while (i < n &&
                   !(s[n] == 'a' || s[n] == 'e' || s[n] == 'i' || s[n] == 'o' ||
                     s[n] == 'u' || s[n] == 'A' || s[n] == 'E' || s[n] == 'I' ||
                     s[n] == 'O' || s[n] == 'U')) {
                n--;
            }

            if (i < n) {
                swap(s[i], s[n]);
                i++;
                n--;
            }
        }

        return s;
    }
};