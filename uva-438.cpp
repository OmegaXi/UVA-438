#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#define pi 3.141592653589793

using namespace std;

double cal(double x1,double y1,double x2,double y2,double x3,double y3)
{
	double a,b,c,R;
	a=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
	b=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
	c=sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
	R=(a*b*c)/sqrt((a+b+c)*(a+b-c)*(a-b+c)*(-a+b+c));
	return 2*pi*R;
}

int main()
{
	double x1,x2,x3,y1,y2,y3;
	while(cin>>x1>>y1>>x2>>y2>>x3>>y3)
		printf("%.2f\n",cal(x1,y1,x2,y2,x3,y3));
    return 0;
}
