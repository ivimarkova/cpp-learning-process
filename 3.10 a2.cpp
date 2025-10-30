#include <iostream>
#include <string>

using namespace std;

void numinvalue(string G, float& Value) {
	Value = std::stof(G);
	cout << "New Value is = " << Value;
}
int main() {
	string A = "-->   ";
	string B = "2345.123";
	string C = "kg ?.. /<--";
	string ComData = A + B + C;
	float Value = 0;

	int DotPos = ComData.find('.');

	numinvalue(B, Value);
}
//greshen e coda