// Find the third angle of a triangle
#include <iostream>

using namespace std;

int main()
{
	float a, b, c;
	cout << "Please enter the value of first angle:" << endl;
	cin >> a;
	cout << "Please enter the value of second angle:" << endl;
	cin >> b;
	c = 180-(a+b);
	cout << "Value of third angle is" << endl;
	cout << c;
}
