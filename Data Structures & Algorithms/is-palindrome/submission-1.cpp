class Solution {
public:
    bool isPalindrome(string s) {
        int left=0;
        int right=s.length()-1;
        
        while(left<=right)
            {
                if (!isalnum(s[right])&&isalnum(s[left]))
                {
                    right--;
                    cout<<s[right]<<endl;
                    continue;
                }
                if(!isalnum(s[left])&& isalnum(s[right]))
                    {left++;
                    continue;
                    }

                if(!isalnum(s[left] )&&!isalnum(s[right]))
                {
                    right--;
                    left++;
                    continue;
                }
                if(tolower(s[left])==tolower(s[right]))
                    {
                        left++;
                        right--;
                    }
                
                
                else
                    return false;
            }
        return true;
    }
};
