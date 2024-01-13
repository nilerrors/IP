#include "./queue.h"

Queue* createQueue() {
  Queue* queue = new Queue;
  queue->size = 0;
  queue->head = nullptr;
  queue->tail = nullptr;
  return queue;
}

bool isEmpty(Queue* queue) {
  return queue->head == nullptr;
}

bool enqueue(Queue* queue, std::string item) {
  Node* newNode = new Node;
  newNode->data = item;
  newNode->next = nullptr;

  if (isEmpty(queue)) {
    queue->head = newNode;
    queue->tail = newNode;
  } else {
    queue->tail->next = newNode;
    queue->tail = newNode;
  }
  queue->size++;
  return true;
}

std::string dequeue(Queue* queue) {
  if (isEmpty(queue)) {
    return "ERROR";
  }

  Node* temp = queue->head;
  std::string item = temp->data;
  queue->head = queue->head->next;
  delete temp;
  queue->size--;
  return item;
}

void print(Queue* queue) {
  Node* curr = queue->head;
  while (curr != nullptr) {
    std::cout << curr->data << std::endl;
    curr = curr->next;
  }
}

void destroyQueue(Queue* queue) {
  Node* curr = queue->head;
  while (curr != nullptr) {
    Node* temp = curr;
    curr = curr->next;
    delete temp;
  }
  delete queue;
}
