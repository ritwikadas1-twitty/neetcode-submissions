class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map <array<int, 26>, vector<string>> anagram;
        for(int i=0;i<strs.size();i++)
            {
                array <int, 26> alph;
                alph.fill(0);
                for(int j=0;j<strs[i].length();j++)
                    {
                        alph[strs[i][j] - 'a']++;
                    }
                auto it1 =anagram.find(alph);
                if(it1==anagram.end())
                    {   vector<string>temp;
                        temp.push_back(strs[i]);
                        anagram.insert({alph,temp});
                    }
                else 
                    {
                        anagram[alph].push_back(strs[i]);
                    }
                
            }
             vector<vector<string>> result ;
            for(auto pair:anagram)
            {   
                result.push_back(pair.second);
            }
        return result;
    }
};