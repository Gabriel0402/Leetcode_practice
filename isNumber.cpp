class Solution {
public:
    bool isNumber(const char *s) {
        if(strlen(s)==1)
	    {
		if(s[0]-'0'>=0 &&s[0]-'0'<=9) return true;
		else return false;
	    }
	    int flag=0;
		  for(int i=0;i<strlen(s);i++)
		  {
		      if(s[i]==' ' && flag==0) continue;
		      else
		      {
			  if(s[i]-'0'>=0 &&s[i]-'0'<=9) 
			  {
			      flag=1;
			      continue;
			  }
			  else {
				   if(s[i]=='.') 
				   {
				      if(s[i+1]-'0'>=0 && s[i+1]-'0'<=9 || s[i-1]-'0'>=0 && s[i-1]-'0'<=9) continue;
                      else return false;
				   }
				   if(s[i]=='e')
				   {
                      if(s[i+1]-'0'>=0 && s[i+1]-'0'<=9 && s[i-1]-'0'>=0 && s[i-1]-'0'<=9) continue;
                      else return false;
				   }
				   else return false;
			      }
		      }
		  }
		  return true;   
    }
};