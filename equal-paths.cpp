#ifndef RECCHECK
//if you want to add any #includes like <iostream> you must do them here (before the next endif)

#endif

#include "equal-paths.h"
using namespace std;


// You may add any prototypes of helper functions here
int helper(Node* n) {
    if (n == nullptr) {
        return 0;
    }
    else if (n->left == nullptr && n->right == nullptr) {
        return 1;
    }
    else if (n->left != nullptr && n->right == nullptr) {
        int l = helper(n->left);
        if (l == -1) {
            return -1;
        }
        return l + 1;
    }
    else if (n->left == nullptr && n->right != nullptr) {
        int l = helper(n->right);
        if (l == -1) {
            return -1;
        }
        return l + 1;
    }
    else {
        int l = helper(n->left);
        int r = helper(n->right);
        if (l == -1 || r == -1 || l != r) {
            return -1;
        }
        return l + 1;
    }
}


bool equalPaths(Node * root)
{
    // Add your code below
    if (root = NULL) {
        return true;
    }
    else {
        if (helper(root) != -1) {
            return true;
        }
        else {
            return false;
        }
    }

}

