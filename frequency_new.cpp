#include <iostream>
#include <map>
using namespace std;
class Solution{
   public:
	int find_frequency(int array[],int size)	
	{
		map<int,int> array_map;
		map<int,int>::iterator it;
		int max=0;
		int index=0;
		for(int i=0;i<size;i++)
		{
			it=array_map.find(array[i]);
			if(it!=array_map.end())
			{
				array_map[array[i]]++;
				if(array_map[array[i]]>max)
				{
					max=array_map[array[i]];
					index=i;
				}
			}
			else {
				array_map[array[i]]=1;
				if(array_map[array[i]]>max)
				{
					max=array_map[array[i]];
					index=i;
				}
			}
		}
		return array[index];
	}
};
int main(int argc, char *argv[]) {
	int array[11]={1,10,10,10,10,10,10,10,10,10,11};
	Solution a;
	//cout<<sizeof(array)/sizeof(int)<<endl;
	cout<<a.find_frequency(array,sizeof(array)/sizeof(int))<<endl;
}