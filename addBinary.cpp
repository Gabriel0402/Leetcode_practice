#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
	    int carry=0;
	    string result;
	    int temp=a.size()-b.size();
	    int tmp;
	    if(temp>0)
	    {
		     while(temp--)
		     {
			     b.insert(0,"0");
		     }
 	     }
        else {
	         while(temp++)
			     {
				     a.insert(0,"0");
			    }
        }
        for(int i=a.size()-1;i>=0;i--)
        {
	         tmp=a[i]-'0'+b[i]-'0'+carry;
	         if(tmp==0) 
				{
					result.insert(0,"0");
					carry=0;
				}
	         if(tmp==1) 
				{
					result.insert(0,"1");
					carry=0;
				}
	         if(tmp==2)
				{
					result.insert(0,"0");
					carry=1;
				}
				if(tmp==3)
				{
					result.insert(0,"1");
					carry=1;
				}
	         
        }
        if(carry==1) result.insert(0,"1");
	     return result;
        
    }
};

int main(int argc, char *argv[]) {
	string a="1";
	string b="111";
	Solution sol;
	cout<<sol.addBinary(a,b)<<endl;
	
}