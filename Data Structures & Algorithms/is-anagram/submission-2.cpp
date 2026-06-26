class Solution {
public:
    bool isAnagram(string s, string t) {
        int size1= s.size();
        int size2= t.size();
        vector <int> freq (26,0);
        if(size1 != size2){
            return false;
        }
        else{
            for(char ch:s){
                freq[ch - 'a']++;
            }
            for(char ch:t){
                freq[ch - 'a']--;
            }
            for(int i:freq){
                if(i != 0){
                    return false;
                }
            }
            return true;
        }
    }
};
