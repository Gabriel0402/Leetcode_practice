#include <iostream>

using namespace std;

class Solution {  
public:  
    int numTrees(int n)   
    {  
        return numTrees(1,n);  
    }  
  
    int numTrees(int start, int end)  
    {  
        if (start >= end)  
            return 1;  
  
        int totalNum = 0;  
        for (int i=start; i<=end; ++i)  
            totalNum += numTrees(start,i-1)*numTrees(i+1,end);  
        return totalNum;  
    }  
}; 

int main(int argc, char *argv[]) {
	
}