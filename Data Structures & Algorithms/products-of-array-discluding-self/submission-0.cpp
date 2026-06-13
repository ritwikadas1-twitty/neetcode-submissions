class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> prefix;
        int product=1;
        prefix.push_back(1);
        for(int i=1;i<nums.size();i++)
            {   
                int pre=nums[i-1];
                product=product*pre;
                prefix.push_back(product);
                cout<<product<<endl;
            }
        vector<int>postfix;
        postfix.push_back(1);
        product =1;
        for(int i=nums.size()-2;i>=0;i--)
            {
                int post=nums[i+1];
                product=product*post;
                postfix.push_back(product);
                cout<<product<<endl;

            }
        vector<int> result;
        for(int i=0;i<nums.size();i++)
            {
                int pro=prefix[i]*postfix[nums.size()-1-i];
                result.push_back(pro);
            }
            return result;

    }
};
