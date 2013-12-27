#include <iostream>
#include <algorithm>
#include <vector>

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
    vector<int> twoSum(vector<int> &numbers, int target) {
        // Note: The Solution object is instantiated only once and is reused by each test case.
			vector<int> result;
			vector<Node> nums(numbers.size());
			for(int i=0;i<numbers.size();i++)
			{
				nums[i]=Node(i+1,numbers[i]);
			}
			sort(nums.begin(),nums.end(),compare);
			int start=0;
			int end=numbers.size()-1;
			while(start!=end)
			{
				if(nums[start].val+nums[end].val>target)
				{
					end--;
				}
				else if (nums[start].val+nums[end].val<target) {
					start++;
				}
				else if(nums[start].val+nums[end].val==target)
				{
					result.push_back(min(nums[start].idx,nums[end].idx));
					result.push_back(max(nums[start].idx,nums[end].idx));
					return result;
				}
		   }
	 }
};


int main(int argc, char *argv[]) {
	vector<int> number;
	vector<int> result;
	number.push_back(5);
	number.push_back(75);
	number.push_back(25);
	number.push_back(7);
	Solution sol;
	result=sol.twoSum(number,100);
	cout<<result[0]<<endl;
	cout<<result[1]<<endl;
	return 0;
	
}