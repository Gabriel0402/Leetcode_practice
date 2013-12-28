#include <iostream>

using namespace std;
class Solution {
public:
    int atoi(const char *str) {
	     long long result=0;
	     int i=0;
	     int pos=1;
	     int temp;
         int flag=0;
	     while (str[i]!='\0') {
	          if(str[i]==' '&&flag==0) 
		      {
			        i++;
			        continue;
		      }
		      if(str[i]=='-')
	          {
		          pos=-1;
		          i++;
		          flag=1;
	           }
	          if(str[i]=='+')
	          {
		         pos=1;
		         i++;
		         flag=1;
	          }
			   temp=str[i++]-'0';
			   //cout<<temp<<endl;
			   flag=1;
			   if(temp>=0 && temp<=9)
			   {
				    result=result*10+temp;
			   }
			   else {
				   break; 
			   }
			  	
	     }
	     if(result*pos>INT_MAX) return INT_MAX;
	     else if(result*pos<INT_MIN) return INT_MIN;
	     else return result*pos;
	 	  
        
    }
};

int main(int argc, char *argv[]) {
	char* a="   123 456";
	char* b="2147483648";
	char* c="1234acad";
	char* d="   -11919730356x";
	Solution sol;
	cout<<sol.atoi(a)<<endl;
	cout<<sol.atoi(b)<<endl;
	cout<<sol.atoi(c)<<endl;
	cout<<sol.atoi(d)<<endl;
	if(2147483648>INT_MAX)  cout<<"yes"<<endl;
	
}