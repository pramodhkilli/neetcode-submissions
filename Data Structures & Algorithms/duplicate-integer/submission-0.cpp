class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> settu;
        for(auto &it:nums){
            if(settu.find(it)!=settu.end()){
                return true;
            }
            settu.insert(it);
        }
        return false;
    }
};