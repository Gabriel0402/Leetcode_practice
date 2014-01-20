#include <iostream>

using namespace std;
class Solution {
public:
    int divide(int dividend, int divisor) {
	    unsigned int un_dividend,un_divisor;
	    int flag=1;
	    if(dividend<0)
	   {
		   un_dividend=(unsigned int)(dividend^-1)+1;
		   flag*=-1;
	   }
	   else un_dividend=dividend;
	   if(divisor<0)
		{
			   un_divisor=(unsigned int)(divisor^-1)+1;
			   flag*=-1;
		}
		else un_divisor=divisor;
		int res=0;
		while(un_dividend>=un_divisor)
		{
			long long sum=un_divisor;
			for(int i=0;sum<=un_dividend;i++,sum=sum<<1)
			{
				un_dividend-=sum;
				res+=1<<i;
			}
		}
		return res*flag;
    }
};


int main(int argc, char *argv[]) {
	Solution sol;
	cout<<sol.divide(-6,-1)<<endl;
	int a=1<<1;
	cout<<a<<endl;	
	
}