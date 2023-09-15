#include <iostream>;
using namespace std;
int main()

{
	int chon;
	float a;
	float Euro;
	float Japanese_Yen;
	float British_Pound;
	float Vietnamese_Dong;
	cout<<"Nhap so tien can chuyen doi: $";
	cin>>a;
	Euro=a*0.97;
	Japanese_Yen=a*139.45;
	British_Pound=a*0.85;
	Vietnamese_Dong=a*24757;
	if(a>0)
	{
		cout<<"Ban chon chuyen doi tu Dollar sang don vi can chuyen tu Menu.\n";
		cout<<"1. Euro.\n";
		cout<<"2. Japanese Yen.\n";
		cout<<"3. British Pount.\n";
		cout<<"4. Vietnamese Dong.\n";
		cout<<"Don vi ban muon chon: ";
		cin>>chon;
		switch(chon)
	{
		case 1: 
		cout<<"$"<<a<<"="<<Euro<<"€."<<endl;break;
		case 2: 
		cout<<"$"<<a<<"="<<Japanese_Yen<<"¥."<<endl;break;
		case 3: 
		cout<<"$"<<a<<"="<<British_Pound<<"£"<<endl;break;
		case 4: 
		cout<<"$"<<a<<"="<<Vietnamese_Dong<<"VND"<<endl;break;
	}	
	}
	else
	cout<<"So tien nhap khong hop le.";
return 0;
}	
	
