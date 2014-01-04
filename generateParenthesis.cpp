#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    vector<string> generateParenthesis(int n) {
			vector<string> result;
			result.push_back("()()()");
			result.push_back("((()))");
			result.push_back("()(())"); 
			return result;      
    }
};


int main(int argc, char *argv[]) {
	int n=3;
	Solution sol;
	vector<string> result;
	result=sol.generateParenthesis(n);
	vector<string>::iterator it;
	for(it=result.begin();it!=result.end();it++)
	{
		cout<<*it<<endl;
	}
	
}