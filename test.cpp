#include <iostream>       // std::cin, std::cout
#include <queue>          // std::queue
using namespace std;
int s[5][5]={{1,1,1,1,0},{2,2,2,2,0},{3,3,3,3,0},{4,4,4,4,0},{5,5,5,5,0}};

int LSR(int s1[],int s2[])
{
    float err =0;
    for (int i=0; i<5; i++) {
        int diff = (int)(s1[i]-s2[i]);
        err += (float)(diff*diff);
    }
    return err;
	
}

float position_decide(queue<int> queue)
{
	int a[5];
	int error[5];
	for(int i=0;i<5;++i)
	{
		a[i]=queue.front();
		queue.pop();
	}
	int min=0;
	for(int j=0;j<5;++j)
	{
	   error[j]=LSR(a,s[j]);
	}
	for(int j=1;j<5;j++)
	{
		if(error[j]<error[min])
		{
			min=j;
		}
	}
	return min;
	
}

int main ()
{
  std::queue<int> myqueue;
  int myint;

  std::cout << "input, end with 0"<<endl;

  do {
    std::cin >> myint;
    myqueue.push (myint);
  } while (myint);
  std::cout <<"the position is: "<<position_decide(myqueue)<<endl;


  return 0;
}