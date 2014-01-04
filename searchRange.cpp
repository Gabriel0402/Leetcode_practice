#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> searchRange(int A[], int n, int target) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        
        vector<int> ret(2, -1);
        int lo = 0, hi = n - 1;
        int mid;
        
        while (lo < hi) {
            mid = (lo + hi) / 2;
            
            if (A[mid] < target)
                lo = mid + 1;
            else
                hi = mid;
        }
        
        if (A[lo] != target)
            return ret;
            
        hi = n;
        ret[0] = lo;
        while (lo < hi) {
            mid = (lo + hi) / 2;
            
            if (A[mid] > target)
                hi = mid;
            else
                lo = mid + 1;
        }
        ret[1] = hi - 1;
        return ret;
    }
};

int main(int argc, char *argv[]) {
	int A[1]={-1};
	Solution sol;
	vector<int> result;
	result=sol.searchRange(A,1,0);
	cout<<result[0]<<endl;
	cout<<result[1]<<endl;
	
}