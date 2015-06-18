#include "CSV_VARIABLES.h"

void create_menu()
{
    int c;
    c=create_key_menu();
    if(c)
    exit(0);
}
int create_key_menu()
{
   FILE *fp;
   int c,i=0;
   int n = 0;
   printf("Enter the csv file name:-");
   strcat(gets(file_name),".csv");
   fp = fopen(file_name,"rb");
   if(fp == NULL)
   {
      perror("Error in opening file");
      return(-1);
      exit(0);
   }
   do
   {
       c = fgetc(fp);
       if(feof(fp)||(c=='\n'))
        break;
      if(c ==',' )
      {
          key_data[i][n]='\0';
          i++;
          n=0;
          continue;
      }
      key_data[i][n++]=c;
   }while(!feof(fp));
   max_choice=i+1;
   printf("The keys are as follows\n");
   for(i=0;i<max_choice;++i)
   {
       printf("%d.",i+1);
       puts(key_data[i]);
   }
   printf("The total choice:-%d\n",max_choice);
   fclose(fp);
   return(0);
}

int display_file()
{
   FILE *fp;
   int c;
   int n = 0;

   fp = fopen(file_name,"r");
   if(fp == NULL)
   {
      perror("Error in opening file");
      return(-1);
   }
   do
   {
      c = fgetc(fp);
      if( feof(fp) )
      {
          break ;
      }
      printf("%c", c);
   }while(1);

   fclose(fp);
   return(0);
}

int get_data()
{
    int ctr=0;
    int i=0,j=0;
    char d[MAX];
    char b[MAX];
    FILE *fr;
    char *pch;
    fr=fopen(file_name,"rb");
    if(fr == NULL)
   {
      perror("Error in opening file");
      return(-1);
   }
   printf("Enter the key you want to search in:-\n");
    scanf("%d",&choice);
    fseek(fr,0,SEEK_SET);
while(!feof(fr))
{
fscanf(fr,"%[^\n]\n", d);
pch = strtok (d,",");
ctr=0;
  while (pch != NULL)
  {
      ctr++;
    strcpy(b,pch);
    if(ctr==choice)
        {
            a=insert(a,b);
            break;
        }
    pch = strtok (NULL,",");
  }
}
fclose(fr);
}
int get_data2()
{
    FILE *fp;
   int c,i=0,ctr=0;
   int n = 0;
   fp = fopen(file_name,"rb");
   if(fp == NULL)
   {
      perror("Error in opening file");
      return(-1);
   }
  while(!feof(fp))
   {
       c=fgetc(fp);
       if(c==',')
       {
           ctr++;
           if(ctr+1==choice)
           {
                while((c!=',')&&(c!='\n')&&(!feof(fp)))
                {
                    key_data[i][n++]=c;
                    c=fgetc(fp);
                }
            key_data[i][n]='\0';
            ++i;
            n=0;
            ctr++;
           }
       }
       if(c=='\n')
       ctr=0;
   }

   for(i=0;i<MAX;++i)
   {
       //printf("%d.",i+1);
       puts(key_data[i]);
   }
   fclose(fp);
}



