#include<stdio.h>

void main()
{
    int x=2,y=3,*r,*q;

    r=&x;
    q=&y;
    r=q;

    printf("%d %d %d %d",x,y,*r,*q);

    *r=3;
    *q=4;
    x=y;
    printf("\n%d %d %d %d",*r,*q,x,y);

    getch();
}
