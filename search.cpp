#include <iostream>

using namespace std;

class Solution {
public:
    int search(int A[], int n, int target) {
        int l=0;
        int h=n-1;
        int mid;
        while(l<=h)
        {
            mid=(l+h)/2;
            if(A[mid]==target) return mid;
            if(A[l]<=A[mid])
            {
                if(target>=A[l] && target< A[mid])
                {
                    h=mid-1;
                }
                else
                {
                    l=mid+1;
                }
                
            }
            else
            {
                if(target>A[mid] &&target<=A[h])
                {
                    l=mid+1;
                }
                else
                {
                    h=mid-1;
                }
                
            }
        }
        return -1;
        
    }
};
int main(int argc, char *argv[]) {
	
}