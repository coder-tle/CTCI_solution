#include<bits/stdc++.h>
using namespace std;

struct Node {
		int data;
		struct Node * next;
		
		Node(int val){
			data = val;
			next = NULL;
		}
};

void Display(struct Node * head){
	struct Node * temp = head;
	
	while(temp!= NULL){
		cout<<temp->data<<" ";
		temp = temp->next;
	}
	cout<<endl;
	
}

struct Node * Partition(struct Node * start, int x){
	bool greater = false;
	struct Node * temp, * head = start, * prev = NULL;
	temp = start;
	
	if(temp == NULL) return start ;
	
	while(temp != NULL){
		if( (temp->data < x) &&(greater) ){
			if(prev != NULL){
				prev->next = temp->next;
				temp->next = head;
				head = temp;
				temp = prev;
			}
			//else{
				
			//}
		}
		else if( temp->data >= x && greater == false ){
			greater  = true;
		}
		prev = temp;
		temp = temp->next;
		
	}
	return head;
}



int main(){
		struct Node * head;
		
		head = new Node(1);
		head->next = new Node(2);
		head->next->next = new Node(-1);
		head->next->next->next = new Node(4);
		head->next->next->next->next = new Node(7);
		head->next->next->next->next->next = new Node(0);
		head->next->next->next->next->next->next = new Node(9);
		
		
		int x = 3;
		
		
		head = Partition(head, x);
		
		Display(head);
		return 0;
}
