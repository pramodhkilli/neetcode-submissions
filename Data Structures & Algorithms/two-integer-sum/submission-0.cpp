class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mappa;
        for(int i = 0;i<nums.size();i++){
            if(mappa.find(target-nums[i])!=mappa.end()){
                return {mappa[target-nums[i]],i};
            }
            mappa[nums[i]] = i;
        }
    }
};
