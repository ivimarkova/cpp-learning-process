#include <iostream>
#include <math.h>

using namespace std;

class Shape {
public:
	float r = 0, pi = 3.14f, a = 0, b = 0, c = 0;
	virtual float area() { return 0; }
	virtual float perimeter() { return 0; }
	virtual float volume() { return 0; }//капан може и да го няма ако беше 3д фигура щеше да работи
	virtual ~Shape() {}

};
class Circle : public Shape {
public:
	float Arr(float r, float pi = 3.14f) {
		return pi * r * r;
	}
	float Pcircl(float r, float pi = 3.14f) {
		return 2 * pi * r;
	}
	float area() override {
		return pi * r * r;
	}
	float perimeter() override {
		return 2 * pi * r;
	}
};
class Rectangle : public Shape {
public:
	float Sreq(float a, float b) {
		return a * b;
	}
	float Preq(float a, float b) {
		return 2 * (a + b);
	}
	float area() override {
		return a * b;
	}
	float perimeter() override {
		return 2 * (a + b);
	}
};
class Cylinder : public Circle {
public:
	float h = 0;
	float V(float r, float h, float pi = 3.14f) {
		return pi * r * r * h;
	}
	float BScyl(float r, float pi = 3.14f) {
		return pi * r * r;
	}//Base
	float FullSurface(float r, float h, float pi = 3.14f) {
		return 2 * pi * r * (r + h);
	}//Total surface area
	float area() override {
		return 2 * pi * r * (r + h);
	}
	float volume() override {
		return pi * r * r * h;
	}
};
class ReqPrism : public Rectangle {
public:
	float V(float a, float b, float c) {
		return a * b * c;
	}
	float Arr(float a, float b, float c) {
		return 2 * (a * b + a * c + b * c);
	}
	float area() override {
		return 2 * (a * b + a * c + b * c);
	}
	float volume() override {
		return a * b * c;
	}
};

int main() {
	float r, pi = 3.14f, a, b, c, h;
	cout << "Give value for r:";
	cin >> r;
	cout << "a:";
	cin >> a;
	cout << "b:";
	cin >> b;
	cout << "c:";
	cin >> c;
	cout << "h:";
	cin >> h;
	try {
		if (r <= 0 || a <= 0 || b <= 0 || c <= 0 || h <= 0) {
			throw invalid_argument("All dimensions must be positive numbers.");
		}
	}
	catch (const invalid_argument& e) {
		cerr << "Error: " << e.what() << endl;
		return 1;
	}//може и само с if else и като направи грешка да върне нагоре
	Circle circle;
	Rectangle rectangle;
	Cylinder cylinder;
	ReqPrism prism;

	circle.r = r;
	rectangle.a = a;
	rectangle.b = b;
	cylinder.r = r;
	cylinder.h = h;
	prism.a = a;
	prism.b = b;
	prism.c = c;
	cout << "LOADING......." << endl;
	cout << "Circle " << endl;
	cout << "Arr(): " << circle.Arr(r) << endl;
	cout << "Pcircl(): " << circle.Pcircl(r) << endl;
	cout << "Rectangle" << endl;
	cout << "Sreq(): " << rectangle.Sreq(a, b) << endl;
	cout << "Preq(): " << rectangle.Preq(a, b) << endl;
	cout << "Cylinder" << endl;
	cout << "V(): " << cylinder.V(r, h) << endl;
	cout << "BScyl(): " << cylinder.BScyl(r) << endl;
	cout << "FullSurface(): " << cylinder.FullSurface(r, h) << endl;
	cout << "Prism" << endl;
	cout << "Arr(): " << prism.Arr(a, b, c) << endl;
	cout << "V(): " << prism.V(a, b, c) << endl;


	return 0;
}