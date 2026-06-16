class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> result;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++)
        {
            int left =i+1;
            int right=nums.size()-1;
            while(left<right)
            {
                if((nums[i]+nums[left]+nums[right])==0)
                   {
                    vector<int>temp;
                    temp.push_back(nums[i]);
                    temp.push_back(nums[left]);
                    temp.push_back(nums[right]);
                    result.insert(temp);
                    left++;
                    right--;
                   }
                if((nums[i]+nums[left]+nums[right])>0)
                    right--;
                if((nums[i]+nums[left]+nums[right])<0)
                    left++;

            }
        }
        vector<vector<int>>final;
        for(auto it:result)
        {
            final.push_back(it);
        }
        return final;
    }
};
