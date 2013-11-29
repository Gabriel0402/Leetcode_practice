#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

typedef struct Result{
	int studentid;
	string data;
	int testScore;
}Result;

class Solution{
	public:
	bool compare(int a, int b)
	{
		return a>b;
	}
	
	map<int,int> high_score(vector<Result> &result){
		map<int,int> score;
		map<int,vector<int> >temp;
		map<int,int>::iterator map_it;
		vector<Result>::iterator vector_it;
		map<int,vector<int> >::iterator temp_it;
		for(vector_it=result.begin();vector_it!=result.end();vector_it++)
		{
			temp_it=temp.find(vector_it->studentid);
			if(temp_it!=temp.end())
			{
				temp[vector_it->studentid].push_back(vector_it->testScore);
			}
			else
			{
				temp[vector_it->studentid].push_back(vector_it->testScore);
			}
		}
		for(temp_it=temp.begin();temp_it!=temp.end();temp_it++)
		{
			sort(temp_it->second.begin(),temp_it->second.end(),greater<int>());
			int top5;
			top5=0;
			vector<int>::iterator top_it;
			int i=0;
			for(top_it=temp_it->second.begin();top_it!=temp_it->second.end();top_it++)
			{
				cout<<*top_it<<endl;
				top5+=*(top_it);
				i++;
				if(i==5) break;
			}
			score[temp_it->first]=top5/5;
			
		}
		 
	   return score;
	}
};

using namespace std;
int main(int argc, char *argv[]) {
	Result a={1,"abc",2};
	Result b={2,"abc",2};
	Result c={3,"abc",2};
	Result d={1,"abc",2};
	Result e={1,"abc",2};
	Result f={1,"abc",2};
	Result g={2,"abc",2};
	Result h={3,"abc",2};
	Result i={1,"abc",2};
	Result j={3,"abc",2};
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
	map<int,int> test=sol.high_score(result);
	map<int,int>::iterator it;
	for(it=test.begin();it!=test.end();it++)
	{
		cout<<"id: "<<it->first<<endl;
		cout<<"score: "<<it->second<<endl;		
	}

}