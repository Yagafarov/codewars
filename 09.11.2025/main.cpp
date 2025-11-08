// 09.11.2025
// TASK - 03

//Very simple, given a number, find its opposite (additive inverse).

//Examples:

//1: -1
//14: -14
//-34: 34

// https://www.codewars.com/kata/56dec885c54a926dcd001095

#include <iostream>

using namespace std;

int opposite(int number)
{
 return (-1)*number;
}

int main()
{
    cout << opposite(-13) << endl;
    cout << opposite(13) << endl;
    return 0;
}
