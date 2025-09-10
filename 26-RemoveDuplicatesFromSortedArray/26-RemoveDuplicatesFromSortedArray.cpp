// Last updated: 10/09/2025, 07:03:05
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count = 1;
        for (int i = 1; i < nums.size(); i++) {

            if (nums[i] != nums[i - 1]) {
                nums[count] = nums[i];
                count++;
            }
        }
        return count;
    }
};