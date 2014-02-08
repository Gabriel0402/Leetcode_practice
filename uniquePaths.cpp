#include <iostream>

using namespace std;

class Solution {
public:
    int uniquePaths(int m, int n) {
        int *A=new int[n];
        for(int i=0;i<n;i++)
        {
            A[i]=1;
        }
        for(int i=1;i<m;i++)
        {
            for(int j=1;j<n;j++)
            {
                A[j]+=A[j-1];
            }
        }
        return A[n-1];
        
    }
};

int main(int argc, char *argv[]) {
	
}