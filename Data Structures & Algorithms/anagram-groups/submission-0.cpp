class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>> mappa;
        for(auto &it:strs){
            string s = it;
            sort(s.begin(),s.end());
            mappa[s].push_back(it);
        }

        vector<vector<string>> ans;
        for(auto &it:mappa){
            ans.push_back(it.second);
        }
        return ans;
    }
};
