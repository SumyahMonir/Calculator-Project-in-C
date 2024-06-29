#include <stdio.h>
void cal (char);
int main () {
    char st;
    printf ("                                                Welcome to FSM Calculator!\n\n                                                     How to use:\nEnter only two operands equation (for example: 5+5) then continue by entering rest operator and operand with solution one after one (for example: =solution-8 [enter] =solution*4).\n\nYou can use the operators +,-,*,/ \n\n");
    printf("Do you want to start?\t[Enter Y if YES! or N if No!]\n");
    scanf ("%c",&st);
    if (st=='y' || st=='Y')
    {
         system("cls");
        printf("\n\n\n\n\n\n");
        cal(st);
    }
    system("cls");
printf("\n\n\n\n\n\n\t\t\t\t\t    Thank You for using our Calculator!!\n\n\n\n\n\n\n\n");
return 0;}
void cal (char h)
{
    int i,st;
    float s,f,solution;
    char o,ex;
      printf ("Write the Equation:\t\t[Type 'AC' when you want to Exit]\n");
    scanf ("%f%c%f",&f,&o,&s);
    switch (o)
    {
    case '+':
        solution = f + s;
        break;
    case '-':
        solution = f - s;
        break;
    case '/':
        solution = f / s;
        break;
    case '*':
        solution = f * s;
        break;
    }
 printf ("=%.2f ",solution);
    for (i=0;i<20;i++)
    {
        scanf (" %c%f",&o,&s);
        if (o=='+' || o=='-' || o=='*' || o=='/')
        {
           switch (o)

    {
    case '+':
        solution = solution + s;
        break;
    case '-':
        solution = solution - s;
        break;
    case '/':
        solution = solution / s;
        break;
    case '*':
        solution = solution * s;
        break;
    }
 printf ("=%.2f ",solution);
        }
        else
        {
            i=20;
            scanf("%c",&ex);
            scanf("%c",&ex);
        }
    }
    printf("-------------------------------------------------\n");
    printf ("Do you want to start over again?\t[Enter Y if YES! or N if NO!]\n");
    scanf ("%c",&st);
    if (st=='y' || st=='Y')
    {
        system("cls");
        printf("\n\n\n\n\n\n");
        cal(st);
    }
}




//Submitted by :
//Sumyah Monir Mithy - C233477
//Sayma Jerin - C233494
//Fawzia Tasnim - C33497

