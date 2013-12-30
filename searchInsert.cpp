#include <iostream>

using namespace std;

class Solution {
public:
    int searchInsert(int A[], int n, int target) {
	      if(target<=A[0]) return 0;
	      for(int i=1;i<n;i++)
	 		{
		       if(target==A[i-1]) return i-1;
		       if(target==A[i]) return i;
		       if(target>A[i])
		       {
			        //i++;
			        continue;
		       } 
		       if(target<A[i]&&target>A[i-1])
		       {
			       return i;
		       }  
		
	      }
         return n;
    }
};
int main(int argc, char *argv[]) {
	   int A[4]={1,3,5,6};
		Solution sol;
		cout<<sol.searchInsert(A,4,4)<<endl;
	
}