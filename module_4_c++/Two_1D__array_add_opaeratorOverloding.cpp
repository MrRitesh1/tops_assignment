#include <iostream>
using namespace std;
class matrix
{
    int num=0,i=0,j=0,e[10];
public:
    matrix getMatrix()
    {
        cout<<"Enter the size of the matrix:"<<endl;
        cin>>num;
        //cin>>c;
        cout<<"Enter the elements of the matrix:"<<endl;
        for(i=0;i<num;i++)
        {
            cin>>e[i];
        }
    }
    matrix operator +(matrix m)
    {
        matrix sumMatrix;
        for(i=0; i<num; i++)
        {
                sumMatrix.e[i]=e[i]+m.e[i];
                // cout<<"The sum of the two matrices is:"<<endl;
                //cout<<sumMatrix.e[i]<<"    ";
            
        }
        cout<<"The sum of the two matrices is: "<<endl;
        cout<<"--------------------------------"<<endl;
        for(i=0; i<num; i++)
        {
                //sumMatrix.e[i]=e[i]+m.e[i];
               // cout<<"The sum of the two matrices is:";
                cout<<sumMatrix.e[i]<<" ";            
        }
    }
    void displayMatrix()
    {
        cout<<"--------------------------------"<<endl;
        cout<<"Entered matrix is:"<<endl;
        for(i=0; i<num; i++)        
        {
            //cout<<endl;
            cout<<e[i]<<" ";
        }
        cout<<endl<<"--------------------------------"<<endl;
    }
};
int main()
{
    matrix m1,m2,m3;
    cout<<"1st matrix:"<<endl;
    m1.getMatrix();
    m1.displayMatrix();cout<<endl;
    cout<<"2nt matrix:"<<endl;
    m2.getMatrix();
    m2.displayMatrix();cout<<endl;
    m3=m1+m2;
    return 0;
}