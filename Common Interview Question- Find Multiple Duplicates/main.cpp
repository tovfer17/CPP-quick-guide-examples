// How do you find duplicate numbers in an array if it contains multiple duplicates?

#include <iostream>
#include <array>
#include <map>
using namespace std;

array<int, 10> arr = { 1, 2, 9, 4, 1, 6, 7, 3, 9, 1 };
map<int, int> my_hash;


int main ()
{

    for ( int init_key : arr )
        my_hash[init_key] = 0; // slightly wasteful, but O(n) and better than branching each time. map type is implemented as AVL tree, and implies an O(n log (n)) sort when new key is added, and an O(n log(n) ) search when looking for key

    for ( int add_to_this_key : arr )
        my_hash[add_to_this_key]++;

    // iterate from start to end of map, print key/value pairs
    for ( map<int, int>::iterator it = my_hash.begin(); it != my_hash.end(); advance(it, 1) )
        cout << it->first << ": " << it->second <<endl;

}