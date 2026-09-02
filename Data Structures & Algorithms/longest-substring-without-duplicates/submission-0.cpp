class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> seen;

        int L= 0;
        int ans= 0;

        int n = s.size();
        for(int R = 0; R<n; R++)
        {
            while(seen.find(s[R]) != seen.end())
            {
                seen.erase(s[L]);
                L++;
            }
            seen.insert(s[R]);

            ans = max(ans, R-L+1);
        }

        return ans;
    }
};
