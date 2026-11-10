#include<stdio.h>
int main()
{
	int n,o,rev=0,rem;
	printf("enter your number ");
	scanf("%d",&n);
	o=n;
	do{
		rem = n%10;
		rev = rev*10+rem;
		n = n/10;
	
	}
	while(n!=0);
	{
		if(0==rev){
			printf("%d if a palindrome number :",o);
		}
		else{
			printf("%d is a palindrome number  :", o);
		
		}
		}
		return 0;
	}
	
