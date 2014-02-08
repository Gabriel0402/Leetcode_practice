#include <iostream>

using namespace std;

class Solution {
public:
    vector<vector<int> > combine(int n, int k) {
         vector<vector<int>> result;
         vector<int> temp;
         combine_help(result,temp,0,0,n,k);
         return result;
    }
    void combine_help(vector<vector<int>> &result, vector<int> &temp, int last, int step, int n, int k)
    {
        if(step==k)
        {
            result.push_back(temp);
            return;
        }
        for(int i=last+1;i<=n;i++)
        {
            temp.push_back(i);
            combine_help(result,temp,i,step+1,n,k);
            temp.pop_back();
        }
    }
};

int main(int argc, char *argv[]) {
	
}