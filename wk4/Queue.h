#ifndef QUEUE_H
#define QUEUE_H

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct queue *Queue;

Queue QueueNew(void);

void QueueEnqueue(Queue q, int item);

int QueueDequeue(Queue q);

#endif
