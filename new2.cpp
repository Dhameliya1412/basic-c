#include<iostream>
using namespace std;
class Result 
{
 int r,m,e,s,g,t,p;
char n[20];

public:
void print()
{
cout<<"student name : ";
cin>>n;
cout<<"roll no.  : ";
cin>>r;
cout<<"maths : ";
cin>>m;
cout<<"english : ";
cin>>e;
cout<<"state : ";
cin>>s;
cout<<"gujrati : ";
cin>>g;
}
void out()
{
t=m+e+s+g;
cout<<"your total is : "<<t<<endl;
p= t/4; 
cout<<"your percentage is : "<<p<<endl;

}
};
int main()
{
Result z;
z.print();
z.out();
}




 
 