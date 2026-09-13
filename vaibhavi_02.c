/*
program(2) write a program to make use of basoc input/output functions using different data types.
solution (2) user define values 
*/
#include<stdio.h>
int main()
{
    int rollnum;
    float per;
    char grade;
    printf("\n Enter student roll no:");
    scanf("%d",&rollnum);
    printf("\n enter student percentage:");
    scanf("%f",&per);
    printf("\n enter student grade:");
    scanf("%c",&grade);
 printf("\n student information");
    printf("\nroll numberis:%d",rollnum);
    printf("\n percentage is:%f",per);
    printf("\n grade:%c",grade);
    return 0;
}
