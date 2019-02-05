/*A self-dividing number is a number that is divisible by every digit it contains. Also, a self-dividing number is not allowed to contain the digit zero.
*/
#include <vector>
#include <iostream>
using namespace std;

class self_dividing_number {
public:
    vector<int> selfDividingNumbers(int left, int right){
    vector<int> results;

    for(int i=left; i<=right; i++)
    {
        if(dividable(i)) results.push_back(i);
    }
    return results;
    }


bool dividable(int i){
    int num=i;
    int digit;
    while(num>0)
    {
        digit = num%10;
        if(digit==0) return false;
        if(i%digit!=0) return false;
        num=num/10;
    }
    return true;
}
};

