/*Write a program to receive Cartesian coordinates (x, y) 
of a point and convert them into polar coordinates (r, phy).
Hint: r = sqrt(x^x + y^y) and phy =tan^-1(y/x)*/

#include <stdio.h>
#include <math.h>
int main()
{
	float x,y,r,phy;
	printf("Enter x and y coordinates: ");
	scanf("%f%f",&x,&y);
	r=sqrt((x*x)+(y*y));
	phy=atan2(y,x);
	phy=phy*180/3.14;			//convert to degree
	printf("r=%.3f\tphy=%.3f\n",r,phy);
}
