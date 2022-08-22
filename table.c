#include<stdio.h>
int main()
{
    int n;
    printf("Enter Number: ");
    scanf("%d",&n);
    int i=1;
    do
    {
       printf("%d\n",i*n);
       i++;
    } while (i<=10);
    
    
    return 0;
}