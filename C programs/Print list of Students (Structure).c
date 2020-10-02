#include<stdio.h>
#include<string.h>

typedef struct student{

  char name[25];
  char usn[15];
  float cgpa;
}S;

 int main()
 {
   int i,n;
   S s[70];
   printf("*********Enter student details************\n");
   printf("Enter number of students\n");
   scanf("%d", &n);
   for(i=0;i<n;i++)
   {
   printf("Enter name\n");
   scanf("%s", &s[i].name);
   printf("Enter USN\n");
   scanf("%s", &s[i].usn);
   printf("Enter CGPA\n");
   scanf("%f", &s[i].cgpa);
   }
   for(i=0;i<n;i++)
   {
   printf("********Student details******\n");
   printf("Name: %s\nUSN: %s\nCGPA: %f\n", s[i].name, s[i].usn, s[i].cgpa);
 }
 }
