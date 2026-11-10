#include<stdio.h>
int main()
{
	int n,o,rev,sum=0;
	printf("Enter your number");
	scanf("%d",&n);
	o=n;
	do{
		rev = n%10;
		sum = sum+rev*rev*rev;
		n=n/10;
		
		
	}
	while(n!=0);
	if(sum = sum){
		printf("%d is a armstrong",o);
	}
	else{
		printf("%d is not a armstrong",o);
		
	}
	return 0;
	
	

}
