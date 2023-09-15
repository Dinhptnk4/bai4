#include <iostream>;
using namespace std;
int main()

{
	int So;
	cout<<"Vui long nhap so de bien doi: ";
	cin>>So;
	if(So<1||So>10)
	cout<<"Error.";
	else
	cout<<"So La Ma cua ";
		switch(So)
	{
		case 1: cout<<So<<" la I."<<endl; break;
		case 2: cout<<So<<" la II."<<endl; break;
		case 3: cout<<So<<" la III."<<endl; break;
		case 4: cout<<So<<" la IV."<<endl; break;
		case 5: cout<<So<<" la V."<<endl; break;
		case 6: cout<<So<<" la VI."<<endl; break;
		case 7: cout<<So<<" la VII."<<endl; break;
		case 8: cout<<So<<" la VIII."<<endl; break;
		case 9: cout<<So<<" la IX."<<endl; break;
		case 10: cout<<So<<" la X."<<endl; break;
	}
return 0;
}
