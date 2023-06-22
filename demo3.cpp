#include<iostream>
using namespace std;
int main()
{
	int i,j,l=65;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(i%6==0)
			{
				cout<<" "<<char(l);
			}
			else
			{
				cout<<" "<<char(l+32);
				l++;
			}
		}
		cout<<"\n";
	}
   return 0;
}