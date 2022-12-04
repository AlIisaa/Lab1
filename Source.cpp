#include <iostream>

//создаем массив с элементами
int array[13] = { 7, 28, 45, 96, 9, 15, 45, 78, 69, 3, 59, 16, 25 };

//пузырьковая сортировка
void bubbleSort() {
	int size = 13;
	for (int i = 0; i < size; i++) {

		for (int r = size - 1; r >= i+1; r--) {
			//элементы сравниваются и меняются местами 
			if (array[r] < array[r - 1]) {
				int temp = 0;
				temp = array[r];
				array[r] = array[r - 1];
				array[r - 1] = temp;
			}
		}
	}
	//выводим отсортированный массив на экран 
	std::cout << "Sorted array: ";
	for (int i = 0; i < size; ++i) {
		std::cout << array[i] << "; ";
	}
}

//сортировка выбором
void selectionSort() {
	int j = 0;
	int temp = 0;
	int size = 13;
	for (int i = 0; i < size; i++) {
		j = i;
		for (int k = i; k < size; k++) {
			if (array[j] > array[k]) {
				j = k;
			}
		}
		temp = array[i];
		array[i] = array[j];
		array[j] = temp;
	}
	//выводим отсортированный массив на экран 
	std::cout << "Sorted array: ";
	for (int i = 0; i < size; ++i) {
		std::cout << array[i] << "; ";
	}
}

//сортировка вставками
void insertionSort() {
	int size = 13;
	int key = 0;
	int i = 0;
	for (int j = 1; j < size; j++) {
		key = array[j];
		i = j - 1;
		while (i >= 0 && array[i] > key) {
			array[i + 1] = array[i];
			i = i - 1;
			array[i + 1] = key;
		}
	}
	//выводим отсортированный массив на экран 
	std::cout << "Sorted array: ";
	for (int i = 0; i < size; ++i) {
		std::cout << array[i] << "; ";
	}
}

int main() {
	//int array[13] = { 7, 28, 45, 96, 9, 15, 45, 78, 69, 3, 59, 16, 25};
	//for (int i = 0; i < 13; i++) {
		//std::cout << "array[" << i << "]=" << array[i] << "\n";}
	bubbleSort();
	selectionSort();
	insertionSort();
	return 0;
}