#include <iostream>;
using namespace std;
int main()

{
	float a,b,c,GPA;
	cout<<"Chuong trinh kiem tra va xep loai hoc sinh.\n";
	cout<<"Nhap diem kiem tra: ";
	cin>>a;
	cout<<"Nhap diem giua ki: ";
	cin >>b;
	cout<<"Nhap diem cuoi ki: ";
	cin>>c;
	GPA=0.2*a+0.3*b+0.5*c;
	if(GPA>= 8.5)
	{
		cout<<"Hoc sinh xep loai A.";
	}
	else
		if( GPA<8&&GPA>=7.0)
		{
			cout<<"Hoc sinh xep loai B.";
		}
		else
			if(GPA<7&&GPA>=5.5)
			{
				cout<<"Hoc sinh xep loai C.";
			}
			else
			if(GPA<5.5&&GPA>=4.0)
			{
				cout<<"Hoc sinh xep loai D.";
			}
			else
				cout<<"Hoc sinh xep loai F.";	
return 0;		
}	
