class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map <int,int> freq;
        map<int,int> main;
        vector<int> result;
        int length=nums.size();
        vector<int> bucke(length,0);
        for(int i=0;i<nums.size();i++)
            {
                auto it = freq.find(nums[i]);
                if(it == freq.end())
                   { freq.insert({nums[i],1});
                    //cout<<nums[i]<<endl;}
                   }
                else
                    {
                    int sum= freq[nums[i]]+1;
                    freq[nums[i]]=sum;
                    //cout<<"sum"<<sum<<":"<<freq[nums[i]]<<nums[i]<<endl;
                    }
            }
        
        vector<pair<int,int>> arr;
        for (auto it = freq.begin(); it != freq.end(); it++)
            {
                
                arr.push_back({it->second,it->first});
               // bucke.push_back(it->first);
                //
        //cout<<it->first<<":"<<it->second<<endl;


            }
   sort(arr.begin(),arr.end());     
         for (auto it = 0; it<k; it++)
            {
                
                result.push_back(arr[arr.size()-it-1].second);


            }
        return result;
            }

};
