// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node  *next;
};
Node* insert(int value,Node *start){
    Node *a=new Node();
    a->data=value;
    a->next=start;
    start=a;
    return start;
}
int main() {
   Node* start;
    Node *first=NULL;
    Node *second=NULL;
    Node *third=NULL;
   start=new Node();
    first=new Node();
    second=new Node();
    third=new Node();
    start->next=first;
    first->data=1;
    first->next=second;
    second->data=2;
    second->next=third;
    third->data=3;
    third->next=NULL;
    cout<<start->data<<"->"<<first->data<<"->"<<second->data<<"->"<<third->data<<endl;
    
   // Node *temp = start;
    // while(start){
    //     cout<<start->data<<"-->";
    //     start=start->next;
    // }
     cout<<endl<<"To insert a value a begining:-"<<endl;
   
    int val;
    cin>>val;
    
  start= insert(val,start);
   while(start){
       cout<<start->data<<"->";
       start=start->next;
   }


    return 0;
}