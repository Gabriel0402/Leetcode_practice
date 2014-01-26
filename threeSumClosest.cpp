#include <iostream>

using namespace std;

class Solution {
public:
    int threeSumClosest(vector<int> &num, int target) {
        sort(num.begin(),num.end());
        int n=num.size();
        int ans=INT_MAX;
        int dif=INT_MAX;
        for(int i=0;i<n-2;i++)
        {
            int p1=i+1;
            int p2=n-1;
            while(p1<p2)
            {
                int sum=num[i]+num[p1]+num[p2];
                if(abs(sum-target)<dif)
                {
                    dif=abs(sum-target);
                    ans=sum;
                }
                if(sum<target) p1++;
                else p2--;
            }
        }
        return ans;
        
    }
};


int main(int argc, char *argv[]) {
	
}