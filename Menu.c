/* 
 * Created by Rishabh Chakrabarti. 
 * Mailto: rcscientist@gmail.com
 * 
#This program is free software: you can redistribute it and/or modify
#it under the terms of the GNU General Public License as published by
#the Free Software Foundation, either version 3 of the License, or
#(at your option) any later version.
#
#This program is distributed in the hope that it will be useful,
#but WITHOUT ANY WARRANTY; without even the implied warranty of
#MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
#GNU General Public License for more details.
#
#You should have received a copy of the GNU General Public License
#along with this program.  If not, see <http://www.gnu.org/licenses/>.
 * 
 * 
*/

#include "CSV_VARIABLES.h" // Includes all the headers,variables and data structures needed for the program and the included header files. 
#include "csv_read_functions.c" // Includes the File Read functions for the input CSV file
#include "create_tree.c" // Includes function for creating the AVL tree.
#include "search_tree.c" // Includes functions to search the created AVL tree.
#include "GraphX.c" // Inludes UI functions
int main()
{
	// Designing the Console Window:
    mainmax(); // Function used to maximize the Console Window
    system("COLOR 2"); // Changes the Console Window Colour to a different colour.  
    int c1; // Integer for first choice - Choice1
    maintime(); // Function to print current time on the Console.
    
	// Introduction printfs 
    printf("Welcome to our CSV handler\n Team:-\n1.Abhinay Kotha\n2.Aviral Aggarwal\n3.Rishabh Chakrabarti\n4.Shrey Kumar\n");
    
  //Initializing global file_name
		printf("Enter the csv file name:-");
    strcat(gets(file_name),".csv");
    
	// Menu choice:
		printf("\n\n\nMenu:-\n1.Display CSV file\n2.Search in CSV file");
    // Enter the choice : Input = Integer (Range:1-2).
    printf("\nEnter the choice:");
    fflush(stdin);
    scanf("%d",&c1);
    fflush(stdin);
    
    /* Initial Menu implemented by using switch-case, for choosing between 
     * 1. Displaying the original CSV input file -> 'Display CSV file'.
     * 2. Search the CSV file for a particular record and return the result -> ' Search CSV file '.
    */
    
    switch(c1) // Switch-case construct based on c1 ( Choice1 -> Integer) as input.
    {
        case 1 :
            display_file(); // If the choice is 1, the case calls upon the display function ( Described in the file -> csv_read_functions.c is called )
        case 2 :
                    create_menu(); // If the choice is 2, the create_menu() function ( Described in the file -> csv_read_functions.c is called )
                    get_data();
                    printf("Do you want to see the created tree?Press N to continue directly to the search.[Y\N]");
                    c2=getchar();
                    if((c2=='Y')||(c2=='y'))
                    display_tree();
        default :
        exit(0);

    }

}
