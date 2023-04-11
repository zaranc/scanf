#include<stdio.h>

main()
{
	int a,b, value ;
	printf("enter of value a");
	scanf("%d" ,&a);
	printf("enter of value b");
	scanf("%d" ,&b);
	
    value=a;
	a=b;
	b=value;
	printf("after swapping value of is a=%d \n",a);
    printf("after swapping value of is b=%d \n",b);
	
}
