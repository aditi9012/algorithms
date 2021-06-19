#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node *next;
};



Node* insertAtBegin(int value,Node* head){
    Node *start=NULL;
    start=new Node();
    start->data=value;
    start->next=head;
    head=start;
    return head;
}

Node* insertAtEnd(int value,Node* pre){
    Node* start=NULL;
    start=new Node();
    start->data=value;
    Node * q=pre;
    while(q->next!=NULL){
        q=q->next;
    }
    q->next=start;
    start->next=NULL;
    return pre;
}

Node* insertAtMid(int value,Node* mid){
    Node* start=NULL;
    start=new Node();
    Node * temp=mid;
    Node * extra=mid;
    start->data=value;
    while(temp->data!=1){
        temp=temp->next;
    }
    extra=temp->next;
    temp->next=start;
    start->next=extra;
    return mid;
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
    first->data=1;
    second->data=2;
    third->data=3;
    head->next=first;
    first->next=second;
    second->next=third;
     Node*temp=head;
    cout<<endl<<"to enter at begin give a value"<<endl;
    int val;
    cin>>val;
    temp=insertAtBegin(val,temp);
    head=temp;
     while(temp){
        cout<<temp->data<<"-->";
        temp=temp->next;
    }
    
    
    Node* pre=head;
    cout<<endl<<endl<<"to enter at end give a value"<<endl;
    int end;
    cin>>end;
    pre=insertAtEnd(end,pre);
    head=pre;
    while(pre){
        cout<<pre->data<<"-->";
        pre=pre->next;
    }
    
    
    Node *mid=head;
    cout<<endl<<endl<<"to enter at mid after node 1"<<endl;
    int m;
    cin>>m;
    mid=insertAtMid(m,mid);
    head=mid;
    while(mid){
        cout<<mid->data<<"-->";
        mid=mid->next;
    }
    
    
    
    return 0;
}