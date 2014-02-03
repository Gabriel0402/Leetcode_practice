#include <iostream>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        if(s.length()<=1) return false;
        stack<char> temp;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='('||s[i]=='{'||s[i]=='[')
            {
                temp.push(s[i]);
            }
            if(s[i]==')')
            {
                if(temp.empty()||temp.top()!='(') return false;
                temp.pop();
            }
            if(s[i]=='}')
            {
                if(temp.empty()||temp.top()!='{') return false;
                temp.pop();
            }
            if(s[i]==']')
            {
                if(temp.empty()||temp.top()!='[') return false;
                temp.pop();
            }
        }
        if(temp.empty()==0) return false;
        return true;
        
    }
};

int main(int argc, char *argv[]) {
	
}