#include <iostream>

using namespace std;

class Solution {  
public:  
    string countAndSay(int n) {  
        // Start typing your C/C++ solution below  
        // DO NOT write int main() function  
        string str = "1";  
        for (int i = 1; i < n; ++i)  
        {  
            string tmp;  
              
            int count = 1;  
            char ch = str[0];  
            for (int j = 1; j < str.size(); ++j)  
            {  
                if (str[j] == ch)  
                    ++count;  
                else  
                {  
                    tmp.insert(tmp.end(), char(count+'0'));  
                    tmp.insert(tmp.end(), ch);  
                    ch = str[j];  
                    count = 1;  
                }  
            }  
            tmp.insert(tmp.end(), char(count+'0'));  
            tmp.insert(tmp.end(), ch);  
            str = tmp;  
        }  
        return str;  
    }  
};

int main(int argc, char *argv[]) {
	 Solution sol;
	 cout<<sol.countAndSay(3)<<endl;
	
}