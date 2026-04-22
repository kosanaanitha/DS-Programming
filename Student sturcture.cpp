#include<stdio.h>
#include<string.h>
struct student
{
	int rno;
	char name[10];
	float per;
} s1={101,"Anitha",8.89},s2;
int main()
{
	struct student s3={103,"Manasa",8.23};
	s2.rno=102;
	strcpy(s2.name,"Honey");
	s2.per=8.95;
	printf("Student Details are: ");
	printf("\n %d %s %f",s1.rno,s1.name,s1.per);
	printf("\n %d %s %f",s2.rno,s2.name,s2.per);
	printf("\n %d %s %f",s3.rno,s3.name,s3.per);
	return 0;
}
Output:
Student Details are:
101 Anitha 8.890000
102 Honey 8.950000
103 Manasa 8.230000
