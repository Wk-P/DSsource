#include "BFS.hpp"
#include "BTree.hpp"

using namespace std;

void print_2D_arr(int** arr, int row, int col) {
	cout << "Print Array Start..." << endl;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << "Print Array End!" << endl;
}

template <class T>
T* newOneDimensions(int size) {
	return new T[size];
}

template <class T>
T* deleteOneDimensions(T* A) {
	delete [] A;
	return nullptr;
}

template <class T>
T** newTwoDimensions(int row, int col) {
	T** arr = new T * [row];
	for (int i = 0; i < row; i++) {
		arr[i] = new T[col];
	}
	return arr;
}

template <class T>
T** deleteTwoDimensions(T** A, int row) {
	for (int i = 0; i < row; i++) {
		delete[] A[i];
	}
	delete[] A;
	A = nullptr;
	return A;
}

// Int oneDimensionsArray initialize by n
void initialOneDimensionsArray(int* arr, int size, int n) {
	for (int i = 0; i < size; i++) {
		arr[i] = n;
	}
}

void initialTwoDimensionsArray(int** arr, int row, int col, int n) {
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			arr[i][j] = n;
		}
	}
}

int main() {
	/*
		int row = 15, col = 15;
		int* target = new int[2];
		target[0] = 6, target[1] = 8;
		int** map = newTwoDimensions<int>(row, col);
		initialTwoDimensionsArray(map, row, col, 0);
		if (target[0] >= row || target[1] >= col) { cout << "Param Error!" << endl; return 0; }
		map[target[0]][target[1]] = 1;
		print_2D_arr(map, row, col);
		map = deleteTwoDimensions(map, row);
	*/

	Node<int>* node = new Node<int>(4);
	Tree<int>* tree = new Tree<int>(node);

	return 0;
}