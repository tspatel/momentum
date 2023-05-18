#include<stdio.h>
main()
{
	int a,b,c,d;
	printf("enter value a =");
	scanf("%d",&a);
	printf("enter value b =");
	scanf("%d",&b);
	printf("enter value c =");
	scanf("%d",&c);
	printf("enter value d =");
	scanf("%d",&d);
	if(a>b)
	{   if(a>c)
		 {   if(a>d)
		 	{
		 	printf("max =%d",a);	
			}
			else
			{
				printf("max =%d",d);
			}
		 }	
		 else
		 {
		 	 if(c>d)
		 	{
		 	printf("max =%d",c);	
			}
			else
			{
				printf("max =%d",d);
			}
		 }
    }
    else
    {   if(b>c)
    	{  if(b>d)
            {   printf("max =%d",b);	
			}
			else
			{printf("max =%d",d);
			}
		}
		else
    	{  if(c>d)
            {   printf("max =%d",c);	
			}
			else
			{printf("max =%d",d);
			}
			
		}
    	
    }
    	
    	
    	
    	
    	
    	
    	
    	
    	
    	
    	
    	
    	
    	
	}
