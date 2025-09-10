// Last updated: 10/09/2025, 07:03:01
class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) { 
        int n = nums.size(); 
        int count[101];
        for(int i = 0; i < n;i++){
            if(++count[nums[i]]>=3){
                return false;
            }
        }
        return true;
    }
};