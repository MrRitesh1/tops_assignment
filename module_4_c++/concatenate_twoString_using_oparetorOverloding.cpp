# include<iostream>
# include<string.h>
using namespace std;
 // Classes object of string
class addString
{
    public:
    
    char s1[100],s2[100];   
    // Parameterized Constructor
    addString(char str1[],char str2[])
    {
        // Initialize the string to class object
        strcpy(this->s1,str1);
        strcpy(this->s2,str2);
    }
    void operator+()
    {
        // Overload Operator+ to concat the string
        cout<<"\nconcatenation : "<< strcat(s1,s2);
    }
};
// Driver Code
int main()
{
    // Declaring two strings
    char str1[100];
    char str2[100];

    cout<<"Enter string 1: ";
    gets(str1);
    cout<<"Enter string 1: ";
    gets(str2);
     // Declaring and initializing the class
    // with above two strings
    addString a1(str1,str2);
    // Call operator function
    +a1;

    
    return 0;
}