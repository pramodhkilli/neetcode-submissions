class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> settu;
        for(auto &it:nums){
            settu.insert(it);
        }
        int ans = 0;
        for(auto &it:nums){
            if(settu.find(it-1)==settu.end()){
                int temp = it;
                while(settu.find(temp)!=settu.end()){
                    temp++;
                }
                ans = max(ans,temp-it);
            }
        }
        return ans;
    }
};
