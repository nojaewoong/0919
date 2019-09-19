#include<stdio.h>
int main()
{
	int a,b;
	
	printf("첫번쨰정수를넣어요");
	scanf("%d",&a);
	printf("두번쨰정수를넣어요");
	scanf("%d",&b);
	
	printf("%d + %d =%d/n",a,b,(a+b));
	printf("%d - %d =%d/n",a,b,(a-b));
	printf("%d * %d =%d/n",a,b,(a*b));
	printf("%d / %d =%f/n",a,b,(float)(a/b));
	return 0;
	
}
