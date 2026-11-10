#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c;
	printf("Enter the  two sides  :");
	scanf("%f%f",&a,&b);
	c = sqrt((a*a)+(b*b));
	printf("The other side is  %f",c);
	return 0;
}
