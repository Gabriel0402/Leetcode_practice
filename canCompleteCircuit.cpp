#include <iostream>

using namespace std;

class Solution {
public:
    int canCompleteCircuit(vector<int> &gas, vector<int> &cost) {
        // Note: The Solution object is instantiated only once and is reused by each test case.
        int num=gas.size();
        if(num==0) return -1;
        int sum=0;
        int result=0;
        int *gap=new int[num];
        for(int i=0;i<num;i++)
        {
            gap[i]=gas[i]-cost[i];
            sum+=gap[i];
            if(sum<0)
            {
                sum=0;
                result=i+1;
            }
        }
        if(result==num) result=-1;
        else
        {
            for(int i=0;i<result;i++)
            {
                sum+=gap[i];
                if(sum<0)
                {
                    result=-1;
                    break;
                }
            }
        }
        delete []gap;
        return result;
    }
};

int main(int argc, char *argv[]) {
	
}