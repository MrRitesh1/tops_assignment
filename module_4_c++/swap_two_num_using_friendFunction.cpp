#include <iostream>
using namespace std;
class SwapNumbers
{
public:
	int x, y;
	void getdata()
	{
		cout << "\nEnter first value: ";
		cin >> x;
		cout << "\nEnter second value: ";
		cin >> y;
	}
	void showdata()
	{
		cout << "X=" << x << "   "
			 << "Y=" << y;
	}
	friend void swap(SwapNumbers &s);
};
/* Friend function to swap two numbers*/
void swap(SwapNumbers &s)
{
	s.x = s.x + s.y;
	s.y = s.x - s.y;
	s.x = s.x - s.y;
	// int temp;
	// temp=s.x;
	// s.x=s.y;
	// s.y=temp;
}
int main()
{
	SwapNumbers s;
	cout << "Input two numbers to swap:";
	s.getdata();
	cout << endl
		 << "Before swapping:" << endl;
	s.showdata();
	swap(s);
	cout << endl
		 << "After swapping:" << endl;
	s.showdata();
	return 0;
}