class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int subarray=0;
        int max=0;
        int initial =0;
        unordered_map<char,int> temp;
        for(int i=0;i<s.length();i++)
            {
                auto it =temp.find(s[i]);
                if(it==temp.end())
                {
                    temp.insert({s[i],i} );
                    subarray++;

                    
                }
                else
                {
                    if(initial>it->second)
                        {subarray=i-initial+1;}
                    else
                        {subarray=i-it->second;
                         initial=it->second+1;}
                    cout<<"inside "<<subarray<<endl;             
                    temp.erase(s[i]);
                    temp.insert({s[i],i});
                    
 
                }
                if(max<subarray)
                    max=subarray;
            }
        return max;
    }
};
 