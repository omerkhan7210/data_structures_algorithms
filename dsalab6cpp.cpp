//#include <iostream>
//#include <string>
//#include <string.h>
//using namespace std;
//
//
////QUESTION 3
//int top = -1;
//const int max_stack = 5;
//const int chips_pack = 5;
//int stack[max_stack][chips_pack];
//int carton_weight = 0;
//
//int isFull(int stackIndex) {
//	
//	if (stackIndex >= 5 && top == chips_pack - 1) {
//		return true;
//	}
//	
//		return false;
//	
//}
//
//bool isEmpty() {
//	if (top == -1) {
//		return true;
//	}
//
//		return false;
//	
//}
//
//void push(int stackIndex,int item) {
//
//	if (isFull(stackIndex)) {
//		cout << "STACK OVERFLOW!\n";
//	}
//	else {
//		top++;
//		stack[stackIndex][top] = item;
//	}
//
//}
//
//int pop(int stackIndex) {
//
//	if (isEmpty()) {
//		cout << "STACK UNDERFLOW!\n";
//		return -1;
//	}
//	
//	else {
//		
//		int data = stack[stackIndex][top];
//		top--;
//		return data;
//	}
//
//}
//
//void display() {
//
//	for (int i = 0; i < top; i++){
//		cout << "Flavour " << i + 1 << ":\n";
//		for (int j = 0; j < chips_pack; j++)
//		{
//
//			if (stack[i][j] >= 0) {
//				int packet_weight = pop(i);
//				cout << "Packet weight: " << packet_weight << endl;
//				carton_weight += packet_weight;
//			}
//		}
//	}
//
//}
////
////void insert() {
////	string data;
////	cout << "Enter Stack Data Values\n";
////	for (int i = 0; i < rear; i++)
////	{
////		cout << i + 1 << " : ";
////		getline(cin, data);
////		push(data);
////	}
////}
//
//
//
//int main() {
//	
//	//question 3
//	
//	// Initialize the stacks with packet weights
//	push(0, 20);
//	push(0, 25);
//	push(0, 30);
//	push(0, 35);
//	push(0, 40);
//
//	push(1, 15);
//	push(1, 18);
//	push(1, 21);
//	push(1, 24);
//	push(1, 27);
//
//	push(2, 10);
//	push(2, 12);
//	push(2, 14);
//	push(2, 16);
//	push(2, 18);
//
//	push(3, 22);
//	push(3, 23);
//	push(3, 24);
//	push(3, 25);
//	push(3, 26);
//
//	push(4, 30);
//	push(4, 31);
//	push(4, 32);
//	push(4, 33);
//	push(4, 34);
//	cout << "top value :" << top << endl;
//	display();
//
//	// Print the total weight of the carton
//	cout << "Total weight of carton: " << carton_weight << endl;
//
//	 system("pause");
//	 return 0;
//}