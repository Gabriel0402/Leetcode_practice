#include <iostream>

using namespace std;

class Solution {
public:
    vector<int> grayCode(int n) {
			int size=1;
			while (n--) {
				size*=2;
			}
			for(int i=0;i<size;i++)
			{
				result.push_back((i>>1)^i);
			}
        
    }
};


int main(int argc, char *argv[]) {
	
}