#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>
#include <string>

struct Node {
  std::string data;
  Node* next;
};

struct Queue {
  int size;
  Node* head;
  Node* tail;
};

Queue* createQueue();
bool isEmpty(Queue* q);
bool enqueue(Queue* q, std::string item);
std::string dequeue(Queue* q);
void print(Queue* q);
void destroyQueue(Queue* q);

#endif
