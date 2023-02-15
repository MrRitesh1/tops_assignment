#include <iostream>
using namespace std;

class Test
{
public:
    int x, y;

    void input()
    {
        cout << "Enter first number: ";
        cin >> x;
        cout << " Enter second number:";
        cin >> y;
    }

    friend void find(Test t);
};

void find(Test t)
{
    if (t.x > t.y)
    {
        cout << "Largest is:" << t.x;
    }
    else
    {
        cout << "Largest is:" << t.y;
    }
}

int main()
{

    Test t;
    t.input();
    find(t);

    return 0;
}