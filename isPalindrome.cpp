#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
	bool isCharacter(char c){
		if((c-'a'>=0&&c-'a'<26)||(c-'A'>=0&&c-'A'<26)||(c-'0'>=0 && c-'0'<=9)) return true;
		else return false;
	}
	bool isSame(char a, char b)
	{
		if(a-b==32|| a-b==-32 || a==b) return true;
		else return false;
	}
    bool isPalindrome(string s) {
			int end=s.length()-1;
			for(int i=0;i<s.length();i++)
			{
				if (end==i) break;
				if(isCharacter(s[i]))
				{
					while(!isCharacter(s[end]))
					{
						end--;
					}
					if(isSame(s[i],s[end])) 
					{
						end--;
						continue;
					}
					else return false;
				}
				else continue;
			}
			return true;
        
    }
};


int main(int argc, char *argv[]) {
	string a="1a2";
	char b='1';
	Solution sol;
	cout<<sol.isPalindrome(a)<<endl;
	
}