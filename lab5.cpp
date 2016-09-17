#include<iostream>
#include<iomanip>
using namespace std;

struct customer
{
  int qty[3];
  int id[3];
  int day,month,year;
  char fname[30],lname[30],contact[30],iname1[30],iname2[30],iname3[30];
  double price[3];
  double tprice;    
};
void newLine();

int main()
{
    customer info[3];
    int i,n = 1;
    cout<<"Enter 3 Customers "<<endl;
    for(i=0;i<3;i++)
    {
	cout<<"CUSTOMER INFORMATION "<<n<<endl;
    n++;
    if(n<=2)
    {
    cout<<"Please Press ENTER to start input\n";
    }
    else
    {
    cout<<"";
    } 
    newLine();
    cout<<"First Name: ";
     
    cin.getline(info[i].fname,30);
      
    cout<<"Last Name: ";
    cin.getline(info[i].lname,30);
    cout<<"Contact No: ";
    cin.getline(info[i].contact,30);
    cout<<"Order Date:\n";
    cout<<"Day: ";
    cin>>info[i].day;
    cout<<"Month: ";
    cin>>info[i].month;
    cout<<"Year: ";
    cin>>info[i].year;
    cout<<"Enter 3 Items\n";
    cout<<"ID: ";
    cin>>info[i].id[i];
    cout<<"Name: ";
    cin.getline(info[i].iname1,30);
    cin.getline(info[i].iname1,30);
    cout<<"Price: ";
    cin>>info[i].price[i];
    cout<<"Quantity: ";
    cin>>info[i].qty[i];
     
    cout<<"ID: ";
    cin>>info[i].id[i];
    cout<<"Name: ";
    cin.getline(info[i].iname2,30);
    cin.getline(info[i].iname2,30);
    cout<<"Price: ";
    cin>>info[i].price[i];
    cout<<"Quantity: ";
    cin>>info[i].qty[i];
      
    cout<<"ID: ";
    cin>>info[i].id[i];
    cout<<"Name: ";
    cin.getline(info[i].iname3,30);
    cin.getline(info[i].iname3,30);
    cout<<"Price: ";
    cin>>info[i].price[i];
    cout<<"Quantity: ";
    cin>>info[i].qty[i];
    info[i].tprice = ((info[i].price[i]*info[i].qty[i]) + (info[i].price[i]*info[i].qty[i]) + (info[i].price[i]*info[i].qty[i]));
    cout<<"\n\n";
    }
    
    cout<<"Summary Report\n #"
    <<setw(20)<<"Customer Name"<<setw(18)<<"Order Date"<<setw(14)<<"Items"<<setw(8)<<"Price"<<setw(10)<<"Quantity";
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    for(i=0;i<3;i++)
    {
    cout<<endl;
    cout<<setw(2)<<i+1<<setw(14)<<info[i].lname<<", "<<info[i].fname<<setw(13)<<info[i].day<<"/"<<info[i].month<<"/"<<info[i].year
    <<setw(14)<<info[i].iname1<<setw(12)<<info[i].price[i]<<setw(10)<<info[i].qty[i]<<endl;
    cout<<setw(54)<<info[i].iname2<<setw(12)<<info[i].price[i]<<setw(13)<<info[i].qty[i]<<endl;
    cout<<setw(54)<<info[i].iname3<<setw(12)<<info[i].price[i]<<setw(13)<<info[i].qty[i]<<endl;
    cout<<setw(54)<<"Total Price:"<<setw(25)<<info[i].tprice<<endl;
    }
    system("pause");
    return 0;
}
void newLine()
 {
   char s;
   do
   {
        cin.get(s);
   }  
     while(s!='\n');
 }
