#include <iostream>
#include <cstdio>
#include <cmath>
#include <queue>
#include <cstdlib>
#include <vector>

using namespace std;

typedef struct Point
{
	int x;
	int y;
}Point;


bool operator<(const Point& a, const Point& b) {
  return a.x*a.x+a.y*a.y > b.x*b.x+b.y*b.y;
}

class Solution{
	public:
	Point *get_nearest(Point *array,int n,int k)
	{
		priority_queue<Point> heap;	
		Point *result;
		//result=array;
		for(int i=0;i<k;i++)
		{
			heap.push(array[i]);		
		}
		for(int i=k;i<n;i++)
		{
			Point temp=heap.top();
			if((temp.x*temp.x+temp.y+temp.y)>(array[i].x*array[i].x+array[i].y*array[i].y))
			{
				heap.pop();
				heap.push(array[i]);
			}
		}
		int j=0;
		 while(!heap.empty())
			{
				result[j++]=heap.top();
				heap.pop();
			}
		return result;
	}
	
};


int main(int argc, char *argv[]) {
	Point *points=new Point[10];
	int k=2;
	int n=5;
	Point *a=new Point[k];
   points[0].x=1;
	points[0].y=1;
	points[1].x=1;
	points[1].y=2;
	points[2].x=2;
	points[2].y=1;
	points[3].x=0;
   points[3].y=0;
   points[4].x=1;
   points[4].y=5;
   points[5].x=2;
   points[5].y=2;	
	Solution sol;
	a=sol.get_nearest(points,n,k);
	for(int i=0;i<k;i++)
	{
		cout<<"x: "<<a[i].x<<endl;
		cout<<"y: "<<a[i].y<<endl;
	}
	
}