class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        if (s1.size() > s2.size())
            return false;

        int count1[26] = {0};
        int count2[26] = {0};

        // Count characters in s1
        for (char c : s1) {
            count1[c - 'a']++;
        }

        // First window of s2
        for (int i = 0; i < s1.size(); i++) {
            count2[s2[i] - 'a']++;
        }

        // Check first window
        if (equal(begin(count1), end(count1), begin(count2)))
            return true;

        // Slide the window
        for (int R = s1.size(); R < s2.size(); R++) {

            // Add new character
            count2[s2[R] - 'a']++;

            // Remove old character
            int L = R - s1.size();
            count2[s2[L] - 'a']--;

            // Check if frequencies match
            if (equal(begin(count1), end(count1), begin(count2)))
                return true;
        }

        return false;
    }
};