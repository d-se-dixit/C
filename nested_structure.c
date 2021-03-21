#include<stdio.h>
int main()
{
struct emp
{
char name[20];
int id;
int salary;
struct dob
{
int dd;
int mm;
int yy;
} d;
};
struct emp e1;
printf ("\n id : ");
scanf ("%d", &e1.id);
printf ("Enter dob :");
scanf ("%d %d %d", &e1.d.dd,&e1.d.mm,&e1.d.yy);
printf ("Enter Salary :");
scanf ("%d",&e1.salary);
printf ("\nEmployee id : %d",e1.id);
printf ("\t DOB is %d:%d:%d \t", e1.d.dd, e1.d.mm, e1.d.yy);
printf ("Salary : %d",e1.salary);
}
