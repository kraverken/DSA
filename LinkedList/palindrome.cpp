#include<bits/stdc++.h>
using namespace std;


class node{
  public:
          int num;
          node* next;
          node(int val){
            num=val;
            next=NULL;
          }
};

int sex(node* &head){
	while(head!=NULL){
		cout<<"-->"<<head->num;
		head=head->next;
	}
  cout<<endl;
  return 0;
}

void insertNode(node* &head ,int val){
  node* newNode=new node(val);
  if(head==NULL){
    head=newNode;
    return;
  }
  node* temp=head;
  while(temp->next!=NULL) temp=temp->next;
  temp->next=newNode;
  return;
}

node* reverse(node* &ptr){
  node* pre=NULL;
  node* next=NULL;
  while(ptr!=NULL){
    next=ptr->next;
    ptr->next=pre;
    pre=ptr;
    ptr=next;
  }
  return pre;
}

node* middle(node* head){
  node* slow=head;
  node* fast=head;
  while(fast->next!=NULL||fast->next->next!=NULL){
    slow=slow->next;  
    fast=fast->next->next;
    }
    return slow;
}

bool palindrome(node* head){
  if(head==NULL||head->next==NULL) return true;
        
    node* slow = head;
    node* fast = head;
        
    while(fast->next!=NULL&&fast->next->next!=NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }
        
    slow->next = reverse(slow->next);
    sex(slow);
    slow = slow->next;
    node* dummy = head;
        
    while(slow!=NULL) {
        if(dummy->num != slow->num) return false;
        dummy = dummy->next;
        slow = slow->next;
    }
    return true;
}

int main(){
  cout<<endl;
  node* head=NULL;
  insertNode(head,1);
  insertNode(head,2);
  insertNode(head,3);
  // insertNode(head,4);
  insertNode(head,4);
  insertNode(head,2);
  insertNode(head,1);
  sex(head);

  if(palindrome(head))
    cout<<"Is palindrome";
  else
    cout<<"Not palindrome";
  
  return 0;
}
