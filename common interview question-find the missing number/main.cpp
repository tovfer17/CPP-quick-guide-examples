// How do you find the missing number in a given integer array of 1 to 100?
// https://www.codevscolor.com/c-plus-plus-find-missing-number-in-array
#include <iostream>
using namespace std;

int getMissingNumber(int givenArray[], int length)
{
    // 5
    int sumOfAllNumbers = (length * (length + 1)) / 2;
    int sumOfUserNumbers = 0;

    for (int i = 0; i < length - 1; i++)
    {
        sumOfUserNumbers += givenArray[i];
    }

    //6
    int missingNumber = sumOfAllNumbers - sumOfUserNumbers;
    return missingNumber;
}

int main()
{
    // 1
    int length;
    cout << "Enter the total count of numbers including the missing number :" << endl;
    cin >> length;

    // 2
    int numArray[length - 1];

    // 3
    cout << "Enter the numbers excluding the missing number one by one :" << endl;
    for (int i = 0; i < length - 1; i++) {
       cin >> numArray[i];
    }

    // 4
    cout << "Missing number is : " << getMissingNumber(numArray, length) << endl;
    return 0;
}