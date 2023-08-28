class Solution {
public:
    bool checkPattern(string s,string pattern){
        if(s.size()!=pattern.size())return false;
        unordered_map<char,char>mpp1,mpp2;

        for(int i=0;i<s.size();i++){
            if(mpp1.find(s[i])==mpp1.end())mpp1[s[i]]=pattern[i];
            if(mpp2.find(pattern[i])==mpp2.end())mpp2[pattern[i]]=s[i];

            if(mpp1[s[i]]!=pattern[i] || mpp2[pattern[i]]!=s[i])return false; 
        }
        return true;
    }
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string>ans;

        for(int i=0;i<words.size();i++){
            if(checkPattern(words[i],pattern))
                ans.push_back(words[i]);
        }
        return ans;
    }
};
