#include <iostream>

using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int> > &matrix) {
        vector<int> result;
        int m=matrix.size();
        if(m==0) return result;
        int n=matrix[0].size();
        if(n==0) return result;
        int level=min(m,n);
        int i=0;
        for(;i<level/2;i++)
        {
            for(int j=i;j<n-i-1;j++)
            {
                result.push_back(matrix[i][j]);
            }
            for(int j=i;j<m-i-1;j++)
            {
                result.push_back(matrix[j][n-i-1]);
            }
            for(int j=n-i-1;j>i;j--)
            {
                result.push_back(matrix[m-i-1][j]);
            }
            for(int j=m-i-1;j>i;j--)
            {
                result.push_back(matrix[j][i]);
            }
        }
        if(level %2 !=0)
        {
            if(m<=n)
            {
                for(int j=i;j<n-i;j++)
                {
                    result.push_back(matrix[i][j]);
                }
            }
            else
            {
                for(int j=i;j<m-i;j++)
                {
                    result.push_back(matrix[j][i]);
                }
            }
        }
        return result;
        
    }
};
int main(int argc, char *argv[]) {
	
}