do
   {
       c = fgetc(fp);
      if((c ==',' ))
      {
          ctr++;
      }
      if(c=='\n')
      {
          ctr=0;
          continue;
      }
      if(ctr+1==choice)
      {
          while(c!=',')
          {
              key_data[i][n++]=c;
              c=fgetc(fp);
          }
          key_data[i][n]='\0';
          continue;
          ctr++;
          i++;
          n=0;
      }
   }while(!feof(fp));




   while(feof(fp))
   {
       c=fgetc(fp);
       if(c==',')
       {
           ctr++;
       }
       if(c=='\n')
       {
           ctr=0;
           continue;
       }
       if(choice==(ctr+1))
       {
           while((c!=',')&&(c!='\n'))
           {
               key_data[i][n++]=c;
               c=fgetc(fp);
           }
           key_data[i][n]='\0';
           ++i;
           n=0;
           continue;
           ctr++;
       }
   }



   c=fgetc(fp);
       if(c==',')
       {
           ctr++;
       }
       if(c=='\n')
       {
           ctr=0;
           continue;
       }
       if(choice==(ctr+1))
       {
           while((c!=',')&&(c!='\n'))
           {
               key_data[i][n++]=c;
               c=fgetc(fp);
           }
           key_data[i][n]='\0';
           ++i;
           n=0;
           continue;
           ctr++;






main()
{
    int x=5;
    char w[10];
    gets(w);
    b=insert(b,w);
    do
          {
    char v[10];
    gets(w);
    a=insert(b,w);
    x--;
          }while((x!=0));
    traverse(b);
        printf("\n%d",height(b));
}

 //t=makenode(250);
    /*a=insert(a,500);
    a=insert(a,250);
    a=insert(a,150);
    a=insert(a,10);*/
    //a=rotateright(a);
    //a=insert(a,256);
    //a=insert(a,300);
    //a=insert(a,289);
    //a=insert(a,312);
    //a=insert(a,303);
    //a=insert(a,325);
    //a=insert(a,320);
    //a=insert(a,350);
    //a=insert(a,299);
    //a=insert(a,300);

/*typedef struct node
{
    cha;
    struct node *left,*right;
    int height;
}node;*/

//index_data data[MAX];

/*t=makenode(345);
t=insert(t,345);
printf("%d",t->data);*/

typedef struct node* tree;
typedef struct node* tree;
