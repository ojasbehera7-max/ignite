#include<stdio.h>
int main()
{
	float a,b,c,check;
	char op; // op ko char lena i forgot
	printf("Enter your 3 number  :");
	check = scanf("%f%f%f",&a,&b,&c);
		printf("Enter the operator among +,-,*,/   :");
		scanf(" %c" ,&op); // ya bad mai ayaga pehela nai
		// "%c" nai hoga because After entering the third number, you press Enter. %c reads that Enter/newline character instead of +, so switch reaches default
	// " c" space dena jaruri tha because tuna enter dabaya
	if (check != 3) 
	{
		printf("Not a intger \n");
		return 0;
	}

	else {
	switch(op){
	
	case '+':
	printf("ans = %f", a+b+c); //add = a+b+c nai hoga
	break;
	case '-':
	printf("ans = %f", a-b-c);	
	break;
	case'*':
	printf("ans = %f", a*b*c);
	break;
	case '/':
		if(b == 0 || c==0)
		
		printf("cannot divide with 0 buddy");
		
		else
		
		printf("ans = %.2f", a/b/c);
		break;
	default:
	printf("invaild operator \n");
	}
}
	

	
return 0;	

	
}
