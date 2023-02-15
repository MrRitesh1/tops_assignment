#include<iostream>
#include<string.h>
using namespace std;
class Concate
{
    char s[100];
    public:
        // get string ny get fubction
        void get()
        {
            cin>>s;
        }
        // diplay string by display function
        void disp()
        {
            cout<<endl<<"string->"<<s;
        }
        // Parameterized Constructor
        Concate operator +(Concate s1)
        {
            // Overload Operator+ to concat the string
            Concate s2;
            strcpy(s2.s,s);
            strcat(s2.s,s1.s);
            return s2;
        }
};
int main()
{
    Concate s1,s2,s3;
    cout<<endl<<"Enter first string value : ";
    s1.get();
    cout<<endl<<"Enter second string value : ";
    s2.get();
    s1.disp();
    s2.disp();
    s3=s1+s2;
    cout<<endl<<"After concatenation : ";
    s3.disp();
    return 0;
}