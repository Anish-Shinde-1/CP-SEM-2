#include <stdio.h>

#define PLAYERS 1

struct MI
{
    char name[20];
    int age;
    int matches;
    int runs;
    float avg;
};

struct Employee
{
    int code;
    char name[20];
    int salary;
    char date[10];
};

struct Student
{
    char name[20];
    int rollno;
    float phy;
    float chem;
    float math;
    float total;
    float percent;
}

main()
{
    struct Student student[5];
    struct Student temp;

    for (int i = 0; i < 5; i++)
    {
        printf("Enter the details of Student %d : \n", i + 1);

        printf("Name : ");
        scanf("%19s", student[i].name);

        printf("Roll no. : ");
        scanf("%d", &student[i].rollno);

        printf("Phy : ");
        scanf("%f", &student[i].phy);

        printf("Chem : ");
        scanf("%f", &student[i].chem);

        printf("Math : ");
        scanf("%f", &student[i].math);

        student[i].total = student[i].phy + student[i].chem + student[i].math;

        student[i].percent = (student[i].total) / (3.00);
    }

    for (int i = 0; i < 5 - 1; i++)
    {
        for (int j = 0; j < 5 - i - 1; j++)
        {
            if (student[j].percent < student[j + 1].percent)
            {
                temp = student[j];
                student[j] = student[j + 1];
                student[j + 1] = temp;
            }
        }
    }

    printf("Student Details : \n\n");
    printf("Name\t\tRoll no.\tPhy\tChem\tMath\tTotal\tPercentage\n");
    printf("-----------------------------------------------------------------\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%s\t%d\t%.0f\t%.0f\t%.0f\t%.0f\t%.2f\n",
               student[i].name,
               student[i].rollno,
               student[i].phy,
               student[i].chem,
               student[i].math,
               student[i].total,
               student[i].percent);
    }
}

// int main()
// {
//     struct Employee emp[10];

//     for (int i = 0; i < 1; i++)
//     {
//         printf("Enter the details of employee %d : \n", i + 1);

//         printf("Code : ");
//         scanf("%d", &emp[i].code);

//         printf("Name : ");
//         scanf("%19s", emp[i].name);

//         printf("Salary : ");
//         scanf("%d", &emp[i].salary);
//         getchar();

//         printf("Date of Joining : ");
//         scanf("%s", emp[i].date);
//     }

//     printf("Player Details : \n\n");
//     printf("Code\tName\t\tSalary\t\tJoined On\t\n");
//     printf("-----------------------------------------------------\n");

//     for (int i = 0; i < 1; i++)
//     {
//         printf("%d\t%s\t%d\t\t%s\t\n",
//                emp[i].code,
//                emp[i].name,
//                emp[i].salary,
//                emp[i].date);
//     }
// }

// int main()
// {
//     struct MI player[PLAYERS];

//     for (int i = 0; i < PLAYERS; i++)
//     {
//         printf("Enter the details of player %d : \n", i + 1);

//         printf("Name : ");
//         scanf("%19s", player[i].name);

//         printf("Age : ");
//         scanf("%d", &player[i].age);

//         printf("Matches PLayed : ");
//         scanf("%d", &player[i].matches);

//         printf("Total Runs : ");
//         scanf("%d", &player[i].runs);

//         player[i].avg = ((float)player[i].runs) / player[i].matches;
//     }

//     printf("Player Details : \n\n");
//     printf("Name\t\tAge\tMatches\t\tRuns\tAverage\t\n");
//     printf("-----------------------------------------------------\n");

//     for (int i = 0; i < PLAYERS; i++)
//     {
//         printf("%s\t%d\t%d\t\t%d\t%f\t\n",
//                player[i].name,
//                player[i].age,
//                player[i].matches,
//                player[i].runs,
//                player[i].avg);
//     }
// }
