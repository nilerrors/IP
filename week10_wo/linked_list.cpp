#include "linked_list.h"

LinkedList* createList() {
  LinkedList* list = new LinkedList;
  list->size = 0;
  list->head = nullptr;
  return list;
}

bool isEmpty(LinkedList* list) {
  return list->head == nullptr;
}

int getLength(LinkedList* list) {
  return list->size;
}

// Add item to the end of the list
void add(LinkedList* list, std::string item) {
  Node* newNode = new Node;
  newNode->item = item;
  newNode->next = nullptr;
  newNode->prev = nullptr;

  if (isEmpty(list)) {
    list->head = newNode;
  } else {
    Node* curr = list->head;
    while (curr->next != nullptr) {
      curr = curr->next;
    }
    curr->next = newNode;
    newNode->prev = curr;
  }
  list->size++;
}

// Get item at index
std::string get(LinkedList* list, int index) {
  if (index < 0 || index >= list->size) {
    return "ERROR";
  }

  Node* curr = list->head;
  for (int i = 0; i < index; i++) {
    curr = curr->next;
  }
  return curr->item;
}

// Print list
// void print(LinkedList* list) {
//     Node* curr = list->head;
//     while (curr != nullptr) {
//         std::cout << curr->item << std::endl;
//         curr = curr->next;
//     }
// }

// Add item at index
bool set(LinkedList* list, int index, std::string item) {
  if (index < 0 || index > list->size) {
    return false;
  }

  Node* newNode = new Node;
  newNode->item = item;
  newNode->next = nullptr;
  newNode->prev = nullptr;

  if (index == 0) {
    newNode->next = list->head;
    list->head->prev = newNode;
    list->head = newNode;
  } else {
    Node* curr = list->head;
    for (int i = 0; i < index - 1; i++) {
      curr = curr->next;
    }
    newNode->next = curr->next;
    newNode->prev = curr;
    curr->next = newNode;
  }
  list->size++;
  return true;
}

// Remove item at index
bool remove(LinkedList* list, int index) {
  if (index < 0 || index >= list->size) {
    return false;
  }

  if (index == 0) {
    Node* temp = list->head;
    list->head = list->head->next;
    list->head->prev = nullptr;
    delete temp;
  } else {
    Node* curr = list->head;
    for (int i = 0; i < index - 1; i++) {
      curr = curr->next;
    }
    Node* temp = curr->next;

    if (curr->next != nullptr) {
      curr->next = curr->next->next;
      if (curr->next != nullptr) {
        curr->next->prev = curr;
      }
    } else {
      curr->next = nullptr;
    }
    delete temp;
  }
  list->size--;
  return true;
}

// destroyList function
void destroyList(LinkedList* list) {
  Node* curr = list->head;
  while (curr != nullptr) {
    Node* temp = curr;
    curr = curr->next;
    delete temp;
  }
  delete list;
}

void print(LinkedList* list) {
  Node* temp_ptr = list->head;

  while (temp_ptr != nullptr) {
    std::cout << (temp_ptr->item) << std::endl;
    temp_ptr = temp_ptr->next;
  }
}
