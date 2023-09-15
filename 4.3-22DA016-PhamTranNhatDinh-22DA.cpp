#include <iostream>;
using namespace std;
int main()

{
	int ngay,thang,nam;
	cout<<"Nhap ngay (1-31): ";
	cin>>ngay;
	cout<<"Nhap thang (1-12): ";
	cin>>thang;
	cout<<"Nhap nam (nam chi nhap hai so cuoi): ";
	cin>>nam;
	if(nam==ngay*thang)
		{
			cout<<"The date is magic";
		}
	else
			cout<<"The date is not magic";
			
return 0;
}

