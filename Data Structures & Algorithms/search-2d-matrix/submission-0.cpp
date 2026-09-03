class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix[0].size();
        int m = matrix.size();

        int l = 0;
        int r = n*m - 1;

        while(l<=r)
        {
            int mid = (l+r)/2;
            int midValue = matrix[mid/n][mid%n];

            if(target == midValue)
            {
                return true;
            }

            else if(target > midValue)
            {
                l = mid+1;
            }

            else
            {
                r = mid-1;
            }
        }

        return false;
    }
};
