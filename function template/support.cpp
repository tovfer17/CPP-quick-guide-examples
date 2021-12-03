//https://www.cplusplus.com/doc/oldtutorial/templates/

// function template
#include <iostream>
using namespace std;

template <class T>
T GetMax (T a, T b) {
  T result;
  result = (a>b)? a : b;
  return (result);
}

int main () {
  int i=5, j=6, k;
  long l=10, m=5, n;
  k=GetMax<int>(i,j); //k=GetMax(i,j);
  n=GetMax<long>(l,m); // n=GetMax(l,m);
  cout << k << endl;
  cout << n << endl;
  return 0;
}

//both comments above show that if the paramaters are the same type then they dont need to include the brackets
//you can define it with parameter of different types by doing:
/**
template <class T, class U>
T GetMin (T a, U b) {
  return (a<b?a:b);
}

int i,j;
long l;
i = GetMin<int,long> (j,l);

or 
i = GetMin (j,l);
*/