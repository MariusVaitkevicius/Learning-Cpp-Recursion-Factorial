#include <iostream>
using namespace std;

long int answer;

// Factorial is the multiplication of natural numbers. For exampel 4!= 1 * 2 * 3 * 4 = 24;
//                                                                 5!= 1 * 2 * 3 * 4 * 5 = 120;
//                                                              or 5!= 4! * 5 = 120;
long int fact(int n) {

   if (n == 1) return 1;           // n! = 1 if n=0;
   else return fact(n - 1) * n;    // n! = (n-1)! * n;
   }

int main() {

int n;
cout << "Enter the number: " << endl;
cin >> n;
answer = fact(n);
cout << "Your answer is: " << endl;
cout << answer;
return 0;
}
