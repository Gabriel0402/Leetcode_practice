#include <iostream>

using namespace std;

/*
Better Solution:
class Solution {
public:
    bool isPalindrome(int x) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        if (x < 0)
            return false;
        
        return isPalindromeHelper(x, x);
    }
    
    bool isPalindromeHelper(int x, int &y) {
            
        if (x == 0)
            return true;
            
        if (isPalindromeHelper(x / 10, y) && (x % 10 == y % 10)) {
            y /= 10;
            return true;
        }
        
        return false;
    }
};
*/

class Solution {
public:
    int reverse(int num) {
      assert(num >= 0);   // for non-negative integers only.
      int rev = 0;
      while (num != 0) {
        rev = rev * 10 + num % 10;
        num /= 10;
      }
      return rev;
    }
    bool isPalindrome(int x) {
	     if (x<0) return false;
	     if(x==2147483647) return false;
	     if (x==reverse(x)) return true;
        else return false;
    }
};

int main(int argc, char *argv[]) {
	 int a=2147483647;
	 int b=2147483647;
	Solution sol;
	cout<<sol.isPalindrome(a)<<endl;
	cout<<sol.isPalindrome(b)<<endl;
	
}