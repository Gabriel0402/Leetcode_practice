#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int lengthOfLastWord(const char *s) {
        int result=0;
        if(strlen(s)==0) return 0;
        int temp=strlen(s)-1;
        while(s[temp]==' ')
        {
            temp--;
        }
        if(temp==-1) return 0;
 		for(int i=temp;i>=0;i--)
        {
			if(s[i]==' ') return result;
			else result++;
         }
         return result;
    }
};

int main(int argc, char *argv[]) {
	char *s="n";
	Solution sol;
   cout<<sol.lengthOfLastWord(s)<<endl;
	
	
}