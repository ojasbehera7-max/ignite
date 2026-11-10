#include<stdio.h>
int main()
{
	char ch;
	printf("enter the alphabet ");
	scanf("%c",&ch);
	if(ch >= 'a'&& ch<= 'z'){
	
	if( ch=='a' || ch=='e'  || ch== 'i' || ch =='o'  || ch == 'u')
	{
		printf(" %c is a vowel",ch);
	}
	else{
		printf("%c is a consulant ", ch);
	}
	
		
	}
	else{
		printf("%c is a uppercase ",ch);
	}
	return 0;
	
	
}
