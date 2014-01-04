#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef struct node{
	int idx;
	int val;
	node(){};
	node(int i,int v):idx(i),val(v){}
}Node;

bool compare(const Node& a, const Node& b)
{
	return a.val<b.val;
}

class Solution {
public:
    vector<vector<int> > threeSum(vector<int> &num) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
		 vector<vector<int> > result;
		 vector<Node> nums(num.size());
		 for(int i=0;i<num.size();i++)
		{
			nums[i]=Node(i+1,num[i]);
		}
		sort(nums.begin(),nums.end(),compare);
		for(int i=0;i<num.size();i++)
		{
			int start=0;
			int end=num.size()-1;
			while(start!=end)
			{
				//cout<<"the "<<i<<"round"<<"start"<<start<<"end"<<end<<endl;
				if(nums[start].val+nums[end].val+nums[i].val>0)
				{
					end--;
				}
				else if(nums[start].val+nums[end].val+nums[i].val<0)
				{
					start++;
				}
				else if(nums[start].val+nums[end].val+nums[i].val==0)
				{
					int temp[3]={nums[start].val,nums[i].val,nums[end].val};
					result.push_back(vector<int>(temp,temp+3));
					break;
				
				}
			}
		}
		return result;
        
    }
};


int main(int argc, char *argv[]) {
	   vector<int> number;
		vector<vector<int> > result;
		number.push_back(-1);
		number.push_back(-5);
		number.push_back(0);
		number.push_back(1);
		number.push_back(5);
		Solution sol;
		result=sol.threeSum(number);
		cout<<result[0][0]<<endl;
		cout<<result[0][1]<<endl;
		cout<<result[0][2]<<endl;
		cout<<result[1][0]<<endl;
		cout<<result[1][1]<<endl;
		cout<<result[1][2]<<endl;
		return 0;
}