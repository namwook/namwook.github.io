#include <iostream>
using namespace std;

class Queue {
private:
    int arr[5]={0,};
    int front;
    int back;
public:
    void print();
    void error();
    void push(int in);
    int pop();
    Queue() {
        front = back = 4;
    }
};
void Queue::error(){
    if(back == -1) printf("queue is fulled..\n");
    else if(front == -1) printf("queue is empty..\n");
}
void Queue::print() {
    for (int i = 0; i < 5; ++i) {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
void Queue::push(int in) {
    if(back == -1) error();
    else{
        arr[back] = in;
        back--;
    }
}
int Queue::pop() {
    if(front == -1) error();
    else{
    printf("pop : %d\n",arr[front]);
    arr[front]=0;
    front--;
    }
}

int main() {
    Queue q = Queue();
    q.push(1);
    q.push(2);
    q.print();
    q.pop();
    q.print();
    q.push(1);
    q.push(2);
    q.print();
    return 0;
}
