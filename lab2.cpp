// Create a program compute the area of the following polygons and circle
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int choice;
	cout<<"*************"<<endl<<"MENU"<<endl<<"*************"<<endl;
	cout<<"[1] - Area of Square"<<endl;
	cout<<"[2] - Area of Rectangle"<<endl;
	cout<<"[3] - Area of Triangle"<<endl;
	cout<<"[4] - Area of Circle"<<endl;
	cout<<"[5] - Exit"<<endl;
	cout<<"-----------------"<<endl;
	cout<<"Enter Your Choice: ";
	cin>> choice;
	cout<<"-----------------"<<endl;
	switch(choice)
	{
	double l,w,h,b,r,ans;
	case 1:cout<< "AREA OF SQUARE"<< endl<<"-----------------"<<endl<<"Enter the side of the square: ";
		   cin>>l;
		   cout<<endl;
		   ans=pow(l,2);
		   cout<<"The Area of the square is "<<ans<<" sq. units"<<endl;break;
	case 2:cout<< "AREA OF RECTANGLE"<< endl<<"-----------------"<<endl<<"Enter the length and width of the rectangle: ";
		   cin>>l >>w;
		   cout<<endl;
		   ans=l*w;
		   cout<<"The Area of the rectangle is "<<ans<<" sq. units"<<endl;break;
	case 3:cout<< "AREA OF TRIANGLE"<< endl<<"-----------------"<<endl<<"Enter the base and the width of the height: ";
		   cin>>b >>h;
		   cout<<endl;
		   ans=(b*h)/2;
		   cout<<"The Area of the triangle is "<<ans<<" sq. units"<<endl;break;
	case 4:cout<< "AREA OF CIRCLE"<< endl<<"-----------------"<<endl<<"Enter the radius: ";
		   cin>>r;
		   cout<<endl;
		   ans=3.14*pow(r,2);
		   cout<<"The Area of the circle is "<<ans<<" sq. units"<<endl;break;
	case 5:cout<<"Thank you!"<<endl;
	  
	}
	system("pause");
}
