#include <iostream>;
using namespace std;
int main()

{ 
	int l1,w1,l2,w2;
	cout<<"Chuong trinh so sanh hai hinh chu nhat."<<endl;
	cout<<"Nhap chieu dai và chieu rong cua hcn thu nhat: ";
	cin>>l1;
	cin>>w1;
	cout<<"Nhap chieu dai và chieu rong cua hcn thu hai: ";
	cin>>l2;
	cin>>w2;	
	if(l1*w1>l2*w2)
		cout<<"Dien tich hcn thu nhat lon hon dien tich hcn thu hai";
	else
		if(l1*w1<l2*w2)
				cout<<"Dien tich hcn thu hai lon hon dien tich hcn thu nhat";
			else
				cout<<"Hai hinh co dien tich nhu nhau.";
return 0;
}
