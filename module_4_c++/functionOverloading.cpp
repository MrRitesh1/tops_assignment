#include<iostream>
using namespace std;
class calculation
{
    public:
    int r,l,b,s,h,answer;
    float f;
    void area()
    {
       cout<<"Enter Radius:" ;
       cin>>r;
       cout<<"\nArea of Circle="<<3.14*r*r;
    }
    void area(float f,int b, int h)
    {
        cout<<"\nArea of triangle="<<f*b*h;
    }
    void area(int l,int b)
    {
        cout<<"\nArea of rectangle="<<l*b;
    }
};
int main()
{
    calculation c1;
    c1.area();// for area of circal
    c1.area(0.5,20,25); // for area of triangle
    c1.area(41,26); // for area of rectangle


return 0;
}