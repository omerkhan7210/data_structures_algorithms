//QUESTION NO 1
//
//#include <iostream>
//using namespace std;
//
//void swap(int& a, int& b) {
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
//int partition(int arr[], int low, int high) {
//	int pivot = arr[high];
//	int i = low - 1;
//
//	for (int j = low; j <= high - 1; j++) {
//		if (arr[j] <= pivot) {
//			i++;
//			swap(arr[i], arr[j]);
//		}
//	}
//	swap(arr[i + 1], arr[high]);
//	return i + 1;
//}
//
//void quickSort(int arr[], int low, int high) {
//	if (low < high) {
//		int pi = partition(arr, low, high);
//
//		quickSort(arr, low, pi - 1);
//		quickSort(arr, pi + 1, high);
//	}
//}
//
//int main() {
//	int arr[] = { 52, 37, 63, 14, 17, 8, 6, 25 };
//	int n = sizeof(arr) / sizeof(arr[0]);
//
//	cout << "Original array: ";
//	for (int i = 0; i < n; i++) {
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//
//	quickSort(arr, 0, n - 1);
//
//	cout << "Sorted array: ";
//	for (int i = 0; i < n; i++) {
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//
//	return 0;
//}
//
//
//QUESTION NO 2
//#include <iostream>
//using namespace std;
//
//void swap(int& a, int& b) {
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
//int partition(int arr[], int low, int high) {
//	int pivot = arr[high];
//	int i = low - 1;
//
//	for (int j = low; j <= high - 1; j++) {
//		if (arr[j] <= pivot) {
//			i++;
//			swap(arr[i], arr[j]);
//		}
//	}
//	swap(arr[i + 1], arr[high]);
//	return i + 1;
//}
//
//void quickSort(int arr[], int low, int high) {
//	if (low < high) {
//		int pi = partition(arr, low, high);
//
//		quickSort(arr, low, pi - 1);
//		quickSort(arr, pi + 1, high);
//	}
//}
//
//int main() {
//	int arr[] = { 105, 109, 103, 101, 107, 104, 108, 102, 110, 106 };
//	int n = sizeof(arr) / sizeof(arr[0]);
//
//	cout << "Original array: ";
//	for (int i = 0; i < n; i++) {
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//
//	quickSort(arr, 0, n - 1);
//
//	cout << "Sorted array: ";
//	for (int i = 0; i < n; i++) {
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//
//	return 0;
//}
//
//
//QUESTION NO 3
//#include <iostream>
//using namespace std;
//
//void swap(int& a, int& b) {
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
//int partition(int arr[], int low, int high) {
//	int pivot = arr[high];
//	int i = low - 1;
//
//	for (int j = low; j <= high - 1; j++) {
//		if (arr[j] <= pivot) {
//			i++;
//			swap(arr[i], arr[j]);
//		}
//	}
//	swap(arr[i + 1], arr[high]);
//	return i + 1;
//}
//
//void quickSort(int arr[], int low, int high) {
//	if (low < high) {
//		int pi = partition(arr, low, high);
//
//		quickSort(arr, low, pi - 1);
//		quickSort(arr, pi + 1, high);
//	}
//}
//
//int main() {
//	int arr[] = { 100, 200, 450, 270, 150, 70, 280, 590, 610, 330 };
//	int n = sizeof(arr) / sizeof(arr[0]);
//
//	cout << "Original array: ";
//	for (int i = 0; i < n; i++) {
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//
//	quickSort(arr, 0, n - 1);
//
//	cout << "Sorted array: ";
//	for (int i = 0; i < n; i++) {
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//
//	return 0;
//}
//
//QUESTION NO 4
//#include <iostream>
//using namespace std;
//
//void swap(int& a, int& b) {
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
//int partition(int arr[], int low, int high) {
//	int pivot = arr[high];
//	int i = low - 1;
//
//	for (int j = low; j <= high - 1; j++) {
//		if (arr[j] <= pivot) {
//			i++;
//			swap(arr[i], arr[j]);
//		}
//	}
//	swap(arr[i + 1], arr[high]);
//	return i + 1;
//}
//
//void quickSort(int arr[], int low, int high) {
//	if (low < high) {
//		 Choose last element as pivot
//		 int pivotIndex = partition(arr, low, high);
//
//		 Choose middle element as pivot
//		int pivotIndex = (low + high) / 2;
//		swap(arr[pivotIndex], arr[high]);
//
//		pivotIndex = partition(arr, low, high);
//
//		quickSort(arr, low, pivotIndex - 1);
//		quickSort(arr, pivotIndex + 1, high);
//	}
//}
//
//int main() {
//	int arr[] = { 45, 32, 78, 10, 56, 89, 23, 67, 19, 43 };
//	int n = sizeof(arr) / sizeof(arr[0]);
//
//	cout << "Original array: ";
//	for (int i = 0; i < n; i++) {
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//
//	quickSort(arr, 0, n - 1);
//
//	cout << "Sorted array: ";
//	for (int i = 0; i < n; i++) {
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//
//	return 0;
//}
//
//
//QUESTION NO 5
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//struct Parcel {
//	int weight;
//	int index;
//};
//
//bool compareWeight(Parcel p1, Parcel p2) {
//	return p1.weight < p2.weight;
//}
//
//int main() {
//	Parcel parcels[10] = { { 26, 0 }, { 5, 1 }, { 37, 2 }, { 1, 3 }, { 61, 4 }, { 11, 5 }, { 59, 6 }, { 15, 7 }, { 48, 8 }, { 19, 9 } };
//
//	cout << "Original array: ";
//	for (int i = 0; i < 10; i++) {
//		cout << parcels[i].weight << " ";
//	}
//	cout << endl;
//
//	sort(parcels, parcels + 10, compareWeight);
//
//	cout << "Sorted array: ";
//	for (int i = 0; i < 10; i++) {
//		cout << parcels[i].weight << " ";
//	}
//	cout << endl;
//
//	return 0;
//}
