#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char str1[10];
	char str2[10];
	
	cout<<"Enter the first word (str1): ";
	cin.getline(str1,10);
	cout<<"Enter the second word (str2): ";
	cin.getline(str2,10) ;
	strcat(str1, str2);
	cout<<"New string value for str1: "<<str1;
	return 0;
}
