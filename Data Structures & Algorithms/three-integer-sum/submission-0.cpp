class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;

        for(int k = 0; k < (int)nums.size() - 2; k++)
        {
            if(k > 0 && nums[k] == nums[k-1]) continue;

            int i = k + 1;
            int j = nums.size() - 1;

            while(i < j)
            {
                int sum = nums[k] + nums[i] + nums[j];
                if(sum < 0)
                {
                    i++;
                }
                else if(sum > 0)
                {
                    j--;
                }
                else
                {
                    res.push_back({nums[k], nums[i], nums[j]});
                    while(i < j && nums[i] == nums[i+1]) i++;
                    while(i < j && nums[j] == nums[j-1]) j--;
                    i++;
                    j--;
                }
            }
        }

        return res;
    }
};