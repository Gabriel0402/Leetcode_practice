#include <iostream>

using namespace std;


class Solution {
public:
    string intToRoman(int num) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function    
        string result = "";
        
        // Thousands
        result += digitSymbol(num / 1000 % 10, 0, 0, 'M');
        
        
        // Hundred
        result += digitSymbol(num / 100 % 10, 'M', 'D', 'C');
        
        // Ten
        result += digitSymbol(num / 10 % 10, 'C', 'L', 'X');
        
        // One
        result += digitSymbol(num % 10, 'X', 'V', 'I');
        
        return result;
        
    }
    
    string digitSymbol(int num, char tenSymbol, char fiveSymbol, char oneSymbol)
    {
        string result = "";
        
        if (num == 9)
        {
            result += oneSymbol;
            result += tenSymbol;
        }
        else if (num >= 5)
        {
            result += fiveSymbol;
            while (num-- > 5)
                result += oneSymbol;
        }
        else if (num == 4)
        {
            result += oneSymbol;
            result += fiveSymbol;
        }
        else if (num < 4 && num > 0)
            while (num--)
                result += oneSymbol;
                
        return result;
    }
};
int main(int argc, char *argv[]) {
	
}