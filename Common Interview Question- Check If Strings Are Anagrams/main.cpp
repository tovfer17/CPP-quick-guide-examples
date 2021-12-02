// How do you check if two strings are anagrams of each other?

#include <iostream>
#include <string>
#include <algorithm>
using namespace std; 

string ana = "cinema";
string gram = "iceman";

int main ()
{
    sort(ana.begin(), ana.end());   //if this
    sort(gram.begin(), gram.end()); //equals this

    cout << " they are anagrams: " <<(ana == gram) <<endl; //we're good
}