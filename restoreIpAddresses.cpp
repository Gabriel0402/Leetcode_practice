#include <iostream>

using namespace std;

class Solution {
public:
    vector<string> restoreIpAddresses(string s) {
        vector<string> result;
        string temp;
        restore(result, temp, s,4);
        return result;
        
    }
    void restore(vector<string> & res, string &temp, string s, int ip_size)
    {
        if(ip_size==0)
        {
            if(s.size()==0)
            {
                temp=temp.substr(0,temp.size()-1);
                res.push_back(temp);
            }
            return;
        }
        if(ip_size*3<s.size()) return;
        int num=0;
        if(s.size()>0)
        {
            num=atoi(s.substr(0,1).c_str());
            if(num>=0 && num<256)
            {
                string rcd=temp+s.substr(0,1)+".";
                restore(res,rcd,s.substr(1),ip_size-1);
            }
            
        }
        if(s.size()>1)
        {
            num=atoi(s.substr(0,2).c_str());
            if(num>=10 && num<256)
            {
                string rcd=temp+s.substr(0,2)+".";
                restore(res,rcd,s.substr(2),ip_size-1);
            }
        }
        if(s.size()>2)
        {
            num=atoi(s.substr(0,3).c_str());
            if(num>=100 && num<256)
            {
                string rcd=temp+s.substr(0,3)+".";
                restore(res,rcd,s.substr(3),ip_size-1);
            }
        }
        return;
        
    }
};


int main(int argc, char *argv[]) {
	
}