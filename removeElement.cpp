#include <iostream>

using namespace std;

class Solution {
public:
    int removeElement(int A[], int n, int elem) {
	      int temp=0;
	      for(int i=0;i<n;i++)
	  		{    
		      if(A[i]!=elem) A[temp++]=A[i];
	      }
	      return temp;
        
    }
};


int main(int argc, char *argv[]) {
	int A[3]={2,2,3};
		Solution sol;
		cout<<sol.removeElement(A,3,2)<<endl;
	
}