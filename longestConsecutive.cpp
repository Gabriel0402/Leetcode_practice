#include <iostream>

using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int> &num) {
        unordered_set<int>::const_iterator it;
        unordered_set<int> set;
        for(int i=0;i<num.size();i++)
        {
            if(set.find(num[i])==set.end())
            {
                set.insert(num[i]);
            }
        }
        int maxc=0;
        for(int i=0;i<num.size();i++)
        {
            int c=1;
            if(set.find(num[i])!=set.end())
            {
                int cur=num[i]+1;
                while(set.find(cur)!=set.end()){
                    set.erase(cur);
                    c++;
                    cur++;
                }
                cur=num[i]-1;
                while(set.find(cur)!=set.end())
                {
                    set.erase(cur);
                    c++;
                    cur--;
                }
                if(maxc<c) maxc=c;
            }
        }
        return maxc;
        
    }
};

int main(int argc, char *argv[]) {
	
}