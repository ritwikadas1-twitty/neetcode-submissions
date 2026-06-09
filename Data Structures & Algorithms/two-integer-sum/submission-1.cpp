class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int,int> maps;
        vector<int> result;
        for(int i=0;i<nums.size();i++)
            { 
                int deductable=(target-nums[i]);
                auto it = maps.find(deductable);
                if(it!=maps.end())
                    {
                        result.push_back(maps[deductable]);
                        result.push_back(i);
                        break;
                    }
                else
                maps.insert({nums[i],i});
                
            }
        return result;
    }
};
