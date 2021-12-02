// How do you print duplicate characters from a string?

#include <iostream>
#include <set>
using namespace std; 

string my_string = "hello world";
string your_string = "bye world";
set<char> my_set;

int main () 
{
    int i, j;
    for ( i = 0; i < my_string.length()-1; ++i )
        for ( j = i+1; j < my_string.length(); ++j )
            if ( my_string[i] == my_string[j] )
                my_set.insert(my_string[j]); // the loops find the duplicate elements and the set filters out ones we already have
    for ( char el : my_set )
        cout << el << endl;
}