#include<stdio.h>
struct address{
	int hno;
	char street[20],city[20];
};
struct student{
	int rollnumber;
	char name[30],branch[20];
	float marks;
	struct adress add;
	
};
int main(){
	struct student s1,s2;
	printf("Enter roll number");
	scanf("%d", &s1,rollnumber);
	fflush(stdin);
	printf("Enter name :");
	gets(s1.name);
	printf("Enter branch");
	gets(s1.branch);
	printf("Enter marks ");
	scanf("%f",&s1.marks);
	
	
}
