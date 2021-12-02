// How do you find the largest and smallest number in an unsorted integer array?

#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    vector<int> unsorted_arr = { 9, 2, 3, 4, 5, 10, 7, 8, 1, 6 };

    int* max_index = &unsorted_arr[0];
    int* min_index = &unsorted_arr[0];

    for ( int i = 0; i < 10; ++i ){
        if ( unsorted_arr[ i ] > *max_index ) {
            max_index = &unsorted_arr[ i ];
        }
    }
    for ( int i = 0; i < 10; ++i ){
        if ( unsorted_arr[ i ] < *min_index ) {
            min_index = &unsorted_arr[ i ];
        }
    }

    cout << "MAX: " << *max_index << endl;
    cout << "MIN: " << *min_index << endl;
}