#include <iostream>
using namespace std;

struct BTreeNode {
	int data;
	BTreeNode* left;
	BTreeNode* right;
};

BTreeNode* root = NULL;
int input;

void InsertRecur(BTreeNode* root, BTreeNode* node) {
	if (root->data == node->data) return;
	else if (root->data > node->data) {
		if (root->left == NULL) {
			root->left = node;
		}
		else {
			InsertRecur(root->left, node);
		}
	}
	else if (root->data < node->data) {
		if (root->right == NULL) {
			root->right = node;
		}
		else {
			InsertRecur(root->right, node);
		}
	}
}

void InsertNode(BTreeNode* node) {
	if (root == NULL) root = node;
	else InsertRecur(root, node);
}

void PostorderTraverse(BTreeNode* node) {
	if (node == NULL) return;
	PostorderTraverse(node->left);
	PostorderTraverse(node->right);
	cout << node->data << "\n";
	return;
}

int main() {
	while (cin >> input) {
		BTreeNode* node = new BTreeNode();
		node->data = input;
		node->left = NULL;
		node->right = NULL;
		InsertNode(node);
	}
	PostorderTraverse(root);
}