#include "CSV_VARIABLES.h"
struct node *makenode( char* d )
 {
  struct node *t;
  t=(struct node *)malloc(sizeof(struct node));
  strcpy(t->data,d);
  t->height=1;
  t->left=NULL;
  t->right=NULL;
 }
struct node *insert(struct node *r,char * d)
{
    if(!r)
       {
       r=makenode(d);
       return r;
       //a=rotationcontroller(a);
       }

     if(strcmp(d,r->data)<0)
       {
           r->left=insert(r->left,d);
       }
     if(strcmp(d,r->data)>0)
       {
           r->right=insert(r->right,d);

       }

    return r;
}
void display_tree()
{
    traverse(a);
printf("\nThe height of the tree is %d",height(a));
printf("\nThe balance of the tree is %d",getbalance(a));
}

void traverse(struct node*r)
{
      if(r!=NULL)
      {
          printf("%s\n",r->data);
          traverse(r->left);
          traverse(r->right);
      }
}

int height(struct node* node)
{
   if (node==NULL)
       return 0;

   else
   {
       int lDepth = height(node->left);
       int rDepth = height(node->right);
       if (lDepth > rDepth)
           return(lDepth+1);
       else return(rDepth+1);
   }
}

int getbalance(struct node *n)
{
  return height(n->left)-height(n->right);
}

/*struct node *rotateleft(struct node *r) {
  struct node *s;
  if(!r) return NULL;
  s=r->right;
  r->right=s->left;
  s->left=r;*/

/*struct node *rotationcontroller(struct node *n)
{
    int x=0,y=0,z=0;
    x=getbalance(n);
    if(x>1)
    {
        y=getbalance(n->left);
        if(y<0)
        {
            printf("test");
            //n=doublerotateright(n);
        }
        else
           a=rotateright(a);
    }
    else if(x<-1)
    {
        z=getbalance(n->right);
        if(z>0)
            printf("SExy");//n=doublerotateleft(n);
        else
          a=rotateleft(a);
    }
}*/
  //r->height=max(height(r->left),height(r->right))+1;
  //s->height=max(height(s->left),height(s->right))+1;

 // return s;
//}
/*int max(struct node *t,struct node *t1)
{

    if(t->ht>t1->ht)

}
struct node *rotateright(struct node *c) {
    printf("reached");
  struct node *b;

  b=c->left;
  c->left=b->right;
  b->right=c;


  // height of c and b might be affected
 // b->height=max(height(b->left),height(b->right))+1;
  //c->height=max(height(c->left),height(c->right))+1;

  return b;
}*/

