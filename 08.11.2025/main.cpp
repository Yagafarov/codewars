// 08.11.2025
// TASK - 02

// Sum all the numbers of a given array ( cq. list ), except the highest and the lowest element ( by value, not by index! ).
//The highest or lowest element respectively is a single element at each edge, even if there are more than one with the same value.
//Mind the input validation.

//If an empty value ( null, None, Nothing, nil etc. ) is given instead of an array, or the given array is an empty list or a list with only 1 element, return 0.


// LINK - https://www.codewars.com/kata/576b93db1129fcf2200001e6

#include <iostream>
#include <vector>
#include <algorithm> // min_element, max_element, accumulate
using namespace std;

int sumArrayExceptMinMax(const vector<int>& arr) {
    if (arr.size() <= 2) return 0; // 0, 1 yoki 2 ta element bo‘lsa 0
    int total = 0;
    for (int i : arr) total += i;
    int mn = *min_element(arr.begin(), arr.end());
    int mx = *max_element(arr.begin(), arr.end());
    return total - mn - mx;
}

int main() {
    vector<int> arr = {6, 2, 1, 8, 10};
    cout << sumArrayExceptMinMax(arr) << endl; // Natija: 16
    vector<int> arr2 = {1, 1, 11, 2, 3};
    cout << sumArrayExceptMinMax(arr2) << endl; // Natija: 6
    return 0;
}
