#include<iostream>
using namespace std;
class Result {

 int i,m,e,s,g,t,p;
public:
void print()
{
for(i=0;i<2;i++)
{
cout<<"student : "<<i+1<<endl;
cout<<"maths : ";
cin>>m;
cout<<"english : ";
cin>>e;
cout<<"state : ";
cin>>s;
cout<<"gujrati : ";
cin>>g;
}
}
void out()
{
for(i=0;i<2;i++)
{
cout<<"student : "<<i+1<<endl;
t=m+e+s+g;
cout<<"your total is : "<<t<<endl;
p= t/4; 
cout<<"your percentage is : "<<p<<endl;
}
}
};
int main()
{
Result z;
z.print();
z.out();
}

 
