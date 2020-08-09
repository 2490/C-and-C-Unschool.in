
#include <iostream>
#include<string.h>

struct employ
{
	char name[10][30];
	int id[5];
	int xp[5];
	float sal[5];
	
};

int main()
{ int i;
	struct employ s1;
	
	for(i=0;i<5;i++)
{

	printf(" \n Enter  the %d.Employe name -",i+1);
	scanf("%s",&s1.name[i]);
	
	printf(" \n Enter the  %d.Employee id-",i+1);
	scanf("%d",&s1.id[i] );
	
	printf(" \n Enter the  %d.Employee experince-" ,i+1);
	
	scanf("%d",&s1.xp[i]);
	printf(" \n Enter the  %d.Employee income-" ,i+1);
	scanf("%f" ,&s1.sal[i]);
}

	for(i=0;i<5;i++)
{ 
printf(" \nThe  %d.Employee  name is- %s", i+1,s1.name[i]);
printf("\nThe  %d.Employee id is-  %d",i+1,s1.id[i]);

printf(" \nThe %d.Employee experience is- %d",i+1,s1.xp[i]);

printf("\n The %d.Employee Salary is- %f",i+1,s1.sal[i]);

}

return 0;
}


	
	
	
