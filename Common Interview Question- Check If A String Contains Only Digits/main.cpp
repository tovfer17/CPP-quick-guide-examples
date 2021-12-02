// How do you check if a string contains only digits?
#include<iostream>
#include <cstring>
using namespace std;
int main()
{
    int count=0,in;
    string str;
    cout<<"Enter your String:";
    getline(cin,str);
    int len=0;
     
    if(str[in] >= '0' && str[in] <= '9')
            {
                 cout<<"String contains only digits.";
            }
    
   
    else
        cout<<"String does not contain only digits.";
}


//https://www.csinfo360.com/2020/09/check-if-string-contains-only-digits.html

/*
#include<iostream>
#include <cstring>
using namespace std;
main()
{
    int count=0,in;
    string str;
    cout<<"Enter your String:";
    getline(cin,str);
    int len=0;
     for(in=0;str[in]!='\0';in++)
    {
        len++;
    }
     for(in=0;in<len;in++)
    {
            if(str[in] >= '0' && str[in] <= '9')
            {
                  count++;
            }
    }
    if(count==len)
        cout<<"String contains only digits.";
    else
        cout<<"String does not contain only digits.";
}
*