#include <iostream>
#include <math.h>

using namespace std;

class Dot {
private:
	int x;
	int y;
	int z;//if else mogat i float da sa
public:
	//setter - write
	void setX(int x1) { x = x1; }

	void setY(int y1) { y = y1; }

	void setZ(int z1) { z = z1; }

	//getter - read
	int getX() const { return x; }
	int getY() const { return y; }
	int getZ() const { return z; }

};
class Globe {
private:
	int r;
	float pi = 3.14;
	float vol;//volume can add area and mass also
public:
	//setter - write
	void setR(int r1) {
		if (r1 == 0 || r1 < 0) {
			cout << "error r /=0" << endl;
		}
		else { r = r1; }
	}
	void setVOL() {
		if (r == 0) {
			cout << "error r /=0" << endl;

		}
		else {
			float vol1 = (4.0 / 3.0) * pi * (r * r * r);
			vol = vol1;
		}
	}
	//getter - read
	int getR() const { return r; }
	float getVOL() const { return vol; }

};

int main() {
	cout << "Dot" << endl;
	Dot dot1;
	dot1.setX(0);
	dot1.setY(4);
	dot1.setZ(1);
	cout << "x:" << dot1.getX() << " y:" << dot1.getY() << " z:" << dot1.getZ() << endl;
	cout << "Globe" << endl;
	Globe gl1;//no zero or ? no negative data
	gl1.setR(9);
	gl1.setVOL();
	cout << "radius:" << gl1.getR() << " Volume:" << gl1.getVOL() << endl;
	return 0;
}