#include"delete.h"
#define S 10
void delete_employee_details()
{
	extern node *head;
	node *temp=head;
	char id[S],option;
	int res;
	printf("Enter the Employee ID to be Deleted\n");
	scanf("%s",id);
	if(strlen(id)==7)
	{
		while(temp->id!=id && temp!=NULL)
		{
			temp=temp->next;//Traversing
		}
		res=strcmp(temp->status,"Active");
		if(res!=0)
		{
			printf("Confirm To Delete\ny or n\n");
			scanf("%c",&option);
			if(option=='y'||'Y')
			{
				strcpy(temp->status,"Resignation");
				printf("%s is Deleted\n",temp->id)
			}
			else
			{
				printf("Enter Correct Option\n");
			}
		}
		else
		{
			printf("\n Entered ID is Already Resigned\n");
		}
	}
	else
		printf("Enter Correct ID\n");
		return;
}
