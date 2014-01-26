#include <iostream>

using namespace std;

class Solution {
public:
    vector<vector<int> > fourSum(vector<int> &num, int target) {
        int n=num.size();
        vector<vector<int> >ans;
        if(n<4) return ans;
        sort(num.begin(),num.end());
        vector<int> temp;
        for(int i=0;i<n;)
        {
            for(int j=i+1;j<n;)
            {
                int p1=j+1;
                int p2=n-1;
                while(p1<p2)
                {
                    int sum=num[i]+num[j]+num[p1]+num[p2];
                    if(sum==target)
                    {
                        temp.clear();
                        temp.push_back(num[i]);
                        temp.push_back(num[j]);
                        temp.push_back(num[p1]);
                        temp.push_back(num[p2]);
                        ans.push_back(temp);
                        int tmp=num[p1];
                        while(p1<p2 && num[p1]==tmp)
                        {
                            p1++;
                        }
                
                    }
                    else if(sum<target) p1++;
                    else p2--;
                    
                }
                int t=num[j];
                while(j<n && num[j]==t)
                {
                    j++;
                }
            }
            int t=num[i];
            while(i<n &&num[i]==t)
            {
                i++;
            }
        }
        return ans;
        
    }
};
int main(int argc, char *argv[]) {
	
}