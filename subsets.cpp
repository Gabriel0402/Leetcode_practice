#include <iostream>

using namespace std;

class Solution {
public:
    vector<vector<int> > subsets(vector<int> &S) {
        vector<vector<int> > result;
        if(S.empty()) return result;
        vector<int> temp;
        sort(S.begin(),S.end());
        search(result,temp,S,0);
        return result;
        
    }
    void search(vector<vector<int> > &result, vector<int> temp, vector<int> &s, int index)
    {
        if(index==s.size()) 
        {
            result.push_back(temp);
            return;
        }
        temp.push_back(s[index]);
        search(result,temp,s,index+1);
        temp.pop_back();
        search(result,temp,s,index+1);
    }
};


int main(int argc, char *argv[]) {
	
}