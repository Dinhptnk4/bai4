#include <iostream>;
using namespace std;
int main()

{
	char a;
	cout<<"Chuong trinh kiem tra."<<endl;
	cout<<"Nhap ki tu: ";
	cin>>a;
	if(('a'<=a&&a<='z')||('A'<=a&&a<='Z'))
	{
		cout<<"A";
	}
	else
	if('0'<=a&&a<='9')
	{
		cout<<"D";
	}
	else
		cout<<"S";
return 0;
}
