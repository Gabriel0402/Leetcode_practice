#include <iostream>
#include <vector>

using namespace std;


class Solution {
public:
    vector<int> plusOne(vector<int> &digits) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        
        if (digits.size() == 0)
            return digits;
            
        int carry = 1;
        int val;
        
        for (int i = digits.size() - 1; i >= 0; --i) {
            
            val = digits[i] + carry;
            
            carry = val / 10;
            digits[i] = val % 10;
            
            if (carry == 0)
                break;
        }
        
        if (carry == 1)
            digits.insert(digits.begin(), 1);
            
        return digits;
    }
};


int main(int argc, char *argv[]) {
	 vector<int> a;
	 vector<int> b;
	 a.push_back(1);
	a.push_back(2);
	a.push_back(3);
	a.push_back(4);
	Solution sol;
	b=sol.plusOne(a);
	for (vector<int>::iterator it = b.begin(); it!=b.end(); it++) {
		cout<<*it<<endl;
		
	}
	 
	
}