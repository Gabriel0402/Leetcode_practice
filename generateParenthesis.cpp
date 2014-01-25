#include <iostream>

using namespace std;

class Solution {
    public:
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        generateParenthesistemp(n,n,"",result);
        return result;
    }
    void generateParenthesistemp(int left,int right,string cur,vector<string> &result)
    {
        if(right==0) 
        {
            result.push_back(cur);
            return;
        }
        if(left==right)
        {
            generateParenthesistemp(left-1,right,cur+"(",result);
            return;
        }
        if(left>0)
        {
            generateParenthesistemp(left-1,right,cur+"(",result);
                
        }
        generateParenthesistemp(left,right-1,cur+")",result);
        
    }

};
int main(int argc, char *argv[]) {
	
}