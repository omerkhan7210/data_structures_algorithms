//#include <iostream>
//using namespace std;
//
//struct Node {
//	int data;
//	Node* left;
//	Node* right;
//};
//
//Node* createNode(int value) {
//	Node* newNode = new Node();
//	newNode->data = value;
//	newNode->left = NULL;
//	newNode->right = NULL;
//	return newNode;
//}
//
//Node* insertNode(Node* root, int value) {
//	if (root == NULL) {
//		root = createNode(value);
//	}
//	else if (value <= root->data) {
//		root->left = insertNode(root->left, value);
//	}
//	else {
//		root->right = insertNode(root->right, value);
//	}
//	return root;
//}
//
//void inOrderTraversal(Node* root) {
//	if (root == NULL) {
//		return;
//	}
//	inOrderTraversal(root->left);
//	cout << root->data << " ";
//	inOrderTraversal(root->right);
//}
//
//void preOrderTraversal(Node* root) {
//	if (root == NULL) {
//		return;
//	}
//	cout << root->data << " ";
//	preOrderTraversal(root->left);
//	preOrderTraversal(root->right);
//}
//
//void postOrderTraversal(Node* root) {
//	if (root == NULL) {
//		return;
//	}
//	postOrderTraversal(root->left);
//	postOrderTraversal(root->right);
//	cout << root->data << " ";
//}
//
//int findMin(Node* root) {
//	if (root == NULL) {
//		cout << "BST is empty." << endl;
//		return -1;
//	}
//	else if (root->left == NULL) {
//		return root->data;
//	}
//	return findMin(root->left);
//}
//
//int findMax(Node* root) {
//	if (root == NULL) {
//		cout << "BST is empty." << endl;
//		return -1;
//	}
//	else if (root->right == NULL) {
//		return root->data;
//	}
//	return findMax(root->right);
//}
//
//Node* findMinNode(Node* root) {
//	if (root == NULL) {
//		return NULL;
//	}
//	else if (root->left == NULL) {
//		return root;
//	}
//	return findMinNode(root->left);
//}
//
//Node* deleteNode(Node* root, int value) {
//	if (root == NULL) {
//		return root;
//	}
//	else if (value < root->data) {
//		root->left = deleteNode(root->left, value);
//	}
//	else if (value > root->data) {
//		root->right = deleteNode(root->right, value);
//	}
//	else {
//		if (root->left == NULL && root->right == NULL) {
//			delete root;
//			root = NULL;
//		}
//		else if (root->left == NULL) {
//			Node* temp = root;
//			root = root->right;
//			delete temp;
//		}
//		else if (root->right == NULL) {
//			Node* temp = root;
//			root = root->left;
//			delete temp;
//		}
//		else {
//			Node* minNode = findMinNode(root->right);
//			root->data = minNode->data;
//			root->right = deleteNode(root->right, minNode->data);
//		}
//	}
//	return root;
//}
//
//int main() {
//	Node* root = NULL;
//	root = insertNode(root, 52);
//	root = insertNode(root, 25);
//	root = insertNode(root, 60);
//	root = insertNode(root, 35);
//	root = insertNode(root, 20);
//	root = insertNode(root, 19);
//	root = insertNode(root, 59);
//	root = insertNode(root, 65);
//
//	cout << "In-order traversal: ";
//	inOrderTraversal(root);
//	cout << endl;
//
//	cout << "Pre-order traversal: ";
//	preOrderTraversal(root);
//	cout << endl;
//
//	cout << "Post-order traversal: ";
//	postOrderTraversal(root);
//	cout << endl;
//
//	cout << "Minimum value in BST: " << findMin(root) << endl;
//	cout << "Maximum value in BST: " << findMax(root) << endl;
//
//	root = deleteNode(root, 65);
//	root = deleteNode(root, 20);
//
//	cout << "BST after deletion: ";
//	inOrderTraversal(root);
//	cout << endl;
//
//	system("pause");
//	return 0;
//}
