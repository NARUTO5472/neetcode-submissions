class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();

        int maxarea = 0;

        int L = 0;
        int R = n-1;

        while(L<R)
        {
            int area = 0;

            if(height[L] > height[R])
            {
                area = height[R]*(R-L);
                R--;
            }

            else if(height[L] < height[R])
            {
                area = height[L]*(R-L);
                L++;
            }

            else
            {
                area = height[L]*(R-L);
                L++;
                R--;
            }
            
            maxarea = max(maxarea, area);
        }
        return maxarea;
    }
};