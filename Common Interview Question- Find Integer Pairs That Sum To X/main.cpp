// How do you find all pairs of an integer array whose sum is equal to a given number?

#include <iostream>
using namespace std; 

int desired_sum = 10;
int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

int main ()
{
    int i, j;   
    for ( i = 0; i < sizeof(arr); ++i)
        for ( j = i; j < sizeof(arr); ++j ) //j=i to check the integer add on to itself like 5+5
            if ( arr[i] + arr[j] == desired_sum )
                cout << i << " " << j << endl;
}