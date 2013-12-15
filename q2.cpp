#include <iostream>
using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
   int n; 
	cin>>n;
	 int test=n;
    int sum=0;
    int temp;
    int first;
    int last;
    int i=0;
    while(n--)
    {
               
       cin>>temp;
       sum+=temp;
       if(i==0) 
		{
			first=temp;
			//cout<<first<<endl;
		}
       if(n==0) 
		{
			last=temp;
			//cout<<last<<endl;
		} 
      i++;
           
      
    }
    cout<<(first+last)*(test+1)/2-sum<<endl;
    
    return 0;
}