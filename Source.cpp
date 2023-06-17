//#include <iostream>
//#include <cstdlib>
//#include <ctime>
//#include <stack>
//using namespace std;
////
////int main() {
////	stack<int> ali, saad;
////	int ali_points = 0, saad_points = 0;
////
////	// Fill Ali's stack with numbers 1-20 in random order
////	
////	for (int i = 0; i < 20; i++) {
////		
////		int num = rand() % 20 + 1;
////		while (ali.size() > 0 && ali.top() == num) {
////			srand(time(0));
////			num = rand() % 20 + 1;
////		}
////		ali.push(num);
////	}
////
////	// Fill Saad's stack with numbers 1-20 in random order
////	
////	for (int i = 0; i < 20; i++) {
////		
////		int num = rand() % 20 + 1;
////		while (saad.size() > 0 && saad.top() == num) {
////			srand(time(0));
////			num = rand() % 20 + 1;
////		}
////		saad.push(num);
////	}
////
////	// Play 10 rounds of the game
////	for (int round = 1; round <= 10; round++) {
////		cout << "Round " << round << ":\n";
////
////		// Get the last numbers from the stacks
////		int ali_last = ali.top();
////		int saad_last = saad.top();
////		int ali_guess = 0, saad_guess = 0;
////		cout << "Ali's Turn, Make A Guess (From 1 to 20): ";
////		cin >> ali_guess;
////		cout << "Saad's Turn, Make A Guess (From 1 to 20): ";
////		cin >> saad_guess;
////		if (ali_guess == ali_last || saad_guess == saad_last){
////			cout << "Ali's list last number: " << ali_last << endl;
////			cout << "Saad's list last number: " << saad_last << endl;
////			// Determine the winner of the round and update the points
////			if (ali_last > saad_last) {
////				cout << "Ali wins the round!\n";
////				ali_points++;
////				ali.pop();
////			}
////			else if (saad_last > ali_last) {
////				cout << "Saad wins the round!\n";
////				saad_points++;
////				saad.pop();
////			}
////			else {
////				cout << "It's a tie!\n";
////			}
////		}
////		else{
////			cout << "Both guessed the wrong number!";
////			saad.pop();
////			ali.pop();
////		}
////		
////		
////
////		cout << endl;
////	}
////
////	// Determine the winner of the game
////	if (ali_points > saad_points) {
////		cout << "Ali wins the game!\n";
////	}
////	else if (saad_points > ali_points) {
////		cout << "Saad wins the game!\n";
////	}
////	else {
////		cout << "It's a tie!\n";
////	}
////
////	system("pause");
////	return 0;
////}
//
//int arr[5];
//int front = -1, rear = -1;
//int maxqueue = 4;
//
//bool isFull(){
//	if (rear == maxqueue){
//		return true;
//	}
//	return false;
//}
//
//bool isEmpty(){
//	if (front == -1 || front==rear+1){
//		return true;
//	}
//	return false;
//}
//
//void enqueue(int item){
//	if (isFull()){
//		cout << "Queue Full!";
//	}
//	else{
//		if (front == -1){
//			front = 0;
//		}
//		rear++;
//		arr[rear] = item;
//	}
//}
//
//int dequeue(){
//	
//	if (isEmpty()){
//		cout << "Queue Empty!";
//		return 0;
//	}
//	else{
//		front++;
//		int x = arr[front];
//		return x;
//	}
//
//}
//
//void insertValues(){
//
//	int value;
//	cout << "Enter queue values:\n";
//	for (int i = 0; i <= maxqueue; i++)
//	{
//		cout << "Value Number " << i + 1 << " : ";
//		cin >> value;
//		enqueue(value);
//		cout << endl;
//	}
//}
//
//void display(){
//	cout << "Queue Values : ";
//	for (int i = front; i <= rear; i++){
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//}
//
//int main(){
//
//	insertValues();
//	cout << "Values before removing\n";
//	display();
//	char choice;
//	do{
//
//	
//		if (dequeue() > 0){
//			cout << "Values after removing\n";
//			display();
//		}
//		else{
//			break;
//		}
//		
//		cout << "Do you want to remove more values?\nPress Y or N: ";
//		cin >> choice;
//	} while (choice == 'y' || choice == 'Y');
//	system("pause");
//	return 0;
//
//	
//}