#include <iostream>
#include <list>
#include <algorithm>

using namespace std;
int main(int argc, char *argv[]) {
	list<int> a;
	a.push_back(1);
	a.push_back(2);
	a.push_back(3);
	list<int>::iterator it=find(a.begin(),a.end(),1);
	if(it==a.end())
	{
		cout<<*it<<endl;
	}
	
}