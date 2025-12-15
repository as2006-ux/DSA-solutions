#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

int main(){
    Node *head=new Node{10,nullptr};
    head->next=new Node{20,nullptr};
    cout<<head->data<<" "<<head->next->data;
}
