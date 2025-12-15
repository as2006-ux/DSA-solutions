#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

int main(){
    Node* head=new Node{20,nullptr};
    Node* temp=new Node{10,head};
    head=temp;
    cout<<head->data;
}
