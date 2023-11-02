#include<stdio.h>
#include<conio.h>
int Fact(int);
int main()
{
	int num,val;
	printf("Enter the number:");
	scanf("%d",&num);
	val=Fact(num);
	printf("factorial of %d = %d",num,val);
	return  0;
}
int Fact(int n)
{
	if(n == 1)
	     return 1;
	else 
	    return(n * Fact(n-1));
}
