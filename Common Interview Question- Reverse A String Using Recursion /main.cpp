//https://www.geeksforgeeks.org/reverse-a-string-using-recursion/
// How can a given string be reversed using recursion?

#include <iostream>
using namespace std;
 
/* Function to print reverse of the passed string */
void reverse(string str)
{
    if(str.size() == 0)
    {
        return;
    }
    reverse(str.substr(1));
    cout << str[0];
}
 
/* Driver program to test above function */
int main()
{
    string a = "Geeks for Geeks";
    reverse(a);
    return 0;
}
 