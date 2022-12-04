#include<stdio.h>
#include<graphics.h>
int main()
{
    int gd=0,gm;
    initgraph(&gd,&gm,"");
    circle(100,80,10);
    closegraph();
    return 0;
}