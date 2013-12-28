#include <iostream>

using namespace std;


class Solution {
public:
    double find(int A[], int m, int B[], int n, int k){
	     if(m<=0) return B[k-1];
	     if(n<=0) return A[k-1];
	     int i=(double)m/(m+n)*k-1;
	     int j=(k-1)-i;
	     
    }
    double findMedianSortedArrays(int A[], int m, int B[], int n) {
			
        
    }
};


int main(int argc, char *argv[]) {
	int A[]={1,2,3,4,5};
	int B[]={6,7,8,9,10};
	Solution sol;
	double c=sol.findMedianSortedArrays(A,5,B,5);
	cout<<c<<endl;
	
}