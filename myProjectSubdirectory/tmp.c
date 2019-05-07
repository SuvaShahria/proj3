#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "te.h"


 int x = 3;


int getx(){
printf("hi\n");
return x;
}


void setx(){
x = 2;

}

void init(){
  struct Node* head = NULL; 
  struct Node* second = NULL; 
  struct Node* third = NULL; 
 head = (struct Node*)malloc(sizeof(struct Node));  
  second = (struct Node*)malloc(sizeof(struct Node)); 
  third = (struct Node*)malloc(sizeof(struct Node)); 

head->data = 1; 
  head->next = second; 
  second->data = 2;  
  
  
  second->next = third; 
 third->data = 3; 
  third->next = NULL; 
struct Node* n = NULL;
	n = (struct Node*)malloc(sizeof(struct Node));
n = head;
int w = 0;
	  while (n != NULL) 
  { 
     printf(" %d \n", n->data); 
     n = n->next; 
  } 
}

