#include <iostream>

using namespace std;

/*
better solution:

class Solution {
public:
    int removeDuplicates(int A[], int n) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        
        if (n <= 1)
            return n;
        
        int cuts = 0;
        int cnt = 1;
        
        for (int i = 1; i < n; ++i) {
            if (A[i] != A[i - 1]) {
                cnt = 1;
                A[i - cuts] = A[i];
            } else {
                if (cnt < 2) {
                    ++cnt;
                    A[i - cuts] = A[i];
                } else {
                    ++cnt;
                    ++cuts;
                }
            }
        }
        
        return n - cuts;
    }
};

*/

class Solution {
public:
    int removeDuplicates(int A[], int n) {
	    int result=0;
	    if(!n) return 0; 
	 	 int start=0;
		 int cnt=0;
	    for (int i = 0; i < n; i++) {
				
				if(A[i]==A[i+1])
				{
					A[result++]=A[i];
					A[result++]=A[i+1];
					while(A[i]==A[i+1])
					{
						i++;
					}
				}
				else
				{
					A[result++]=A[i];
				}
		     
		  }
	     return result; 
     }       
};

int main(int argc, char *argv[]) {
	int A[2]={-3,-1};
	Solution sol;
	cout<<sol.removeDuplicates(A,2)<<endl;
	for(int i=0;i<sol.removeDuplicates(A,2);i++)
	{
		cout<<A[i]<<endl;
	}
	
}