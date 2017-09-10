#include <bits/stdc++.h>
using namespace std;

int max(int a, int b){
	return (a>=b) ? a : b;
}

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

void PrintLeaves(node* root){
	if(root){
		if(!root->left && !root->right)
			cout << root->data << " ";
		PrintLeaves(root->left);
		PrintLeaves(root->right);
	}
}

int height(node* root){
	if(root == NULL)
		return 0;

	return 1 + max(height(root->left), height(root->right));
}

void BFS(node* root){
	int h = height(root);
	for(int i=1; i<=h; ++i)
		PrintGivenLevel(root, i);
}

int diameter(node* root) {
	if(root == NULL)
		return 0;

	int lheight = height(root->left);
	int rheight = height(root->right);

	return max(lheight + rheight + 1,
			    max(diameter(root->left), diameter(root->right)));
}

// int diameterOpt(node* root, int *height) {
// 	if(root == NULL) {
// 		*height = 0;
// 		return 0;
// 	}

// 	int ldiameter = diameterOpt(root->left, );
// 	int rdiameter = diameterOpt(root->right, );

// 	*height

// 	return
// }

int main(){
	node *root = NewNode(1);
	root->left = NewNode(2);
	root->right = NewNode(3);
	
	root->left->left = NewNode(4);
	root->left->right = NewNode(5);
	root->right->left = NewNode(6);
	root->right->right = NewNode(7);

	root->left->left->left = NewNode(8);
	root->left->left->right = NewNode(9);
	root->left->right->left = NewNode(10);
	root->left->right->right = NewNode(11);
	root->right->left->left = NewNode(12);
	root->right->left->right = NewNode(13);
	root->right->right->left = NewNode(14);
	root->right->right->right = NewNode(15);

	cout << diameter(root) << endl;
	return 0;
}