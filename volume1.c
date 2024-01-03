#include<stdio.h>

struct distance{
	int inch;
	int feet;
};
main()
{
	struct distance s;
	
	int i1,i2,f1,f2;
	
	printf("Enter First Value  \n");
	
	printf("Enter inch = ");
	scanf("%d",&i1);
	printf("Enter feet = ");
	scanf("%d",&f1);
	
	printf("Enter Second Value  \n");
	
	printf("Enter inch = ");
	scanf("%d",&i2);
	printf("Enter feet = ");
	scanf("%d",&f2);
	
	s.inch = i1 + i2;
	s.feet = f1 + f2;
	
	while(s.inch>=12)
	{
		if(s.inch>12)
		{
			s.inch = s.inch - 12;
			s.feet++;
		}
	}
	printf("Inch = %d\n",s.inch);
	printf("Feet = %d\n",s.feet);
	
}