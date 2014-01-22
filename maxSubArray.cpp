#include <iostream>

using namespace std;

class Solution {
public:
    int maxSubArray(int A[], int n) {
			int cur=A[0];
			int result=A[0];
			for(int i=1;i<n;i++)
			{
				if(cur<0)
				{
					cur=A[i];
				}
				else
				{
					cur+=A[i];
				}
				result=(cur>=result)?cur:result;
			}
			return result;
        
    }
};


int main(int argc, char *argv[]) {
	
}