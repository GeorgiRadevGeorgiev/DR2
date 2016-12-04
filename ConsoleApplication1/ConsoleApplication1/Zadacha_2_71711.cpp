#include <iostream>

using namespace std;

int main() {

	const int size = 6;
	int masiv[size][size] = {};

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			cout << "Input element [" << i << "] [" << j << "] : ";
			cin >> masiv[i][j];
			cout << endl;
		}
	}

	cout << "\nThe array is :" << endl;

	for (int i1 = 0; i1 < size; i1++) {
		cout << endl;
		for (int j1 = 0; j1 < size; j1++) {
			cout << masiv[i1][j1] << " ";
		}
	}

	cout << endl;
	cout << "\nThe diaganals are :" << endl;
	cout << endl;

		for (int sum = 0; sum < 2 * size - 1; sum++) {
			for (int i2 = 0; i2 < size; i2++) {
				for (int j2 = size - 1; j2 >= 0; j2--) {
					if (i2 + j2 == sum) {
						cout << masiv[j2][i2] << " ";
					}
				}
			}
		}
	
	system("pause");
	return 0;
}