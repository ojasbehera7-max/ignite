#include<stdio.h>
int main()
{
	int i,n,facto;
	printf("enter your number :");
	scanf("%d", &n);
	for(i=1;i<=n;i++){
		facto = facto * i;
	}
	printf("the factorial of the given value is - %d\n",facto);
	return 0;
}
