#include <iostream>

using namespace std;

class Solution {
public:
    vector<vector<int> > subsetsWithDup(vector<int> &S) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        vector<vector<int> > ret(1);
        
        int start = 0;
        int curr_size = 0;
        int i, j;
        
        sort(S.begin(), S.end());
        
        for (i = 0; i < S.size(); ++i) {
            curr_size = ret.size();
            
            for (j = start; j < curr_size; ++j) {
                ret.push_back(ret[j]);
                ret.back().push_back(S[i]);
            }
            
            if (i < S.size() - 1 && S[i] == S[i + 1])
                start = curr_size;
            else
                start = 0;
        }
        
        return ret;
    }
 
};
int main(int argc, char *argv[]) {
	
}