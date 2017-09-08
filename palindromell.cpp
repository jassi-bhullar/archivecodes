#include <bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	node* next;
};

void display(node* tmp){
	while(tmp!=NULL){
		cout << tmp->data << " ";
		tmp = tmp->next;
	}
	cout << endl;
}

node* h;

bool check(node* n){
	if(n==NULL) return true;
	if(check(n->next)){
		if(h->data == n->data){
			h = h->next;
			return true;
		}
	}
	return false;
}

int main(){
	
	int a[] = {7,2,-32,5,5,-32,2,7};
	
	node* head = new node();
	head->data = a[0];
	head->next = NULL;

	node* tmp = head;
	h = head;

	for (int i = 1; i < 8; ++i)
	{
		node* t = new node();
		t->data = a[i];
		tmp->next = t;
		tmp = t;
		t->next = NULL;
	}

	display(head);

	cout << check(head) << endl;


	return 0;
}