#include "Header.h"

int firstFoo() {
	int size;
	cout << "Write size: ";
	cin >> size;
	if (size <= 0)
		return -1;
	auto mas = makeSharedFoo(size);
	createData(size, mas);
	printData(size, mas);
	cout << "Do u want create new massive (Yes or No): ";
	string chose;
	cin >> chose;
	if (chose == "Yes")
		firstFoo();
	else
		return 0;
}

int secondFoo() {
	shared_ptr<int[]> mas(new int[12]);
	createData(mas);
	printData(mas);
	swapFoo(mas);
	printData(mas);
	return 0;
}

int thirdFoo() {
	int rows, columns;
	cout << "Write rows and columns:";
	cin >> rows >> columns;
	shared_ptr<shared_ptr<int[]>[]> mas(new shared_ptr<int[]>[rows]);
	for (int i = 0; i < rows; ++i) {
		mas[i] = shared_ptr<int[]>(new int[columns]);
	}
	createData(rows, columns, mas);
	printData(rows, columns, mas);
	return 0;
}




void swapFoo(shared_ptr<int[]> mas) {
	for (int i = 0; i < 11; i += 2)
		swap(mas[i], mas[i + 1]);
}

shared_ptr<double[]> makeSharedFoo(int size) {
	return shared_ptr<double[]>(new double[size]);
}

void createData(int size, shared_ptr<double[]> mas) {
	for (auto i = 0; i < size; ++i ) {
		cout << "Write element: ";
		cin >> mas[i];
	}
}

void createData(shared_ptr<int[]> mas) {
	for (auto i = 0; i < 12; ++i) {
		mas[i] = rand() % 100 - 50;
	}
}

void createData(int rows, int columns, shared_ptr<shared_ptr<int[]>[]> mas) {
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < columns; ++j) {
			mas[i][j] = rand() % 50 + 10;
		}
	}
}


void printData(int size, shared_ptr<double[]> mas) {
	cout << "Your massive: ";
	for (auto i = 0; i < size; ++i)
		cout << mas[i] << " ";
	cout << endl;
}

void printData(shared_ptr<int[]> mas) {
	cout << "Your massive: ";
	for (auto i = 0; i < 12; ++i)
		cout << mas[i] << " ";
	cout << endl;
}

void printData(int rows, int columns, shared_ptr<shared_ptr<int[]>[]> mas) {
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < columns; ++j) {
			std::cout << mas[i][j] << " ";
		}
		std::cout << std::endl;
	}
}