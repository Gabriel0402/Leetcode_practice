#include <iostream>
#include <list>

using namespace std;
void get_intersection(list<int> &a,list<int> &b,list<int> &c)
{
	list<int>::iterator it_a;
	list<int>::iterator it_b;
	list<int>::iterator find;
	for(it_a=a.begin();it_a!=a.end();it_a++)
	{
		for(it_b=b.begin();it_b!=b.end();it_b++)
		{
			if(*it_a==*it_b)
			{
				c.push_back(*it_a);
			}
		}
	}
	c.unique();
	
}
int main(int argc, char *argv[]) {
	list<int> a;
	list<int> b;
	list<int> c;
	int a_temp[]={4, 2, 73, 11, -5};
	int b_temp[]={-5, 73, -1, 9, 9, 4, 7};
	a.assign(a_temp,a_temp+5);
	b.assign(b_temp,b_temp+7);
	get_intersection(a,b,c);
	list<int>::iterator it_c;
	for (it_c = c.begin(); it_c!= c.end();it_c++) 
	{
		cout<<*it_c<<endl;
	}
	
}