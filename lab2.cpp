// Create a program that will compute the factorial of a given number
#include<iostream>
#include<conio.h>
using namespace std;
long factorial(int);

int main()
{
     int counter, n;
     cout<<"Enter the Number :";
     cin>>n;
     cout<<"The Factorial of "<<n<<" is "<<factorial(n);

     getch();
     return 0;
 }

long factorial(int n)
{
  if (n == 0)
    return 1;
  else
    return(n * factorial(n-1));
}
