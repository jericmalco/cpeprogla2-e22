#include<iostream>
#include <fstream>
using namespace std;

int main(){
	ifstream f("input.txt");
	int sum=0;
	int num1;
	
	while (f>>num1){
		
	for (int i=0; i<num1; i++){
	if (num1 % 3 == 0)
        sum += i;
     
    else if (num1 % 5 == 0)
    	sum += i;
	}
	cout << (" \n\n\n\n", sum);
	}
	system ("pause > 0");
}
