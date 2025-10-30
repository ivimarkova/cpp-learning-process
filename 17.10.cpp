#include <iostream>

using namespace std;

class Rectangle {
public:
	double a;
	double b;
	double perimeter() {
		return 2 * a + 2 * b;
	}
	double area() {
		return a * b;
	}


};

int main() {
	do {
		Rectangle rec;
		cout << "Create a Rectangle" << "\n";
		cout << "Enter a:";
		cin >> rec.a;
		cout << "Enter b:";
		cin >> rec.b;
		cout << "Area:" << rec.area() << " Perimeter: " << rec.perimeter() << endl;
	} while (true);

	return 0;
}