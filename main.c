#include <stdio.h>
#include <stdlib.h>

#define MAX_NAME	20

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct student{
	int ID;
	char name[10];
	double grade;
};

int main(int argc, char *argv[]) {
	struct student hstudent1={1003,"JuyeopKim",4.3};
	
	student1.ID=1020;
	strcpy(student1.name,"KimJuyeop");
	student1.grade=3.3;
	
	printf("ID:%i\n",student1.ID);
	printf("name:%s\n",student1.name);
	printf("grade:%1f",student1.grade);
	return 0;
}
