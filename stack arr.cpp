#define MAX 100
int st[MAX], top = -1;

void push(int x) {
    if(top == MAX-1) return;
    st[++top] = x;
}

int pop() {
    if(top == -1) return -1;
    return st[top--];
}
