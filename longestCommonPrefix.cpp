#include <iostream>

using namespace std;

class Solution {  
public:  
    string longestCommonPrefix(vector<string> &strs)   
    {  
        if (strs.empty())  
        {  
            return string();  
        }  
        int maxPre = strs[0].length();  
        for (int i = 1; i < strs.size(); i++)  
        {  
            countPrefix(strs[0], maxPre, strs[i]);  
        }  
        return strs[0].substr(0, maxPre);  
    }  
  
    void countPrefix(string &initStr, int &maxPre, string &str)  
    {  
        int i = 0;  
        for (; i < maxPre; i++)  
        {  
            if (i >= str.length() || initStr[i] != str[i])  
            {  
                break;  
            }  
        }  
        maxPre = i;  
    }  
}; 

int main(int argc, char *argv[]) {
	vector<string> a;
	a.push_back("")
	
}