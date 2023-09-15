#include <iostream>;
using namespace std;
int main()

{
	int a,b,c;
	cout<<"Chuong trinh kiem tra ba goc cua mot tam giac."<<endl;
	cout<<"Nhap 3 goc: ";
	cin>>a;
	cin>>b;
	cin>>c;
	if(180==a+b+c)
		cout<<"Day la ba gioc cua mot tam giac";
	else
		cout<<"Day khong la ba goc cua mot tam giac.";
return 0;
}
