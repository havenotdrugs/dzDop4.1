#include <iostream>
#include <vector>

using namespace std;

void print(vector<int>& myArray);
void input(vector<int>& myArray);
void CountZero(vector<int>& myArray);

int main() {
	setlocale(LC_ALL, "ru");
	vector<int> myArray;
	input(myArray);
	print(myArray);
	CountZero(myArray);
	system("pause");
}

void print(vector<int>& myArray) {
	for (int i : myArray) cout << i << endl;
}

void input(vector<int>& myArray) {
	int i;
	cin >> i;
	do {
		myArray.push_back(i);
		cin >> i;
	} while (i != -1);
}

void CountZero(vector<int>& myArray) {
	int zero = 0;
	for (int i : myArray) {
		if (i == 0) { 
			zero++; 
		}
	}
	cout << zero << " - нулей в массиве" << endl; 
}
