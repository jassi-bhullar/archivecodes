#include <bits/stdc++.h>
using namespace std;

struct Node {
	int data;
	struct Node *left;
	struct Node *right;
} typedef node;

node *NewNode(int data){
	node* tmp = new node;
	tmp->data = data;
	tmp->left = NULL;
	tmp->right = NULL;
}

void InOrder(node* root){	// one of the DFS Methods
	if(root == NULL) return;

	InOrder(root->left);
	cout << root->data << " ";
	InOrder(root->right);
}

void PrintGivenLevel(node* root, int level){
	if(root == NULL)
		return;
	if(level == 1)
		cout << root->data << " ";
	else if(level > 1){
		PrintGivenLevel(root->left, level-1);
		PrintGivenLevel(root->right, level-1);
	}
}


int height(node* root){
	if(root == NULL)
		return 0;
	else {
		int lheight = height(root->left);
		int rheight = height(root->right);

		if(lheight > rheight) return lheight+1;
		else return rheight+1;
	}
}

void BFS(node* root){
	int h = height(root);
	for(int i=1; i<=h; ++i)
		PrintGivenLevel(root, i);
}

int main(){
	node *root = NewNode(1);
	root->left = NewNode(2);
	root->right = NewNode(3);
	root->left->left = NewNode(4);
	root->left->right = NewNode(5);
	root->right->left = NewNode(6);
	root->right->right = NewNode(7);

	root->left->left->left = NewNode(8);
	// cout << height(root);
	InOrder(root);
	cout << endl;
	BFS(root);
	cout << endl;

	return 0;
}