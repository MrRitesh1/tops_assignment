#include <iostream>
using namespace std;

class calculator
{
public:
    int num1, num2;
    float total;
    void getadata()
    {
        cout << "Enter Fast Numbars \t: \t";
        cin >> num1;
        cout << "Enter Secund Numbars \t: \t";
        cin >> num2;
        cout << "------------------------------------------------------------------" << endl;
    }
    void showdata()
    {
        total = num1 + num2;
        cout << "Your " << num1 << " + " << num2 << " = " << total << "\t" << endl;
        total = num1 - num2;
        cout << "Your " << num1 << " - " << num2 << " = " << total << "\t" << endl;
        total = num1 * num2;
        cout << "Your " << num1 << " * " << num2 << " = " << total << "\t" << endl;
        total = (float)num1 / (float)num2;
        cout << "Your " << num1 << " / " << num2 << " = " << total << "\t" << endl;
        total = num1 % num2;
        cout << "Your " << num1 << " % " << num2 << " = " << total << "\t" << endl;
        cout << "------------------------------------------------------------------" << endl;
    }
};

int main()
{
    cout << "------------------------------------------------------------------" << endl;
    cout << "----- Simple Calculator Using Class -----\n";
    cout << "------------------------------------------------------------------" << endl;
    calculator ansar;
    ansar.getadata();
    ansar.showdata();
}