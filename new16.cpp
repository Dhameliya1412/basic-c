y#include<iostream>
using namespace std;
class base
{
protected:
int m ;
public:
void set m()
{
   cout<<"enter m";
   cin>>"m";
}
};
class base 2
{
protected :
int n;

public :
void int n()
{
   cout<<"enter n";
   cin>>"n";
}
};
class devied :public base 2,public base1
{
  public :
  void product()
{
 cout<<"product of m and n is "<<m*n<<endl;
}
};
int main()
{
devied d;
d.setm;
d.setn;
d.getdata();



