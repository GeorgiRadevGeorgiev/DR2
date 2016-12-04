#include <iostream>

using namespace std;


int main() {

	const int size = 8;
	int count = 0;
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
	cout << "\nThe clockwise spiral is :" << endl;
	cout << endl;

	do {

			for (int countCopy = count; countCopy < (size - count); countCopy++)
				cout << masiv[count][countCopy] << " ";

			for (int countCopy1 = (count + 1); countCopy1 <= ((size - 1) - count ); countCopy1++)
				cout << masiv[countCopy1][(size - 1) - count] << " ";

			for (int countCopy2 = ((size - 2) - count); countCopy2 >= count; countCopy2--)
				cout << masiv[(size - 1) - count][countCopy2] << " ";
			
			for (int countCopy3 = ((size - 2) - count); countCopy3 >= (count + 1); countCopy3--)
				cout << masiv[countCopy3][count] << " ";

		count++;

	} while (count != size / 2 + 1);


	system("pause");
	return 0;
}