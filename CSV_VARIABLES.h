#ifndef CSV_VARIABLES_H
#define CSV_VARIABLES_H
#include<Windows.h>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<strings.h>
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

