#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void bf(int x,int y,int f_c,int b_c)
{
	int current;
	current=getpixel(x,y);
	if(current!=b_c && current!=f_c)
	{
		putpixel(x,y,f_c);
		bf(x,y+1,f_c,b_c);
		bf(x,y-1,f_c,b_c);
		bf(x+1,y,f_c,b_c);
		bf(x-1,y,f_c,b_c);
	}
}
void ff(int x1,int y1,int o_c,int n_c)
{
	int current;
	current=getpixel(x1,y1);
	if(current==o_c)
	{
		putpixel(x1,y1,n_c);
		ff(x1,y1+1,o_c,n_c);
		ff(x1,y1-1,o_c,n_c);
		ff(x1-1,y1,o_c,n_c);
		ff(x1+1,y1,o_c,n_c);
	}
}
void main()
{
	int gm,gd=DETECT,x,y,x1,y1,r;
	printf("Enter origin points for circle 1&2:\n");
	scanf("%d%d%d%d",&x,&y,&x1,&y1);
	printf("\nEnter radius:");
	scanf("%d",&r);
	initgraph(&gd,&gm,"..//bgi");
	circle(x,y,r);
	circle(x1,y1,r);
	bf(x,y,7,15);
	ff(x1,y1,0,6);
	getch();
	closegraph();
}


