#include <iostream>
#include <math.h>

using namespace std;

class Shape {
public:
	float r, pi = 3.14, a, b, c;
	virtual float area() { return 0; }
	virtual float perimeter() { return 0; }
	virtual float volume() { return 0; }//капан може и да го няма ако беше 3д фигура щеше да работи
	virtual ~Shape() {}

};
class Circle : public Shape {
public:
	float Arr(float r, float pi = 3.14) {
		return pi * r * r;
	}
	float Pcircl(float r, float pi = 3.14) {
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
	float h;
	float V(float r, float h, float pi = 3.14) {
		return pi * r * r * h;
	}
	float Scyl(float r, float pi = 3.14) {
		return pi * r * r;
	}
	float FullSurface(float r, float h, float pi = 3.14) {
		return 2 * pi * r * (r + h);
	}
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
	float r = 4, pi = 3.14, a = 5, b = 6, c = 2, h = 5;
	Circle circle;
	Rectangle rectangle;
	Cylinder cylinder;
	ReqPrism prism;
	cout << "Circle " << endl;
	cout << "Arr(): " << circle.Arr(r) << endl;
	cout << "Pcircl(): " << circle.Pcircl(r) << endl;
	cout << "Rectangle" << endl;
	cout << "Sreq(): " << rectangle.Sreq(a, b) << endl;
	cout << "Preq(): " << rectangle.Preq(a, b) << endl;
	cout << "Cylinder" << endl;
	cout << "V(): " << cylinder.V(r, h) << endl;
	cout << "Scyl(): " << cylinder.Scyl(r, h) << endl;
	cout << "FullSurface(): " << cylinder.FullSurface(r, h) << endl;
	cout << "Prism" << endl;
	cout << "Arr(): " << prism.Arr(a, b, c) << endl;
	cout << "V(): " << prism.V(a, b, c) << endl;


	return 0;
}