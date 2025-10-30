#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int x, y;
	cout << "Type the 1st number: ";
	cin >> x;
	cout << "Type the 2nd number: ";
	cin >> y;
	if (x > y) {
		cout << "The greater number is: " << x;
	}
	else if (y > x) {
		cout << "The greater number is: " << y;
	}
	else if (x == y) {
		cout << "the numbers are equal";
	}
	else {
		cout << "error try again";
	}
}