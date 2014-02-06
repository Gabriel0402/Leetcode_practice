#include <iostream>

using namespace std;


class Solution {
public:
    bool isInterleave(string s1, string s2, string s3) {
        if(s1.size()+s2.size()!=s3.size()) return false;
        vector<vector<int>> result;
        result.resize(s1.size()+1);
        for(int i=0;i<result.size();i++)
        {
            result[i].resize(s2.size()+1);
            
        }
        result[0][0]=true;
        for(int i=0;i<s1.size();i++)
        {
            result[i+1][0]=result[i][0]&&(s1[i]==s3[i]);
        }
        for(int i=0;i<s2.size();i++)
        {
            result[0][i+1]=result[0][i]&&(s2[i]==s3[i]);
        }
        for(int i=0;i<s1.size();i++)
        {
            for(int j=0;j<s2.size();j++)
            {
                result[i+1][j+1]=(result[i][j+1]&&s1[i]==s3[i+j+1])||(result[i+1][j]&&s2[j]==s3[i+j+1]);
            }
        }
        return result[s1.size()][s2.size()];
        
    }
};
int main(int argc, char *argv[]) {
	
}