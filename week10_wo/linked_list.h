#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <iostream>
#include <string>

struct Node {
  std::string item;
  Node* next;
  Node* prev;
};

struct LinkedList {
  int size;
  Node* head;
};

LinkedList* createList();
bool isEmpty(LinkedList* list);
int getLength(LinkedList* list);
void add(LinkedList* list, std::string item);
std::string get(LinkedList* list, int index);
bool set(LinkedList* list, int index, std::string item);
bool remove(LinkedList* list, int index);
void destroyList(LinkedList* list);
void print(LinkedList* list);

#endif
