#include <iostream>

using namespace std;

class Solution {  
public:  
    int firstMissingPositive(int A[], int n) {  
        int temp=0,i;  
        if(n==0)return 1;  
        for(i=0;i<n;++i)  
        {  
            while(A[i]!=i+1&&A[i]>=1&&A[i]<=n&&A[i]!=A[A[i]-1])
			  {
				    swap(A[i],A[A[i]-1]);
				   // cout<<"i: "<<i<<"A[i]"<<A[i]<<endl;
			  }
                  
        }  
        for(i=0;i<n;++i)  
        {  
				cout<<A[i]<<endl;
            if(A[i]!=i+1)return i+1;  
        }  
        return n+1;  
    }  
}; 


int main(int argc, char *argv[]) {
	 int A[4]={3,4,-1,1};
	 Solution sol;
	 cout<<sol.firstMissingPositive(A,4)<<endl;
	
}