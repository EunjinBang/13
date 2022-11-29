#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


#define MAX_NAME	20

struct student{
	int 	ID;
	char 	name[MAX_NAME];
	double 	grade;
};

int main(int argc, char *argv[]) {
	struct student s1 = {2012630, "EunjinBang", 4.3}; //instance

	s1.ID = 200000;
	strcpy(s1.name, "Sohee");
	s1.grade = 4.5;
	
	printf("ID : %i\n", s1.ID);
	printf("name : %s\n",s1.name);
	printf("grade : %lf\n", s1.grade); 
	
	return 0;
}
