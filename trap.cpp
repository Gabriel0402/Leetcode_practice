#include <iostream>

using namespace std;

class Solution {
public:
    int trap(int A[], int n) {
        if(A==NULL||n==0) return 0;
        vector<int> left(n);
        vector<int> right(n);
        int i,j;
        int left_temp=0;
        int right_temp=0;
        int temp;
        int sum=0;
        for(i=0,j=n-1;i<n;i++,j--)
        {
            if(A[i]>left_temp) left_temp=A[i];
            if(A[j]>right_temp) right_temp=A[j];
            left[i]=left_temp;
            right[j]=right_temp;
            
        }
        for(int i=0;i<n;i++)
        {
            temp=left[i]<right[i]?left[i]:right[i];
            sum+=temp-A[i];
        }
        return sum;
        
    }
};

int main(int argc, char *argv[]) {
	int A[2];
	int B[23];
}