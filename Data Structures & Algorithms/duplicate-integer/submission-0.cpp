class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map <int,int> maps;
        for(int i=0;i<nums.size();i++)
            {
                auto it = maps.find(nums[i]);
                if(it!=maps.end())
                    return true;
                else
                maps.insert({nums[i],1});
            }
        return false;
    }
};