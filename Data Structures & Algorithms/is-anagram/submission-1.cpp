class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map <char,int> mpp1;
        unordered_map <char,int> mpp2;

        int s_length = s.length();
        int t_length = t.length();

        if(s_length != t_length){
            return false;
        }

        for(int i = 0; i<s_length; i++)
        {
            mpp1[s[i]]++;
            mpp2[t[i]]++;
        }

        for(char i: s){
            if (mpp1[i] != mpp2[i])
            {
                return false;
            }

        }
        return true;
    }
};
