#include<stdio.h>
main()
{
	int unit,elibill,sc,total;
	printf("Enter Electricity Unit=");
	scanf("%d",&unit);
	if(unit<=50)
	{
		elibill=unit*0.50;
	}
	else if(unit<=150)
	{
		elibill =(unit-50)*0.75+25;
	}
	else if(unit<=250)
	{
		elibill =(unit-150)*1.20+100;
	}
	else
	{
		elibill = (unit-250)*1.50+220;
	}
	
	printf("Elibill=%d\n",elibill);
	sc=elibill*20/100;
	total=elibill+sc;
	printf("Total Electricity Bill = %d",total);
}
