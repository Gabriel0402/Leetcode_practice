#include <iostream>
#include <queue>
#include <vector>

/*
*
*
*
*
*
*
*/

using namespace std;

struct point{
	int x;
	int y;
};

bool operator< (const point& a, const point& b)
{
	return a.x*a.x+a.y*a.y<b.x*b.x+b.y*b.y;
}

class Solution{
	public:
	vector<point> get_nearest(vector<point> array,int n,int k)
	{
		priority_queue<point> point_heap;
		vector<point> result;
		for(int i=0;i<k;i++)
		{
			point_heap.push(array[i]);
		}
		for(int i=k;i<n;i++)
		{
			point temp=point_heap.top();			if(array[i].x*array[i].x+array[i].y*array[i].y<temp.x*temp.x+temp.y*temp.y)
			{
				point_heap.pop();
				point_heap.push(array[i]);
			}
		}
		while(!point_heap.empty())
		{
			result.push_back(point_heap.top());
			point_heap.pop();
		}
		return result;
	}
	
};
int main(int argc, char *argv[]) {
	vector<point> point_array;
	vector<point> result;
	int n=5;
	int k=2;
	point p;
	p.x=1;
	p.y=5;
	point_array.push_back(p);
	point p1;
	p1.x=2;
	p1.y=3;
	point_array.push_back(p1);
	point p2;
	p2.x=3;
	p2.y=1;
	point_array.push_back(p2);
	point p3;
	p3.x=3;
	p3.y=1;
	point_array.push_back(p3);
	point p4;
	p4.x=1;
	p4.y=2;
	point_array.push_back(p4);
	Solution sol;
	result=sol.get_nearest(point_array,n,k);
	for(int i=0;i<k;i++)
	{
		cout<<"x: "<<result[i].x<<endl;
		cout<<"y: "<<result[i].y<<endl;
	}
	
}