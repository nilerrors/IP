#include "./bst.h"
#include <iostream>

using namespace std;

BST* createBST() {
  return nullptr;
}

bool isEmpty(BST* bst) {
  return bst == nullptr;
}

void destroy(BST* bst) {
  if (bst == nullptr) {
    return;
  }
  delete bst->value;
  destroy(bst->leftTree);
  destroy(bst->rightTree);
  delete bst;
  bst = nullptr;
}

std::string save(const BST* const bst) {
  if (bst == nullptr) {
    return "None";
  }
  std::string result = "{'root': " + std::to_string(bst->key) + "";
  if (bst->leftTree != nullptr) {
    result += ",'left':" + save(bst->leftTree);
  }
  if (bst->rightTree != nullptr) {
    result += ",'right':" + save(bst->rightTree);
  }
  result += "}";
  return result;
}

bool insert(BST*& bst, int key, User* value) {
  if (bst == nullptr) {
    bst = new BST{value, key};
    return true;
  } else if (key < bst->key) {
    return insert(bst->leftTree, key, value);
  } else if (key > bst->key) {
    return insert(bst->rightTree, key, value);
  } else {
    delete bst->value;
    bst->value = nullptr;
    bst->value = value;
    return true;
  }
}

void visit(User* user, int key) {
  cout << key << " " << user->firstname << " " << user->lastname << endl;
}

User* find(const BST* const bst, int key) {
  if (bst == nullptr || bst->value == nullptr) {
    return nullptr;
  } else if (key < bst->key) {
    if (bst->leftTree == nullptr) {
      return nullptr;
    }
    return find(bst->leftTree, key);
  } else if (key > bst->key) {
    if (bst->rightTree == nullptr) {
      return nullptr;
    }
    return find(bst->rightTree, key);
  }
  return bst->value;
}

void preorder(BST* bst) {
  if (bst == nullptr) {
    return;
  }
  visit(bst->value, bst->key);
  preorder(bst->leftTree);
  preorder(bst->rightTree);
}

void inorder(BST* bst) {
  if (bst == nullptr) {
    return;
  }
  inorder(bst->leftTree);
  visit(bst->value, bst->key);
  inorder(bst->rightTree);
}

void postorder(BST* bst) {
  if (bst == nullptr) {
    return;
  }
  postorder(bst->leftTree);
  postorder(bst->rightTree);
  visit(bst->value, bst->key);
}

BST* rotateLeft(BST* bst) {
  if (bst == nullptr || bst->rightTree == nullptr) {
    return bst;
  }
  BST* newRoot = bst->rightTree;
  bst->rightTree = newRoot->leftTree;
  newRoot->leftTree = bst;
  return newRoot;
}

BST* rotateRight(BST* bst) {
  if (bst == nullptr || bst->leftTree == nullptr) {
    return bst;
  }
  BST* newRoot = bst->leftTree;
  bst->leftTree = newRoot->rightTree;
  newRoot->rightTree = bst;
  return newRoot;
}

BST* balance(BST*& bst) {
  if (bst == nullptr) {
    return bst;
  }
  if (bst->leftTree != nullptr) {
    int length = 0;
    BST* current = bst->leftTree;
    while (current != nullptr) {
      current = current->leftTree;
      length++;
    }
    for (int i = 0; i < length / 2; i++) {
      bst = rotateRight(bst);
    }
  } else if (bst->rightTree != nullptr) {
    int length = 0;
    BST* current = bst->rightTree;
    while (current != nullptr) {
      current = current->rightTree;
      length++;
    }
    for (int i = 0; i < length / 2; i++) {
      bst = rotateLeft(bst);
    }
  }
  bst->leftTree = balance(bst->leftTree);
  bst->rightTree = balance(bst->rightTree);

  return bst;
}

int main() {
  BST* bst = createBST();
  insert(bst, 1, new User{"John", "1"});
  insert(bst, 2, new User{"John", "2"});
  insert(bst, 3, new User{"John", "3"});
  insert(bst, 4, new User{"John", "4"});
  insert(bst, 5, new User{"John", "5"});
  insert(bst, 6, new User{"John", "6"});
  insert(bst, 7, new User{"John", "7"});
  cout << save(bst) << endl;
  bst = balance(bst);
  cout << save(bst) << endl;
  destroy(bst);
  return 0;
}
