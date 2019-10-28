#include <stdio.h>
#include <stdlib.h>

#include "headers.h"

int main(){
 printf("Printing empty list:\n");
 struct node *p = NULL;
 print_list(p);

 printf("Adding #s 0-9 to list.\n");
 int x = 0;
 while (x <= 9){
   p = insert_front(p,x);
   print_list(p);
   x++;
 }

 printf("Removing 9:\n");
 p = remove_node(p, 9);
 print_list(p);

 printf("Removing 4:\n");
 p = remove_node(p, 4);
 print_list(p);

 printf("Removing 0:\n");
 p = remove_node(p, 0);
 print_list(p);

 printf("Removing -1:\n");
 p = remove_node(p, -1);
 print_list(p);

 printf("Freeing List\n");
 p = free_list(p);
 printf("Printing List:\n");
 print_list(p);
}
