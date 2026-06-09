class Solution {
public:
    bool isAnagram(string s, string t) {
      unordered_map<char,int> maps;
      if(s.length()!=t.length())
        return false;
      for(int i=0;i<s.length();i++)
        {   
            auto it=maps.find(s[i]);
            if(it==maps.end())
            maps.insert({s[i],1});
            else
            maps[s[i]]++;

        }  
      for(int i=0;i<s.length();i++)
        {
           auto it=maps.find(t[i]);
           if(it==maps.end())
           return false;
            else
            {int feq=maps[t[i]];
                if(feq==0)
                return false;
                else
                maps[t[i]]--;
            }

    
        } 

        return true;
    }
};
