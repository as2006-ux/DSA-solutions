#define SIZE 100
int q[SIZE], front = 0, rear = -1;

void enqueue(int x) {
    if(rear == SIZE-1) return;
    q[++rear] = x;
}

int dequeue() {
    if(front > rear) return -1;
    return q[front++];
}
