#include <iostream>

using namespace std;

class Solution {
public:
    bool search(int A[], int n, int target) {
        return searchhelp(A, 0,n-1,target);
    }
    bool searchhelp(int A[], int l,int h, int target)
    {
        if(l>h) return false;
        int m=(l+h)/2;
        if(A[m]==target) return true;
        if(A[l]<A[m])
        {
            if(A[l]<=target && target<A[m])
            {
                h=m-1;
                return searchhelp(A,l,h,target);
            }
            else
            {
                l=m+1;
                return searchhelp(A,l,h,target);
                
            }
        }
        else if(A[l]==A[m])
        {
            return searchhelp(A,l,m-1,target)||searchhelp(A,m+1,h,target);
        }
        else
        {
            if(A[m]<target && target<=A[h])
            {
                return searchhelp(A,m+1,h,target);
            }
            else
            {
                return searchhelp(A,l,m-1,target);
            }
        }
        return false;
    }
};
int main(int argc, char *argv[]) {
	
}