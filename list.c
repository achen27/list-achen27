#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "headers.h"

void print_list(struct node *n){
  printf("(")
  struct node x = n;
  while (x->next != NULL){
    printf("%d, ", n->i);
    x = x->next;
  }
  printf("%d)", n->i);
}

struct node * insert_front(struct node *n, int x){
  struct node new = malloc(12);
  new.i = x;
  new.next = n;
  return *new;
}

struct node * free_list(struct node *n){
  struct node x = n;
  while (x->next != NULL){
    y = x;
    x = x->next;
    free(y);
  }
  return n;
}

struct node * remove(struct node *front, int data){
  struct node x = front;
  struct node y = front.next;

  while (y->next != NULL){
    if (x.i == data) {
      f = x.next;
      free(x);
      return f;
    } else if (y.i == data){
      x.next = y->next
      free(y);
      return front;
    }
    x = y;
    y = y->next;
  }
  return n;
}
