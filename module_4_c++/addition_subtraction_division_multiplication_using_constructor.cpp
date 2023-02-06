#include <iostream>
using namespace std;
class calculation
{
public:
    int a, b, y, o, u;
    calculation() // deafult
    {
        cout << "------------------------------------" << endl;
        cout << "Enter value for addtion" << endl;
        cout << "Enter Two Values" << endl;
        cin >> a >> b;
        int add = a + b;
        cout << "Addition two value= " << add << endl;
        cout << "------------------------------------" << endl;
    }
    calculation(int x) // single value parameterised constructor
    {
        cout << "Enter value for subtractionn" << endl;
        cout << "Enter value of y: " << endl;
        cin >> y;
        cout << "subtraction of two value= " << x - y << endl;
        cout << "------------------------------------" << endl;
    }
    calculation(int m, int n) // double value parameterised constructor
    {
        cout << "Enter value for multiplication" << endl;
        cout << "Enter value of o: " << endl;
        cin >> o;
        cout << "multiplication of three value= " << m * n * o << endl;
        cout << "------------------------------------" << endl;
    }
    calculation(float r, float s, float t) // tripal value parameterised constructor
    {
        cout << "Enter value for division" << endl;
        cout << "Enter value of u: " << endl;
        cin >> u;
        cout << "division of four value= " << r / s / t / u << endl;
        cout << "------------------------------------" << endl;
    }
};
int main()
{

    calculation obj1, obj2(100), obj3(1, 1), obj(50000, 100, 10);
    return 0;
}