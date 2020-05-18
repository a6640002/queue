#include "queue.h"
int init(sq *head)
{
    head->Data = malloc(sizeof(DataType) * INIT_SIZE);

    if (head->Data == NULL)
    {
        printf("error malloc ");
        return -1;
    }

    head->front = head->rear = 0;
}

int IsEmpty(sq *head)
{
    if (head->front - head->rear == 0)
    {
        return 0;
    }
    return 1;
}

int IsFull(sq *queue)
{
    if ((queue->rear - queue->front + 1 + INIT_SIZE) % INIT_SIZE == 0)
    {
        printf("queue is full");
        return 0;
    }
    return 1;
}
int push(sq *head, DataType data)
{
    if (IsFull(head) == 0)
    {
        printf("list is full \n");
        return 1;
    }
    if (head->rear >= INIT_SIZE)
    {
        head->rear = 0;
    }
    head->Data[head->rear++] = data;
}

DataType pop(sq *head)
{
    if (IsEmpty(head) == 0)
    {
        printf("list is empty");
        return 1;
    }

    if (head->front >= INIT_SIZE)
    {
        head->front = 0;
    }

    return head->Data[head->front++];
}