#include <iostream>

using namespace std;


class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int> > &obstacleGrid) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int m=obstacleGrid.size();
        if(m<1) return 0;
        int n=obstacleGrid[0].size();
        if(n<1) return 0;
        int *A=(new int[n+1]+1);
        A[-1]=1;
        for(int i=0;i<n;i++)
        {
            A[i]=(obstacleGrid[0][i]==0 && A[i-1]==1 ?1 :0);
        }
        A[-1]=0;
        for(int i=1;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(obstacleGrid[i][j]==0)
                {
                    A[j]+=A[j-1];
                }
                else
                {
                    A[j]=0;
                }
            }
        }
        return A[n-1];
        
    }
};

int main(int argc, char *argv[]) {
	
}