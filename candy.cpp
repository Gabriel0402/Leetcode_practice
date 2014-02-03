#include <iostream>

using namespace std;

class Solution {
public:
    int candy(vector<int> &ratings) {
        vector<int> candynum(ratings.size(),1);
        int n=ratings.size();
        int curCnt=0;
        for(int i=1;i<n;i++)
        {
            if(ratings[i]>ratings[i-1]) curCnt++;
            else curCnt=0;
            candynum[i]=curCnt+1;
        }
        curCnt=0;
        for(int i=n-2;i>=0;i--)
        {
            if(ratings[i]>ratings[i+1]) curCnt++;
            else curCnt=0;
            candynum[i]=candynum[i]>=curCnt+1?candynum[i]:curCnt+1;
        }
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=candynum[i];
        }
        return sum;
    }
};

int main(int argc, char *argv[]) {
	
}