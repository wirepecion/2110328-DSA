#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "map_bst.h"

template <typename KeyT, typename MappedT, typename CompareT>
long long CP::map_bst<KeyT, MappedT, CompareT>::my_recur(node* n, size_t aux) {
  // base 0
  if (n == NULL) return 0;

  // this is leave
  if (n->left == NULL && n->right == NULL) return aux;

  // traversal in left + right
  return my_recur(n->left,aux+1) + my_recur(n->right,aux+1);
}

template <typename KeyT, typename MappedT, typename CompareT>
long long CP::map_bst<KeyT, MappedT, CompareT>::sum_leaves_depth() {
  // base 0
  if(mSize == 0) return 0;

  // strart traveral
  return my_recur(mRoot, 0);
}

#endif
