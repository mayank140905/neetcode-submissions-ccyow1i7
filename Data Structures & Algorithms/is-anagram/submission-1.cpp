class Solution {
public:
    bool isAnagram(string s, string t) {
        int size1 = s.size();
        int size2 = t.size();
        vector <int> freq1(26,0);
        vector <int> freq2(26,0);
        if(size1 !=size2){
            return false;
        }   
        else{
            for(int i=0;i<s.size();i++){
                freq1[s[i]-'a']++;
            }
            for(int i=0;i<t.size();i++){
                freq2[t[i]-'a']++;
            }
            if(freq1==freq2){
                return true;
            } 
            else{
                return false;
            }
        }
    }
};
