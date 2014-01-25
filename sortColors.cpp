#include <iostream>

using namespace std;

class Solution {
public:
    void sortColors(int A[], int n) {
        map<int, int> hash;
        for(int i=0;i<n;i++)
        {
            hash[A[i]]++;
        }
        int j=0;
        while(hash[0]--)
        {
            A[j++]=0;
        }
        while(hash[1]--)
        {
            A[j++]=1;
        }
        while(hash[2]--)
        {
            A[j++]=2;
        }
        
    }
};

int main(int argc, char *argv[]) {
	
}