#include <iostream>
#include <cstdlib>

using namespace std;

class Solution {
public:
    int reverse(int x) {
	     int num;
	     char array[32];
	     int i=0;
	     if(x<0)
	     {
		     array[i++]='-';
		     x=(-1)*x;
	     }
	     while(x!=0)
	     {
		      array[i++]=x%10+'0';
		      x=x/10;
	     }
	     num=atoi(array);
        return num;
    }
};


int main(int argc, char *argv[]) {
	int a=123;
	int b=-321;
	Solution sol;
	cout<<sol.reverse(a)<<endl;
	cout<<sol.reverse(b)<<endl;
	
}