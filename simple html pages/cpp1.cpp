#include<graphics.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd,&gm, (char*)"");
    circle(300,300,50);
    closegraph();
    return 0;
    
}
