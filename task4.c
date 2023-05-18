#include<stdio.h>
main()
{
	char day;
	printf("enter day char(S,M,T,W,t,F,s) =");
	scanf("%c",&day);
	switch(day)
	{
		case'S':
		    printf("Sunday");
		    break;
		    
		case'M':
		    printf("Monday");
			break;
			
		case'T':
			printf("Tuesday");
			break;
		
		case'W':
			printf("Wednesday");
			break;
			
		case't':
			printf("thursday");
			break;
			
		case'F':
			printf("friday");
			break;
			
		case's':
			printf("saturday");
			break;	
		
		}	
}
