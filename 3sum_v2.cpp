#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<vector<int> > threeSum(vector<int> &num) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        vector<vector<int> > ret;
        
        if (num.size() <= 2)
            return ret;
            
        int i, j, k;
        int n = num.size();
        
        sort(num.begin(), num.end());
        
        for (i = 0; i < n - 2; ++i) {
            if (num[i] > 0)
                break;
                
            if (i > 0 && num[i] == num[i - 1])
                continue;
            
            for (j = i + 1; j < n - 1; ++j) {
                if (num[i] + num[j] > 0)
                    break;
                    
                if (j > i + 1 && num[j] == num[j - 1])
                    continue;
                    
                for (k = j + 1; k < n; ++k) {
                    if (k > j + 1 && num[k] == num[k - 1])
                        continue;
                    if (num[i] + num[j] + num[k] > 0)
                        break;
                    if (num[i] + num[j] + num[k] == 0) {
                        ret.push_back(vector<int>());
                        ret.back().push_back(num[i]);
                        ret.back().push_back(num[j]);
                        ret.back().push_back(num[k]);
                    }
                }
            }
        }
        
        return ret;
    }
};


int main(int argc, char *argv[]) {
	   vector<int> number;
		vector<vector<int> > result;
		number.push_back(-1);
		number.push_back(-5);
		number.push_back(0);
		number.push_back(1);
		number.push_back(5);
		Solution sol;
		result=sol.threeSum(number);
		cout<<result[0][0]<<endl;
		cout<<result[0][1]<<endl;
		cout<<result[0][2]<<endl;
		cout<<result[1][0]<<endl;
		cout<<result[1][1]<<endl;
		cout<<result[1][2]<<endl;
		return 0;
}