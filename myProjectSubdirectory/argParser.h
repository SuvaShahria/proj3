#ifndef _TE_H_
#define _TE_H_

#include <string.h>




struct Node  
{ 
  int data; 
  struct Node *next; 
}; 



extern
int getx(); /* units of 4 bytes */

extern
void setx();

extern 
void init();



#endif
