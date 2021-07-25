#include<stdio.h>
int main()
{
	int num,num2,result;
//	printf("enter the value in num1 ");
//	scanf("%d",&num);
//	printf("enter the value in num2 ");
//	scanf("%d",&num2);
	printf("enter the value in \n num and num1 :\n");
	scanf("%d %d",&num,&num2);
//	result=num+num2;
	result=num%num2;
	printf("the sum of %d and %d is %d ",num,num2,result);
	return 0;
}
