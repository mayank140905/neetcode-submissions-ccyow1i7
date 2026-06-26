class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // since we need to grp , we use hashmap
        unordered_map <string, vector<string>> mp;

        for(string s: strs){
            string temp = s;
            sort(temp.begin(),temp.end());

            mp[temp].push_back(s);
        }
        // values ka vector 
        vector <vector <string>> ans;
        for (auto &it: mp){
            ans.push_back(it.second);
        } 
        return ans;
    }
};
