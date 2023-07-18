#include<iostream>
using namesace std;
class box {
int l,w,h;
public :
void setdata(int a,int b,int c)
{
l=a;
w=b;
h=c;
}
box operator++(int)
{
int t;
t.1=l++;
t.w=w++;
t.h=h++;
return t;
}
};
int main()
{
box a,b;
box a,b;
a.setdata(2,5,8);

cout<<"volume a is : <<"a;getdata()<<endl;
a++;
b=a;
cout<<"volume b is : <<"b;getdata()<<endl;
}