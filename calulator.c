#include<stdio.h>
int main()
{
    int a,b, Choice;
    int add, sub, multi, div, rem;
    printf("Enter your choice :- 1.ADDITION, 2.SUBSTRACTION, 3.MULTIPLICATION, 4.DIVISION : ");
    scanf("%d", &Choice);
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("enter second number: ");
    scanf("%d", &b);

    if (Choice == 1)
    {
        add=a+b;
        printf("The addition is : %d ", add);
    } else if (Choice == 2)
    {
       sub=a-b;
       printf("The substraction is : %d", sub);
    } else if (Choice == 3)
    {
       multi=a*b;
       printf("The multiplication is : %d", multi);
    }else if (Choice == 4)
    {
       div=a/b;
       printf("The division is : %d", div);
    }else if (Choice== 5)
    {
       rem=a%b;
       printf("The remainder is : %d", rem)
    }else{
        printf("INVALID CHOICE")
    }
     return 0;

}
