#include <iostream>

using namespace std;

class Solution {
public:
    int uniquePaths(int m, int n) {
        int result;
		  if (m==0) return uniquePaths(m,n-1);
		  if (n==0) return uniquePaths(m-1,n);
		  return uniquePaths(m-1,n)+uniquePaths(m,n-1);
    }
};


int main(int argc, char *argv[]) {
	int m=3;
	int n=7;
	Solution sol;
	cout<<sol.uniquePaths(m,n)<<endl;
	
}