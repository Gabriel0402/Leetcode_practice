#include <iostream>

using namespace std;


class Solution {
public:
    int lengthOfLongestSubstring(string s) {
         int length=0;
			int max=0;
			int start=0;
			int end=0;
			int hash[256];
			for(int j=0;j<256;j++)
			{
					hash[j]=-1;
		   }

			while (end<s.length()) {
				//cout<<"start"<<start<<endl;
				//cout<<"end"<<end<<endl;
				
				 if(hash[s[end]]==-1)
				{
					hash[s[end]]=end;
					end++;
				}
				else
				{
					start=hash[s[end]]+1;
					end=hash[s[end]]+1;
					for(int j=0;j<256;j++)
					{
						hash[j]=-1;
					}
				}
				max=max>(end-start)?max:(end-start);
				//cout<<"max"<<max<<endl;
				//cout<<"start-end"<<start-end<<endl;
				
			}
			return max;
    }
};


int main(int argc, char *argv[]) {
	string a="ruowzgiooobpple";
	Solution sol;
	cout<<sol.lengthOfLongestSubstring(a)<<endl;
	
}