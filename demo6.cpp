#include<iostream>
using namespace std;
int main()
{
	int i,j,a=1;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			cout<<" "<<a;
			a++;
		}
		a=a+5;
		cout<<"\n";
	}
     return 0;
}

/*output  :
 1 2 3 4 5
 11 12 13 14 15
 21 22 23 24 25
 31 32 33 34 35
 41 42 43 44 45
*/