#include <bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	node* next;
};

void display(node* head){
	while(head!=NULL){
		cout << head->data << " ";
		head = head->next;
	}
	cout << endl;
}

node* head = new node();

bool check(node* n){
	if(n==NULL) return true;
	if(check(n->next)){

	}
}

int main(){
	
	int a[] = {1,2,-3,5,-3,2,1};

	
	head->data = a[0];
	head->next = NULL;

	node* tmp = head;

	for (int i = 1; i < 7; ++i)
	{
		node* t = new node();
		t->data = a[i];
		tmp->next = t;
		tmp = t;
		//t->next = NULL;
	}

	display(head);

	return 0;
}