#include<iostream>
using namespace std;
class test
{
	int testcode;
	char des[20];
	int noca;
	int center;
	float CALCNTER()
	{
	   return noca/100+1;
	}
	public:
void shedul()
{
	cout<<"enter testcode:";
	cin>>testcode;
	cout<<"enter discription:";
	cin>>des;
	cout<<"enter Nocandidate:";b
	cin>>noca;
	center=CALCNTER();
}
void print()
{
	cout<<"\n";
	cout<<"testcode:"<<testcode<<endl;
	cout<<"discription:"<<des<<endl;
	cout<<"Nocandidate:"<<noca<<endl;
	cout<<"centerreqd:"<<center<<endl;
}
};
int main()
{
	test t;
	t.shedul();
	t.print();
}