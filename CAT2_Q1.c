/*
Evans Okoth Okumu
CT102/G/23443/24
*/

#include<stdio.h> 
#include<string.h> 

struct employee{
	char name[25];
        char dept[20];
        email [50];
	int id;
	float salary;
	
	
}employee1;

int main(){
	strcpy(employee1.name,"John Doe");
	strcpy(employee1.dept,"Human Resources");
	strcpy(employee1.email,"john.doe@company.com");
	employee1.id=12345;
	employee1.salary=55000.50;
	
	printf("Name:%s\n",employee1.name);
	printf("Department:%s\n",employee1.dept);
	printf("Email:%s\n",employee1.email);
	printf("Id No:%d\n",employee1.id);
	printf("Salary:%.2f\n",employee1.salary);
	
	
	
	return 0;
}
