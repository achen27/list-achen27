#include <stdio.h>
#include <stdlib.h>

#include "headers.h"

void print_list(struct node *n){
  printf("[");
  while (n != NULL){
    printf(" %d ", n->i);
    n = n->next;
  }
  printf("]\n");
}

struct node * insert_front(struct node *n, int x){
  struct node *new = malloc(sizeof(struct node));
  new->i = x;
  new->next = n;
  return new;
}

struct node * free_list(struct node *n){
  while (n != NULL){
    printf("Freeing Node: %d\n", n->i);
    struct node *t = n;
    n = n->next;
    free(t);
  }
  printf("Free at Last\n");
  return NULL;
}

struct node * remove_node(struct node *front, int data){
  struct node *x = front;
  struct node *y = front->next;

  if(x->i == data){
    free(x);
    return y;
  }

  while (y != NULL){
    if (y->i == data) {
      x->next = y->next;
      free(y);
      return front;
    }
    x = y;
    y = y->next;
  }
  return front;
}
