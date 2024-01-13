#include <iostream>
#include "./queue.h"

using namespace std;

int main() {
  Queue* q = createQueue();
  cout << boolalpha << isEmpty(q) << endl;
  cout << dequeue(q) << endl;
  enqueue(q, "Jos");
  enqueue(q, "An");
  enqueue(q, "Peter");
  print(q);  // Jos, An en Peter worden op drie regels geprint
  string first = dequeue(q);
  cout << first << endl;  // Jos wordt geprint
  print(q);               // An en Peter worden geprint
  destroyQueue(q);
  return 0;
}
