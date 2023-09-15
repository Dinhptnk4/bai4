#include <iostream>;
using namespace std;
int main()

{
	int a,b,c;
	cout<<"Nhap ba canh cua mot tam giac: ";
	cin>>a;
	cin>>b;
	cin>>c;
	if(a==0||b==0||c==0)
	{
		cout<<"Not triangle.";
	}
	else 
		if(a==b&&c==b&&a==c)
		{
			cout<<"E";
		}
		else 
		if(a==b||b==c||c==a)
		{
			cout<<"I";
		}
		else
			cout<<"S";
return 0;
}

		
