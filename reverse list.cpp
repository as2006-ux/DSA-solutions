#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

int main(){
    Node *head=nullptr,*curr,*prev=nullptr;
    for(int i=1;i<=3;i++){
        curr=new Node{i,head};
        head=curr;
    }

    curr=head;
    while(curr){
        Node* next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    head=prev;
    cout<<head->data;
}
