#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
};


Node* deleteAtBegin(Node * x){
    Node * y=x;
    y=y->next;
    return y;
}

Node* deleteAtEnd(Node *x){
    Node *y=x;
    while(x->next->next!=NULL){
        x=x->next;
    }
    x->next=NULL;
    return y;
}

Node* deleteAtMid(Node *x){
    Node *y=x;
    
    return y;
}
int main(){
    
    Node *head=NULL;
    head=new Node();
    Node *first=NULL;
    first=new Node();
    Node *second=NULL;
    second=new Node();
    Node *third=NULL;
    third=new Node();
    head->next=first;
    first->next=second;
    second->next=third;
    first->data=1;
    second->data=2;
    third->data=3;
    Node *temp=NULL;
    temp=new Node();
    cout<<endl<<"to delete at begin"<<endl;
    Node *x=head;
    Node *min=head;
    temp=deleteAtBegin(x);

    while(temp){
        cout<<temp->data<<"-->";
        temp=temp->next;
    }
    
    // cout<<endl<<"to delete at end"<<endl;
    // temp=head;
    // Node *y=deleteAtEnd(temp);
    // while(y){
    //     cout<<y->data<<"-->";
    //     y=y->next;
    // }
    
   cout<<endl<<"to delete at mid"<<endl;
   Node *b=min;
  
   while(b){
       cout<<b->data<<"-->";
       b=b->next;
   }
   return 0;
}