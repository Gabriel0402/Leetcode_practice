#include <iostream>

using namespace std;


class Solution {
public:
    vector<string> letterCombinations(string digits) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int digitsSize = digits.size();
        if (0 == digitsSize)
        {
            vector<string> result;
            result.push_back("");
            
            return result;
        }
        
        map<char, string > buttonMap;
        buttonMap['2'] = "abc";
        buttonMap['3'] = "def";
        buttonMap['4'] = "ghi";
        buttonMap['5'] = "jkl";
        buttonMap['6'] = "mno";
        buttonMap['7'] = "pqrs";
        buttonMap['8'] = "tuv";
        buttonMap['9'] = "wxyz";
        
        vector<string> ans[2];
        vector<string> *curr, *prev;
        prev = &(ans[0]);
        curr = &(ans[1]);
        
        for (size_t i = 0; i < buttonMap[digits.at(0)].size(); ++i)
            prev->push_back(buttonMap[digits.at(0)].substr(i, 1));
            
        for (int i = 1; i < digits.size(); ++i) {
            char digit = digits[i];
            
            if (digit < '0' || digit > '9')
                continue;
            
            while (! prev->empty()) {
                for (int j = 0; j < buttonMap[digit].size(); ++j) {
                    curr->push_back(prev->back() + buttonMap[digit][j]);
                }
                
                prev->pop_back();
            }
            
            swap(prev, curr);
            curr->clear();
        }
        
        return *prev;
    }
};

int main(int argc, char *argv[]) {
	
}