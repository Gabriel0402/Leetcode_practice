#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

typedef struct Result{
	int studentid;
	string data;
	int testScore;
}Result;

class Solution{
	public:	
	map<int,double> high_score(vector<Result> &result){
		map<int,double> score;
		map<int,priority_queue<int,vector<int>,greater<int> > >temp;
		map<int,double>::iterator map_it;
		vector<Result>::iterator vector_it;
		map<int,priority_queue<int,vector<int>,greater<int> > >::iterator temp_it;
		for(vector_it=result.begin();vector_it!=result.end();vector_it++)
		{
			temp_it=temp.find(vector_it->studentid);
			if(temp_it!=temp.end())
			{
				if(temp[vector_it->studentid].size()==5)
				{
					 int score_temp=temp[vector_it->studentid].top();
					 if(vector_it->testScore>score_temp)
					{
						temp[vector_it->studentid].pop();
						temp[vector_it->studentid].push(vector_it->testScore);
					}
					
				}
				else{
					temp[vector_it->studentid].push(vector_it->testScore);
				}
				
			}
			else
			{
				temp[vector_it->studentid].push(vector_it->testScore);
			}
		}
		for(temp_it=temp.begin();temp_it!=temp.end();temp_it++)
		{
			int top5;
			top5=0;
			int size_temp=temp_it->second.size();
			while(!temp_it->second.empty())
			{
				cout<<temp_it->second.top()<<endl;
				top5+=temp_it->second.top();
				temp_it->second.pop();
			}
			score[temp_it->first]=(double)top5/size_temp;
			
		}
		 
	   return score;
	}
};

using namespace std;
int main(int argc, char *argv[]) {
	Result a={1,"abc",100};
	Result h={1,"abc",55};
	Result i={1,"abc",81};
	Result j={1,"abc",72};
	Result d={1,"abc",11};
	Result e={1,"abc",24};
	Result f={1,"abc",35};

	Result b={2,"abc",91};	
	Result g={2,"abc",43};

	Result c={3,"abc",14};

	vector<Result> result;
	result.push_back(a);
	result.push_back(b);
	result.push_back(c);
	result.push_back(d);
	result.push_back(e);
	result.push_back(f);
	result.push_back(g);
	result.push_back(h);
	result.push_back(i);
	result.push_back(j);
	Solution sol;
	map<int,double> test=sol.high_score(result);
	map<int,double>::iterator it;
	for(it=test.begin();it!=test.end();it++)
	{
		cout<<"id: "<<it->first<<endl;
		cout<<"score: "<<it->second<<endl;		
	}

}