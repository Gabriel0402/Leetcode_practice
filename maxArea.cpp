#include <iostream>

using namespace std;

class Solution {
public:
    int maxArea(vector<int> &height) {
        int start=0;
        int end=height.size()-1;
        int max=0;
        int temp,short_height;
        while(start<end)
        {
            short_height=height[start]<height[end]?height[start]:height[end];
            temp=(end-start)*short_height;
            max = temp>=max?temp:max;
            if(height[start]<height[end]) start++;
            else end--;
            
        }
        return max;
        
    }
};


int main(int argc, char *argv[]) {
	
}