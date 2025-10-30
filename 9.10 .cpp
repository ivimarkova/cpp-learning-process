#include <iostream>

using namespace std;

int main() {
	int arr[10][10];
	int i, j, k = 1;


	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10; j++) {
			arr[i][j] = k;
			cout << arr[i][j] << "\t";
			k++;
		}
		cout << endl;
	}

	return 0;
}