// Create a program that will generate 10 unique numbers ranging from 1 to 20
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	srand((int)time(0));
	int i = 0;
	while(i++ < 10) 
	{
		int r = (rand() % 20) + 1;
		cout << r << " ";
	}
	system("pause>0");
	return 0;
}
