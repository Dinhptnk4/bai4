#include <iostream>
using namespace std;
int main()

{
	int a,b;
	cout<< "Enter a month(1-12): ";
	cin>>a;
	cout<<"Enter a year: ";
	cin >>b;
	switch(a)
	{
		case 1: cout<<"31 days"<<endl;break;
		case 2:
			if(b%400==0)
			{
				cout<<"29 days";break;
			}
			else
			{	if ((b%4==0)&&(b%100!=0))
				{
					cout<<"29 days";break;
				}
				else	
				{
					cout<<"28 days";break;
				}}
		case 3: cout<<"31 days"<<endl;break;
		case 4: cout<<"30 days"<<endl;break;
		case 5: cout<<"31 days"<<endl;break;
		case 6: cout<<"30 days"<<endl;break;
		case 7: cout<<"31 days"<<endl;break;
		case 8: cout<<"31 days"<<endl;break;
		case 9: cout<<"30 days"<<endl;break;
		case 10: cout<<"31 days"<<endl;break;
		case 11: cout<<"30 days"<<endl;break;
		case 12: cout<<"31 days"<<endl;break;
	}
return 0;
}
