//#include <iostream>
//using namespace std;
//
//struct treeNode{
//	int data;
//	treeNode* left;
//	treeNode* right;
//
//};
//struct treeNode* treeRoot;
//struct treeNode* temp = new treeNode;
//
//void treeInsertion(struct treeNode* newNode){
//	if (treeRoot == NULL){
//		treeRoot = new treeNode;
//		treeRoot = newNode;
//		cout << "Root inserted!\n";
//	}
//	else{
//		temp = treeRoot;
//		while (temp != NULL){
//			if (newNode->data < temp->data && temp->left == NULL){
//				temp->left = newNode;
//				break;
//			}
//			else if (newNode->data > temp->data && temp->right == NULL){
//				temp->right = newNode;
//				break;
//			}
//			else if (newNode->data < temp->data){
//				temp = temp->left;
//			}
//			else {
//				temp = temp->right;
//			}
//		}
//	}
//}
//
//int childNodes = 0;
//int size = 0;
//void preOrderTraversal(treeNode* r){
//	if (r == NULL){
//		return;
//	}
//	if (r->left == NULL && r->right == NULL){
//		childNodes++;
//	}
//
//	cout << r->data << " ";
//	size++;
//	preOrderTraversal(r->left);
//	preOrderTraversal(r->right);
//}
//
//void inOrderTraversal(treeNode* r){
//	if (r == NULL){
//		return;
//	}
//	inOrderTraversal(r->left);
//	cout << r->data << " ";
//	inOrderTraversal(r->right);
//}
//
//void postOrderTraversal(treeNode* r){
//	if (r == NULL){
//		return;
//	}
//	postOrderTraversal(r->left);
//	postOrderTraversal(r->right);
//	cout << r->data << " ";
//}
//
////PRINTING THE TREE IN A TREE FORMAT
//void print2D(struct treeNode* r, int space){
//	if (r == NULL){
//		return;
//	}
//	else{
//		space = space + 5;//GLOBALSPACE = 5
//		print2D(r->right, space);
//		cout << endl;
//		for (int i = 5; i < space; i++)
//		{
//			cout << " ";
//		}
//		cout << r->data;
//		print2D(r->left, space);
//	}
//}
//
//void treeSearch(int search){
//
//	if (treeRoot == NULL){
//		return;
//	}
//	else{
//		bool check = false;
//		struct treeNode* temp = treeRoot;
//		while (temp != NULL){
//			if (search == temp->data){
//				cout << "Tree Node Found!\n";
//				check = true;
//				break;
//			}else if (search < temp->data){
//				temp = temp->left;
//			}else if (search > temp->data){
//				temp = temp->right;
//			}
//		}
//		if (!check){
//			cout << "Tree Node Not Found!\n";
//		}
//	}
//
//}
//
//int getDepth(treeNode* root, int value, int depth) {
//	if (root == NULL) {
//		return -1;
//	}
//	else if (value == root->data) {
//		return depth;
//	}
//	else if (value < root->data) {
//		return getDepth(root->left, value, depth + 1);
//	}
//	else {
//		return getDepth(root->right, value, depth + 1);
//	}
//}
//
////HEIGHT = MAXIMUM DEPTH OF TREE
//int treeHeight(struct treeNode* r){
//	if (r == NULL){
//		return -1;
//	}
//	else{
//		int lheight = treeHeight(r->left);
//		int rheight = treeHeight(r->right);
//
//		if (lheight > rheight){
//			return (lheight + 1);
//		}
//		else{
//			return (rheight + 1);
//		}
//	}
//}
//
//
//void BFS(treeNode* root) {
//	if (root == nullptr)
//		return;
//
//	// Create an array to act as a queue
//	const int MAX_SIZE = 100;
//	treeNode* queue[MAX_SIZE];
//	int front = 0;
//	int rear = 0;
//
//	 //Enqueue the root node
//	queue[rear++] = root;
//
//	while (front != rear) {
//		treeNode* current = queue[front++];
//
//		// Process the current node (print its value, for example)
//		cout << current->data << " ";
//
//		 //Enqueue the left child if it exists
//		if (current->left != nullptr)
//			queue[rear++] = current->left;
//
//		 //Enqueue the right child if it exists
//		if (current->right != nullptr)
//			queue[rear++] = current->right;
//	}
//}
//
//treeNode* findMinValueNode(treeNode* node) {
//	treeNode* current = node;
//	while (current->left != NULL) {
//		current = current->left;
//	}
//	return current;
//}
//
//treeNode* deleteNode(treeNode* root, int value) {
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
//			treeNode* temp = root;
//			root = root->right;
//			delete temp;
//		}
//		else if (root->right == NULL) {
//			treeNode* temp = root;
//			root = root->left;
//			delete temp;
//		}
//		else {
//			treeNode* minNode = findMinValueNode(root->right);
//			root->data = minNode->data;
//			root->right = deleteNode(root->right, minNode->data);
//		}
//	}
//	return root;
//}
//
//
//
//int main(){
//	int size, values;
//	struct treeNode* newNode = NULL;
//	cout << "Size of tree: ";
//	cin >> size;
//	for (int i = 0; i < size; i++){
//		cout << "Value " << i + 1 << " : ";
//		cin >> values;
//		newNode = new treeNode;
//		newNode->data = values;
//		newNode->left = NULL;
//		newNode->right = NULL;
//		treeInsertion(newNode);
//	}
//
//	cout << "***DEPTH FIRST TECHNIQUES FOR TREE TRAVERSALS***\n\n";
//	cout << "PRE ORDER TRAVERSAL: ";
//	preOrderTraversal(treeRoot);
//	cout << "SIZE OF TREE: " << size;
//	cout << "\nLEAF NODES OF TREE: " << childNodes;
//	/*
//	cout << "\nIN ORDER TRAVERSAL: ";
//	inOrderTraversal(treeRoot);
//	cout << "\nPOST ORDER TRAVERSAL: ";
//	postOrderTraversal(treeRoot);
//	cout << "\n2D VIEW OF TREE: ";
//	print2D(treeRoot,10);
//
//	cout << "\nSearch for a value in the tree\nEnter Value: ";
//	int search;
//	cin >> search;
//	treeSearch(search);
//
//	int height = treeHeight(treeRoot);
//	cout << "Height of the tree is: " << height << endl;
//
//
//	cout << "***BREADTH FIRST TECHNIQUES FOR TREE TRAVERSALS***\n";
//	BFS(treeRoot);*/
//	
//
//	system("pause");
//	return 0;
//}