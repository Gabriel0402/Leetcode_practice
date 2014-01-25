#include <iostream>

using namespace std;


class Solution {
public:
    vector<vector<int> > generate(int numRows) {
        vector<vector<int> >result;
        if(numRows==0) return result;
        result.push_back(vector<int>(1,1));
        for(int i=2;i<=numRows;i++)
        {
            vector<int> level(i,1);
            vector<int> &last=result[i-2];
            for(int j=1;j<i-1;j++)
            {
                level[j]=last[j-1]+last[j];
            }
            result.push_back(level);
        }
        return result;
    }
};

int main(int argc, char *argv[]) {
	
}