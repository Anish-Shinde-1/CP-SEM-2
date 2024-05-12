#include<stdio.h>

struct STUDENT {
	char name[20];
	int rollno;
	float phy;
	float chem;
	float math;
};

int main() {
	int n;
	printf("enter the number of students : ");
	scanf("%d", &n);
	struct STUDENT student[n];

	printf("Enter details of students : \n");
	for (int i = 0; i < n; i++)
	{
		printf("Student %d : \n", i+1);

		printf("Name : ");
		scanf("%19s", student[i].name);

		printf("Roll  number : ");
		scanf("%d", &student[i].rollno);

		printf("Marks in PHY : ");
		scanf("%f", &student[i].phy);

		printf("Marks in CHEM : ");
		scanf("%f", &student[i].chem);

		printf("Marks in MATH : ");
		scanf("%f", &student[i].math);
	}

	printf("\t STUDENT DETAILS\n");
	printf("NAME\tROLLNO\tPHY\tCHEM\tMATH\n");
	printf("-------------------------------------\n");

	for (int j = 0; j < n; j++)
	{
		printf("%s\t", student[j].name);
		printf("%d\t", student[j].rollno);
		printf("%.2f\t", student[j].phy);
		printf("%.2f\t", student[j].chem);
		printf("%.2f\n", student[j].math);

	}

	return 0;
}