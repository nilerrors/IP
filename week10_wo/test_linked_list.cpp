#include "./linked_list.h"

int main() {
  LinkedList* l = createList();
  add(l, "Hello");
  add(l, "World");
  add(l, "!!");
  print(l);
  set(l, 1, "dear");
  print(l);
  remove(l, 3);
  print(l);
  destroyList(l);

  return 0;
}
