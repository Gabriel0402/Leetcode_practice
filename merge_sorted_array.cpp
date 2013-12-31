#include <iostream>

using namespace std;

class Solution {  
public:  
    void merge(int A[], int m, int B[], int n) {  
        int i,j,k;  
        for(i=m-1,j=n-1,k=m+n-1;k>=0;--k)  
        {  
            if(i>=0&&(j<0||A[i]>B[j]))  
            {  
                A[k]=A[i--];  
            }  
            else A[k]=B[j--];  
        }  
    }  
};

int main(int argc, char *argv[]) {
	int A[20]={1,2,3,7,9};
	int B[3]={2,5,6};
	Solution sol;
	sol.merge(A,5,B,3);
	for(int i=0;i<8;i++)
	{
		cout<<A[i]<<endl;
	}
	
}