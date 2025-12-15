#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

int main(){
    Node* head=new Node{10,nullptr};
    Node* tail=new Node{20,nullptr};
    head->next=tail;
    cout<<tail->data;
}
