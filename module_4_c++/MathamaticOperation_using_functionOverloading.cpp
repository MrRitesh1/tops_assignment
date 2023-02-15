#include <iostream>
using namespace std;
class functionOverloding
{
public:
    int a, b,y,o,u;
    void calculation() //deafult
    {
        cout<<"------------------------------------"<<endl;
        cout<<"Enter value for addtion"<<endl;
        cout<<"Enter Two Values"<<endl;
        cin>>a>>b;
        int add=a+b;        
        cout<<"Addition two value= "<<add<<endl;
        cout<<"------------------------------------"<<endl;
    }
    void calculation(int x) //single value parameterised constructor
    {
        cout<<"Enter value for subtractionn"<<endl;
        cout<<"Enter value of y: "<<endl;
        cin>>y;
        cout<<"subtraction of two value= "<<x-y<<endl;
        cout<<"------------------------------------"<<endl;
    }
    void calculation(int m,int n) //double value parameterised constructor
    {
        cout<<"Enter value for multiplication"<<endl;
        cout<<"Enter value of o: "<<endl;
        cin>>o;
        cout<<"multiplication of three value= "<<m*n*o<<endl;
        cout<<"------------------------------------"<<endl;
    }
    void calculation(float r,float s,float t) //tripal value parameterised constructor
    {
        cout<<"Enter value for division"<<endl;
        cout<<"Enter value of u: "<<endl;
        cin>>u;
        cout<<"division of four value= "<<r/s/t/u<<endl;
        cout<<"------------------------------------"<<endl;
    }
};
int main()
{
    
    functionOverloding obj;
    obj.calculation();
    obj.calculation(100);
    obj.calculation(1,1);
    obj.calculation(50000,100,10);
    return 0;
}