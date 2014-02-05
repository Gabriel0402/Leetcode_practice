#include <iostream>

using namespace std;

class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> result;
        if(s.empty()) return result;
        vector<string> partition;
        partitionUntil(result,partition,s,0,s.size()-1);
        return result;
    }
    void partitionUntil(vector<vector<string>> &result, vector<string> &partition, string s, int start, int end)
    {
        if(start>end)
        {
            result.push_back(partition);
        }
        else{
            for(int i=start;i<=end;i++)
            {
                string str1=s.substr(start,i-start+1);
                if(is_palindrome(str1))
                {
                    partition.push_back(str1);
                    partitionUntil(result,partition,s,i+1,end);
                    partition.pop_back();
                }
            }
        }
        
    }
    bool is_palindrome(string s)
    {
        int start=0;
        int end=s.length()-1;
        while(start<end)
        {
            if(s[start++]!=s[end--]) return false;
        }
        return true;
    }
};
int main(int argc, char *argv[]) {
	
}