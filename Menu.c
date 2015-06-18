#include "CSV_VARIABLES.H"
#include "csv_read_functions.c"
#include "create_tree.c"
#include "search_tree.c"
#include "GraphX.c"
int main()
{
    mainmax();
    system("COLOR 2");
    int c1;
    char c2;
    maintime();
    printf("Welcome to our CSV handler\n Team:- \n1.Abhinay Kotha\n2.Aviral Aggarwal\n3.Rishabh Chakrabarti\n4.Shrey Kumar\n");
    printf("\n\n\nMenu:-\n1.Display CSV file\n2.Search in CSV file");
    printf("\nEnter the choice:");
    fflush(stdin);
    scanf("%d",&c1);
    fflush(stdin);
    switch(c1)
    {
        case 1 :
            display_file();
        case 2 :
                    create_menu();
                    get_data();
                    printf("Do you want to see the created tree?Press N to continue directly to the search.[Y\N]");
                    c2=getchar();
                    if((c2=='Y')||(c2=='y'))
                    display_tree();
        default :
        exit(0);

    }

}
