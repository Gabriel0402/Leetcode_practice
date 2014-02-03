#include <iostream>

using namespace std;

class Solution {
public:
    vector<string> fullJustify(vector<string> &words, int L) {
        int space=0;
        int i,j;
        vector<string> ans;
        string line;
        int size=words.size();
        int len=0;
        int k;
        if(size==1)
        {
            line=words[0];
            line+=string(L-words[0].size(),' ');
            ans.push_back(line);
            return ans;
        }
        for(int i=0;i<size;i++)
        {
            len=0;
            line="";
            for(j=i;j<size;j++)
            {
                if(len+words[j].size()>L)
                {
                    space=L+1-len;
                    break;
                }else if(len+words[j].size()==L)
                {
                    space=0;
                    break;
                }
                len+=words[j].size();
                len+=1;
            }
            if(j==size){
                for(k=i;k<j-1;k++)
                {
                    line+=words[k];
                    line+=" ";
                }
                line+=words[k];
                line+=string(L-line.size(),' ');
                ans.push_back(line);
                break;
            }else if(space==0)
            {
                for(k=i;k<j;k++)
                {
                    line+=words[k];
                    line+=" ";
                }
                line+=words[k];
                ans.push_back(line);
                i=j;
            }else{
                if(j-1==i)
                {
                    line+=words[i];
                    line+=string(L-words[i].size(),' ');
                    ans.push_back(line);
                }else{
                    int c=space/(j-1-i);
                    int d=space%(j-1-i);
                    for(k=i;k<j-1;k++)
                    {
                        line+=words[k];
                        if(k-i<d)
                        {
                            line+=string(c+2,' ');
                        }else{
                            line+=string(c+1,' ');
                        }
                    }
                    line+=words[k];
                    ans.push_back(line);
                }
                i=j-1;
            }
        }
        return ans;
    }
};

int main(int argc, char *argv[]) {
	
}