
class Solution {
public:
    int minimum(int x,int y)
    {
        if (x<y)
        return x;
        else
        return y;
    }
    int maxArea(vector<int>& heights) {
       int max=0;
       int left=0;
       int right=heights.size()-1;
       while(left<right)
        {
            int area=(right-left)*(minimum(heights[left],heights[right]));
            if (max<area)
                max=area;
            if(heights[left]>heights[right])
               { right--;
                continue;
               }
            if(heights[left]<=heights[right])
                {left++;
                continue;
                }

          /*  if(heights[left]==heights[right])
            {
                left++;
                right--;
            }*/
        }
        return max;
    }
};
