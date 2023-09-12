#include <bits/stdc++.h>
using namespace std;
class Queue {
public:
    int front, rear, size;
    unsigned capacity;
    int* array;
};
Queue* createQueue(unsigned capacity)
{
    Queue* queue = new Queue();
    queue->capacity = capacity;
    queue->front = queue->size = 0;
    queue->rear = capacity - 1;
    queue->array = new int[queue->capacity];
    return queue;
}
int isFull(Queue* queue)
{
    return (queue->size == queue->capacity);
}
int isEmpty(Queue* queue)
{
    return (queue->size == 0);
}
void enqueue(Queue* queue, int item)
{
    if (isFull(queue))
        return;
    queue->rear = (queue->rear + 1)
                % queue->capacity;
    queue->array[queue->rear] = item;
    queue->size = queue->size + 1;
    cout << item << " enqueued to queue\n";
}
int dequeue(Queue* queue)
{
    if (isEmpty(queue))
        return INT_MIN;
    int item = queue->array[queue->front];
    queue->front = (queue->front + 1)
                % queue->capacity;
    queue->size = queue->size - 1;
    return item;
}
int front(Queue* queue)
{
    if (isEmpty(queue))
        return INT_MIN;
    return queue->array[queue->front];
}
int rear(Queue* queue)
{
    if (isEmpty(queue))
        return INT_MIN;
    return queue->array[queue->rear];
}
int main()
{
    Queue* queue = createQueue(1000);
    enqueue(queue, 1);
    enqueue(queue, 2);
    enqueue(queue, 3);
    enqueue(queue, 4);
    cout << dequeue(queue)
        << " dequeued from queue\n";
    cout << "Front item is "
        << front(queue) << endl;
    cout << "Rear item is "
        << rear(queue) << endl;
    return 0;
}
// 1 enqueued to queue
// 2 enqueued to queue
// 3 enqueued to queue
// 4 enqueued to queue
// 1 dequeued from queue
// Front item is 2
// Rear item is 4