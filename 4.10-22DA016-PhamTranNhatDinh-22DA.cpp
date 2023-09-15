#include<iostream>;
using namespace std;
int main()

{
	long long a,b,c;
	cout<<"Nhap so a(-999999999 den 999999999): ";
	cin>>a;
	cout<<"Nhap so b(-999999999 den 999999999): ";
	cin>>b;
	cout<<"Nhap so c(-999999999 den 999999999): ";
	cin>>c;
	if(a<-999999999||a>99999999||b<-999999999||b>999999999||c<-999999999||c>999999999)
	{
		cout<<"Not valid.";
	}
	else
		if(a>b)
		{
			if(c>b)
			{
				if(a>c)
				{
					cout<<b<<" "<<c<<" "<<a;
				}
				else
					cout<<b<<" "<<a<<" "<<c;
			}
			else
			cout<<c<<" "<<b<<" "<<a;
		}
		else
		if(c>a)
			{
				if(b>c)
				{
					cout<<a<<" "<<c<<" "<<b;
				}
				else
					cout<<a<<" "<<b<<" "<<c;
			}
			else
			cout<<c<<" "<<a<<" "<<c;
return 0;
}
