#include<stdio.h>
int main()
{
     int x,y,z;
	printf("enter three numbers");
	scanf("%d%d%d",&x,&y,&z);
	if(x>y && x>z)
	{
		printf("the highest number is %d",x);
	}
    if(y>x && y>z)
    {
    printf("the highest number is %d",y);
}
if(z>x && z>y);
{
	printf("the highest number is %d",z);
}
}
