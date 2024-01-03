#include<stdio.h>

enum day{
	mon,tue,wed,thu=23,fri,sat,sun
}; 

main()
{
	enum day;
	printf("monday = %d\n",mon);
	printf("tuesday = %d\n",tue);
	printf("wednesday = %d\n",wed);
	printf("thursday = %d\n",thu);
	printf("friday = %d\n",fri);
	printf("saturday = %d\n",sat);
	printf("sunday = %d\n",sun);
}