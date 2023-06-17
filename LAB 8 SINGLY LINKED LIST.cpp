//#include <iostream>
//using namespace std;
//
//struct Node {
//	int data;
//	Node* next;
//};
//
//Node* head = NULL;
//
//void insertAtEnd(int value) {
//	Node* newNode = new Node();
//	newNode->data = value;
//	newNode->next = NULL;
//
//	if (head == NULL) {
//		head = newNode;
//	}
//	else {
//		Node* current = head;
//		while (current->next != NULL) {
//			current = current->next;
//		}
//		current->next = newNode;
//	}
//	cout << "Element inserted at the end." << endl;
//}
//
//void insertAtBeginning(int value) {
//	Node* newNode = new Node();
//	newNode->data = value;
//	newNode->next = head;
//	head = newNode;
//	cout << "Element inserted at the beginning." << endl;
//}
//
//void traverse() {
//	if (head == NULL) {
//		cout << "The list is empty." << endl;
//	}
//	else {
//		Node* current = head;
//		cout << "Linked List: ";
//		while (current != NULL) {
//			cout << current->data << " ";
//			current = current->next;
//		}
//		cout << endl;
//	}
//}
//
//void deleteAtEnd() {
//	if (head == NULL) {
//		cout << "The list is empty. Nothing to delete." << endl;
//	}
//	else if (head->next == NULL) {
//		delete head;
//		head = NULL;
//		cout << "Element deleted from the end." << endl;
//	}
//	else {
//		Node* current = head;
//		while (current->next->next != NULL) {
//			current = current->next;
//		}
//		delete current->next;
//		current->next = NULL;
//		cout << "Element deleted from the end." << endl;
//	}
//}
//
//void deleteAtBeginning() {
//	if (head == NULL) {
//		cout << "The list is empty. Nothing to delete." << endl;
//	}
//	else {
//		Node* temp = head;
//		head = head->next;
//		delete temp;
//		cout << "Element deleted from the beginning." << endl;
//	}
//}
//
//void deleteAtPosition(int position) {
//	if (head == NULL) {
//		cout << "The list is empty. Nothing to delete." << endl;
//	}
//	else if (position == 0) {
//		deleteAtBeginning();
//	}
//	else {
//		Node* current = head;
//		Node* prev = NULL;
//		int count = 0;
//
//		while (current != NULL && count < position) {
//			prev = current;
//			current = current->next;
//			count++;
//		}
//
//		if (current == NULL) {
//			cout << "Invalid position." << endl;
//		}
//		else {
//			prev->next = current->next;
//			delete current;
//			cout << "Element deleted from position " << position << "." << endl;
//		}
//	}
//}
//
//bool search(int value) {
//	Node* current = head;
//	while (current != NULL) {
//		if (current->data == value) {
//			return true;
//		}
//		current = current->next;
//	}
//	return false;
//}
//
//void displayList() {
//	traverse();
//}
//
//int main() {
//	int choice, value, position;
//
//	while (true) {
//		cout << "----------------------" << endl;
//		cout << "Linked List implementation of LIST ADT" << endl;
//		cout << "1. Insert an element at the end" << endl;
//		cout << "2. Insert an element at the beginning" << endl;
//		cout << "3. Traverse the Linked list";
//		cout << "4. Delete an element from end" << endl;
//		cout << "5. Delete an element at the beginning" << endl;
//		cout << "6. Delete an element at any position" << endl;
//		cout << "7. Search an element" << endl;
//		cout << "8. Display List" << endl;
//		cout << "9. Exit" << endl;
//
//		cout << "Enter your choice: ";
//		cin >> choice;
//
//		switch (choice) {
//		case 1:
//			cout << "Enter the value to insert at the end: ";
//			cin >> value;
//			insertAtEnd(value);
//			break;
//		case 2:
//			cout << "Enter the value to insert at the beginning: ";
//			cin >> value;
//			insertAtBeginning(value);
//			break;
//		case 3:
//			traverse();
//			break;
//		case 4:
//			deleteAtEnd();
//			break;
//		case 5:
//			deleteAtBeginning();
//			break;
//		case 6:
//			cout << "Enter the position to delete an element: ";
//			cin >> position;
//			deleteAtPosition(position);
//			break;
//		case 7:
//			cout << "Enter the value to search: ";
//			cin >> value;
//			if (search(value)) {
//				cout << "Element found in the list." << endl;
//			}
//			else {
//				cout << "Element not found in the list." << endl;
//			}
//			break;
//		case 8:
//			displayList();
//			break;
//		case 9:
//			exit(0);
//		default:
//			cout << "Invalid choice. Please try again." << endl;
//		}
//	}
//
//	system("pause");
//	return 0;
//}
//
//#include <iostream>
//#include <string>
//using namespace std;
//
//struct Book {
//	string title;
//	Book* next;
//};
//
//Book* top = NULL;
//
//void push(const string& title) {
//	Book* newBook = new Book();
//	newBook->title = title;
//	newBook->next = top;
//	top = newBook;
//}
//
//void pop() {
//	if (top == NULL) {
//		cout << "Stack is empty. Cannot pop book." << endl;
//		return;
//	}
//	Book* temp = top;
//	top = top->next;
//	delete temp;
//}
//
//bool isEmpty() {
//	return (top == NULL);
//}
//
//void displayBooks() {
//	if (isEmpty()) {
//		cout << "The shelf is empty." << endl;
//		return;
//	}
//	Book* current = top;
//	cout << "Books on the shelf: ";
//	while (current != NULL) {
//		cout << current->title << " ";
//		current = current->next;
//	}
//	cout << endl;
//}
//
//int main() {
//	push("Book 1");
//	push("Book 2");
//	push("Book 3");
//	push("Book 4");
//	push("Book 5");
//	push("Book 6");
//	push("Book 7");
//	push("Book 8");
//	push("Book 9");
//	push("Book 10");
//
//	displayBooks();
//
//	pop();
//
//	displayBooks();
//
//	system("pause");
//	return 0;
//}
//
//
//#include <iostream>
//#include <string>
//using namespace std;
//
//struct Person {
//	string name;
//	int age;
//	double salary;
//	Person* next;
//};
//
//Person* head = NULL;
//
//void insertPerson(const string& name, int age, double salary) {
//	Person* newPerson = new Person();
//	newPerson->name = name;
//	newPerson->age = age;
//	newPerson->salary = salary;
//	newPerson->next = NULL;
//
//	if (head == NULL || name < head->name) {
//		newPerson->next = head;
//		head = newPerson;
//	}
//	else {
//		Person* current = head;
//		while (current->next != NULL && name > current->next->name) {
//			current = current->next;
//		}
//		newPerson->next = current->next;
//		current->next = newPerson;
//	}
//}
//
//void printPersons() {
//	Person* current = head;
//	cout << "Name\tAge\tSalary" << endl;
//	while (current != NULL) {
//		cout << current->name << "\t" << current->age << "\t" << current->salary << endl;
//		current = current->next;
//	}
//}
//
//int main() {
//	insertPerson("John Doe", 30, 5000.0);
//	insertPerson("Alice Smith", 25, 4000.0);
//	insertPerson("Robert Johnson", 35, 6000.0);
//	insertPerson("Emily Brown", 28, 4500.0);
//	insertPerson("Michael Davis", 32, 5500.0);
//	insertPerson("Olivia Wilson", 27, 4200.0);
//	insertPerson("Daniel Miller", 29, 4800.0);
//	insertPerson("Sophia Anderson", 31, 5200.0);
//	insertPerson("Matthew Taylor", 34, 5800.0);
//	insertPerson("Emma Martinez", 26, 4300.0);
//
//	printPersons();
//
//	system("pause");
//	return 0;
//}
