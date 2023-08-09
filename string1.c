#include<stdio.h>

void main()
{
    int x=2,y=3,*p,*q;

    p=&x;
    q=&y;
    p=q;

    printf("%d %d %d %d",x,y,*p,*q);

    *p=3;
    *q=4;
    x=y;
    printf("\n%d %d %d %d",*p,*q,x,y);

    getch();
}
