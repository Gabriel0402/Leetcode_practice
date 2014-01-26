#include <iostream>

using namespace std;

class Solution {
public:
    vector<string> anagrams(vector<string> &strs) {
        vector<string> result;
        if(strs.size()<=1) return result;
        map<string,int> anagrams;
        for(int i=0;i<strs.size();i++)
        {
            string cur=strs[i];
            sort(cur.begin(),cur.end());
            if(anagrams.find(cur)==anagrams.end())
            {
                anagrams.insert(pair<string,int>(cur,i));
            }
            else
            {
                if(anagrams[cur]>=0)
                {
                    result.push_back(strs[anagrams[cur]]);
                    anagrams[cur]=-1;
                }
                result.push_back(strs[i]);
            }
        }
        return result;
    }
    
};


int main(int argc, char *argv[]) {
	
}