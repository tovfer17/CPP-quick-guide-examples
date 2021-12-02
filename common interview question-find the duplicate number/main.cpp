// How do you find the duplicate number on a given integer array?

#include <iostream>
using namespace std;

int arr[10]={1,2,3,3,5,6,7,8,9,10};


int main(){
    for(int i=0;i<10;i++){
        int b= arr[i];
        cout<<b<<endl;
       for (int j=i+1; j<10;j++){
           if (arr[i] == arr[j]){
               cout<<"duplicate is: "<<arr[i]<<endl;
           }
       }

    }
    };

    


