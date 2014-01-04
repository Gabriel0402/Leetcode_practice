#include <iostream>

using namespace std;

class Solution {  
public:  
    string convert(string s, int nRows) {  
        // Start typing your C/C++ solution below  
        // DO NOT write int main() function  
        string result;  
        if (nRows < 2) return s;  
        for (int i = 0;i < nRows;++i) {  
            for (int j = i;j < s.length();j += 2 * (nRows - 1)) {  
                result.push_back(s[j]);  
                if (i > 0 && i < nRows - 1) {  
                    if (j + 2 * (nRows - i - 1) < s.length())  
                        result.push_back(s[j + 2 * (nRows - i - 1)]);  
                }  
            }  
        }  
        return result;  
    }  
}; 
int main(int argc, char *argv[]) {
	Solution sol;
	cout<<sol.convert("PAYPALISHIRING", 3)<<endl;
	
}