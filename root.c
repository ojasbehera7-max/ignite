#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,d;
	printf(" enter your number ");
	scanf("%d%d%d",&a,&b,&c);
	
	d =b*b-4*a*c;
	if(d>0){ 
	int root1 = (-b+sqrt(d))/2*a;
	int root2 = (-b-sqrt(d))/2*a;
	printf("root 1 is %d\n",root1);
	printf("root 2 is %d\n",root2);
	
	
	
	
}
	else if(d==0){
		printf(" both root are same\n");
		int root = -b/2*a;
		printf("the root is %d",root);
		
	}
	else{
	printf(" The root is not real\n");
	float real = -b/2*a;
	float img = sqrt(d)/2*a;
	printf("the real complex number is %f and the img is %f",real,img);
	}

return 0;
	
	
	
	
}
