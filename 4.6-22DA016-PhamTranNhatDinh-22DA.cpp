#include <iostream>;
#include <cmath>;
using namespace std;
int main()

{
	int a,b,c;
	int x1,x2;
	int denta;
	cout<<"Chuong trinh tim nghiem cua phuong trinh bac hai."<<endl;
	cout<<"Vui long nhap cac gia tri a,b,c: ";
	cin>>a;
	cin>>b;
	cin>>c;
	denta=b*b-4*(a*c);
	if(denta>0)
	{
		cout<<"phuong trinh co ngiem x1 = "<<(-b*b-sqrt(denta))/2*a<<endl;
		cout<<"phuong trinh co ngiem x2 = "<<(-b*b+sqrt(denta))/2*a<<endl;
	}
	else
		if(denta==0)
		{	cout<<"phuong trinh co ngiem x1 = x2 = "<<(-b)/2*a<<endl;
		}
		else
		cout<<"Phuong trinh vo nghiem.";
return 0;
}
	
