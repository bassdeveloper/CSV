#include "CSV_VARIABLES.h" // For including CSV 
int display_file() // Function displays the input file records and returns 0 if successful and -1 if not.
{
   FILE *fp; 
   /* Declared the file pointer 'fp'.
    * A file pointer is a pointer to the structure of type file.
   */
   fp = fopen(file_name,"r"); 
/* Opening the file using function fopen() 
 * (Parameters -> 
 * 1. Filename (const char*) = file_name (global variable) 
 * 2. Mode of Access (const char*)= Here "r" -> Read mode.
 * )
 * and storing the resulting file pointer in fp.
 * fopen() function opens a stream for use and a file with that stream. 
 * Then it returns the file pointer associated with that file.
 * 
 * ****** FILE v/s a STREAM ******
 * 
*/
   if(fp == NULL) // Check if the file pointer returns NULL, enter the code block.
   {
      perror("Error in opening file"); 
      /* perror() -> Function print-error.
       * (Parameters -> 
       * 1. Error message (const char*)= [(const char*) doesn't allow the input parameter(char pointer -> string) to change]. 
       * */ 
      return(-1); // display_file() returns -> '-1', if the fp is NULL.
   }
		while(!feof(fp)) 
   /* while feof()[Function which checks whether the file pointer (fp) has reached the EOF (End of File) character. 
    * If yes, the function returns 1 if not, the function returns 0.] is not equal to 1
   */
		{
      printf("%c",fgetc(fp));
      /* fgetc() [Function returns the character pointed to by the file pointer ]. 
       * Printf() [Function prints the string provided as input and the variables provided as the type modifiers -> Here, %c denotes character ]
       */
		}

   fclose(fp);
/* Closes a filestream that was opened by the function fopen(). 
 * It writes any data still remaining in the disk buffer to the file and does a formal operating-system-level close on the file.
 * Failure to close a stream invites all kinds of trouble, including lost data, destroyed files, and possible intermittent errors in your program. 
 * fclose( ) also frees the file control block associated with the stream, making it available for reuse. 
 * Since there is a limit to the number of files you can have open at any one time, you may have to close one file before opening another.
 */
   return(0); // Returns a zero as a success case for the function display_file().
}

void create_menu()
{
    int c;
    s
    c=create_key_menu();
    if(c)
    exit(0);
}

int create_key_menu() 
{
   FILE *fp; // Declared file pointer 
   int c,i=0; //
   int n = 0;
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



