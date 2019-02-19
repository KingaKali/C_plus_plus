#include <iostream>

class reversing_word {
public:
    void inPlaceReverse(std::string &s, int lowerBound, int upperBound)
    {
        int offset= upperBound;
        char temp;
        for(int i=lowerBound; i<= (upperBound+lowerBound)/2; i++, offset--)
        {
            temp=s[offset];
            s[offset]=s[i];
            s[i]=temp;
        }
    }


    std::string reverseWords(std::string s)
    {
        int startOfWord=0;
        for(int i=0; i<s.length();i++)
        {
            if(s[i] == ' ')
                {inPlaceReverse(s, startOfWord, i-1);
                startOfWord=i+1;
                }
        }
        inPlaceReverse(s,startOfWord,s.length()-1);
        return s;
    }


};
