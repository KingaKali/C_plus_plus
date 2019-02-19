#include <iostream>
#include "self_dividing_numbers.cpp"
#include "reversing_word.cpp"

using namespace std;

int main(int argc, char *argv[])
{ // A self-dividing number is a number that is divisible by every digit it contains. Also, a self-dividing number is not allowed to contain the digit zero.
//     int lower_bound_of_range, upper_bound_of_range;
//    self_dividing_number range_of_numbers;
//    cout << "Please give a lower bound: " <<endl;
//    cin >> lower_bound_of_range;
//    cout << "Please give an upper bound: " <<endl;
//    cin >> upper_bound_of_range;
//    vector<int> rozw;
//    rozw=range_of_numbers.selfDividingNumbers(lower_bound_of_range,upper_bound_of_range);
//    for (int i=0; i<rozw.size(); i++)
//       cout << rozw[i] << " ";
//getli
string line;
reversing_word solution;
cout << "Please give a word to reverse:" <<endl;
getline(cin,line);  //funkcja getline(cin, string) wczytuje ci¹g znaków do momentu napotkania znaku koñca linii (enter), pozwala wczytaæ bia³e znaki
string res=solution.reverseWords(line);
string out = (res);
cout <<out<< endl;
    return 0;
}
