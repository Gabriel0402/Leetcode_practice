#include <iostream>

using namespace std;

class Solution {
public:
    int removeDuplicates(int A[], int n) {
	    int result=1;
	    if(!n) return NULL; 
	    for (int i = 1; i < n; i++) {
				if(A[i-1]!=A[i])
				{
					A[result++]=A[i];
				}
	     }
	     return result; 
     }       
};


int main(int argc, char *argv[]) {
	int A[9]={1,2,2,3,3,4,4,5,5};
	Solution sol;
	cout<<sol.removeDuplicates(A,9)<<endl;
	
}