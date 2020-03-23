#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void  main()
{
	int x;
	srand((unsigned)time(NULL));
	do{
		int h=rand()%1001;
		int g=rand()%1001;	
		int m;
		printf("%d+%d=",h,g);
		scanf("%d",&x);
		if(x==h+g)
		{
			printf("dui\n");
			m++;	
		}
		else	
		{
			printf("cuo\n");
		}
		printf("%d\n",m);
	}while(x!=1001);
}
