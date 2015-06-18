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
