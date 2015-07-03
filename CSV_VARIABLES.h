/* This file contains the declaration of all the GLOBAL VARIABLES used in the project
 * Purpose : To make the values have a global scope without having to implicitly declare a 
 * 
*/

#ifndef CSV_VARIABLES_H // #ifndef is a conditional compiler directive which instructs the compiler to perform the compilation of the set of 
#define CSV_VARIABLES_H

#include<stdio.h> // For the input/output functions used 
#include<stdlib.h> // Contains all functions and data structures for the FILE handling a
#include<strings.h> // Used for the 
#include<string.h>
//#include<Windows.h>
//#include<conio.h>

#define MAX 1000
char key_data[MAX][MAX];
int max_choice,choice=0;
char file_name[100];

struct node
{
  char data[MAX];
  struct node *left, *right;
  int height;
};
struct node  *n ;
struct node *a=NULL;
struct node *insert(struct node *,char * );
void traverse(struct node*);
int height(struct node*);
int getbalance(struct node*);
struct node *rotationcontroller(struct node *);
struct node *rotateleft(struct node *);
struct node *rotateright(struct node *);

#endif /* CSV_VARIABLES_H */

