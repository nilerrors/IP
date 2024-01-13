#ifndef BST_H
#define BST_H

#include <string>

struct User {
  std::string firstname;
  std::string lastname;

  User(std::string firstname, std::string lastname) {
    this->firstname = firstname;
    this->lastname = lastname;
  }
};

struct BST {
  User* value;
  int key;
  BST* leftTree;
  BST* rightTree;

  BST() {
    value = nullptr;
    key = 0;
    leftTree = nullptr;
    rightTree = nullptr;
  }

  BST(User* value, int key) {
    this->value = value;
    this->key = key;
    leftTree = nullptr;
    rightTree = nullptr;
  }

  BST(User* value, int key, BST* leftTree, BST* rightTree) {
    this->value = value;
    this->key = key;
    this->leftTree = leftTree;
    this->rightTree = rightTree;
  }
};

BST* createBST();
bool isEmpty(BST* bst);
void destroy(BST* bst);
std::string save(const BST* const bst);
bool insert(BST*& bst, int key, User* value);
void visit(BST* bst);
User* find(const BST* const bst, int key);
void preorder(BST* bst);
void inorder(BST* bst);
void postorder(BST* bst);

#endif
