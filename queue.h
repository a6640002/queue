#ifndef QUEUE_H
#define QUEUE_H

#include "stdio.h"
#include "stdlib.h"
typedef int DataType;
#define INIT_SIZE 10
typedef struct sq
{
    DataType *Data;
    int front;
    int rear;
} sq;
int init(sq *head);
int IsEmpty(sq *head);
int IsFull(sq *head);
int push(sq *head, DataType data);
DataType pop(sq *head);
#endif