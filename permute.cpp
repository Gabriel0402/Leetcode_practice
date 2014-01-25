#include <iostream>

using namespace std;

class Solution {
public:
    vector<vector<int> > permute(vector<int> &num) {
        vector<vector<int> > result;
        BFS(result,num,0);
        return result;
    }
    void BFS(vector<vector<int> > &result, vector<int> &num, int n)
    {
        if(n==num.size()) result.push_back(num);
        else
        {
            for(int i=n;i<num.size();i++)
            {
                swap(num[i],num[n]);
                BFS(result,num,n+1);
                swap(num[i],num[n]);
            }
        }
    }
};
int main(int argc, char *argv[]) {
	
}