//#include <iostream>
//#include <string>
//using namespace std;
//
//struct CartItem {
//	string name;
//	double price;
//};
//
//const int MAX_ITEMS = 5;
//CartItem cart[MAX_ITEMS];
//int num_items = 0;
//
//// Bubble sort function to sort cart items in descending order of price
//void bubbleSort(CartItem arr[], int n) {
//	for (int i = 0; i < n - 1; i++) {
//		for (int j = 0; j < n - i - 1; j++) {
//			if (arr[j].price < arr[j + 1].price) {
//				swap(arr[j] , arr[j+1]);
//				}
//		}
//	}
//}
//
//// Linear search function to find an item in the cart below or equal to 1000 PKR
//int linearSearch(double price) {
//	for (int i = 0; i < num_items; i++) {
//		if (cart[i].price <= price) {
//			return i; // return index of item found
//		}
//	}
//	return -1; // return -1 if item not found
//}
//
//// Binary search function to find an item in the cart above 1000 PKR
//int binarySearch(double price) {
//	int left = 0;
//	int right = num_items - 1;
//	while (left <= right) {
//		int mid = (left + right) / 2;
//		if (cart[mid].price == price) {
//			return mid; // return index of item found
//		}
//		else if (cart[mid].price > price) {
//			left = mid + 1;
//		}
//		else {
//			right = mid - 1;
//		}
//	}
//	return -1; // return -1 if item not found
//}
//
//int main() {
//	int i = 1;
//	cout << "\n***********CART MANAGER***********\n\n";
//	// Insert items into cart
//	while (num_items < MAX_ITEMS) {
//		string name;
//		double price;
//		cout << "Enter Product " << i << " name: ";
//		cin >> name;
//		cout << "Enter product " << i << " price: ";
//		cin >> price;
//		cart[num_items] = { name, price };
//		num_items++;
//		bubbleSort(cart, num_items); // sort cart items after every insertion
//		cout << "Cart items: " << endl;
//		for (int i = 0; i < num_items; i++) {
//			cout << cart[i].name << " - " << cart[i].price << " PKR" << endl;
//		}
//		cout << endl;
//		i++;
//	}
//
//	char choice;
//	do{
//	// Search for items above or below 1000 PKR
//	double search_price;
//	cout << "Enter price to search: ";
//	cin >> search_price;
//	if (search_price > 1000) {
//		int index = binarySearch(search_price);
//		if (index == -1) {
//			cout << "Item not found in cart." << endl;
//		}
//		else {
//			cout << "Item found in cart at location " << index+1 << ": " << cart[index].name << " - " << cart[index].price << " PKR" << endl;
//		}
//	}
//	else {
//		int index = linearSearch(search_price);
//		if (index == -1) {
//			cout << "Item not found in cart." << endl;
//		}
//		else {
//			cout << "Item found in cart at location " << index+1 << ": " << cart[index].name << " - " << cart[index].price << " PKR" << endl;
//		}
//	}
//	cout << "\nDo you want to search more items?\nPress Y to continue \nPress N to exit\n";
//	cin >> choice;
//	} while (choice == 'y' || choice == 'Y');
//	system("pause");
//	return 0;
//
//}
