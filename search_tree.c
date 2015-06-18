#include "CSV_VARIABLES.h"

struct node *search(int key,struct node *temp)
{
	if(temp!=NULL)
	{
	 if(key==temp->data)
	 {
	 	printf("\n The element is present",temp->data);
	 	return temp;
	 }
	 else if(key<temp->data){
	   return search(key , temp->left);
	 }

	 else{
	 	return search(key,temp->right);
	 }
	}
    else
		return NULL;
}
