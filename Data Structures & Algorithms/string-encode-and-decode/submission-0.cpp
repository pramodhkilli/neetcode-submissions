class Solution {
public:

    string encode(vector<string>& strs) {
        string ans;
        for(auto &it:strs){
            ans+=to_string(it.size());
            ans.push_back('#');
            ans+=it;
        }
        return ans;
    }

    vector<string> decode(string s) {
        int size = 0;
        int i = 0;
        int cur = 0;
        vector<string> ans;
        for(int j = 0;j<s.size();j++){
            if(s[j]=='#'){
                ans.push_back(s.substr(j+1,cur));
                j+=cur;
                cur = 0;
            }else{
                cur*=10;
                cur+=s[j]-'0';
            }
        }
        return ans;
    }
};
