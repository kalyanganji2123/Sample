#include<stdio.h>
#include<stdlib.h>
void Swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
    printf("After swapping : %d %d",*x,*y);
}
int main()
{
    int a,b;
    printf("Enter numbers to swap: \n");
    scanf("%d %d",&a,&b);
    Swap(&a,&b);
}
