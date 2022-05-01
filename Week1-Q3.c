#include<stdio.h>
int main()
{
    printf("Enter any number:\n");
    int num;
    scanf("%d",&num);
    int n = num%2;
    switch (n)
    {
    case 0:
        printf("Even\n");
        break;
    default:
        printf("Odd\n");
        break;
    }
    return 0;
}