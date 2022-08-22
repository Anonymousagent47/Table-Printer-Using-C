#include<stdio.h>
int main()
{
    int n;
    printf("Enter Number: ");
    scanf("%d",&n);
    int i=1;
    while(i<=10){
        printf("%d",i*n);
        i++;
    }
    return 0;
}