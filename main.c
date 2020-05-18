#include "queue.h"
int main()
{
    sq queue;
    int tmp = 0;
    init(&queue);
    int a[100] = {1, 2, 3, 4, 5, 6, 7, 8,3,32,3,44,5};
    for (int i = 0; i < 11; i++)
        push(&queue, a[i]);

    for (int i = 0; i < 11; i++)
    {
        tmp = pop(&queue);
        printf("%d \n", tmp);
    }
}