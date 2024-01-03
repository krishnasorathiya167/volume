#include<stdio.h>

struct students{
	int roll_no;
	char name[100];
	int chem;
	int maths;
	int phy;
		
};
main()
{
	int i;
	struct students s[5];
	int total,per;
	
	printf("-----Enter Students Details-----\n");
	
	for(i=0;i<5;i++)
	{
		printf("\nEnter Student Roll-No. = ");
		scanf("%d",&s[i].roll_no);
		printf("Enter Student Name = ");
		scanf("%s",&s[i].name);
		printf("Enter Student Chem-marks = ");
		scanf("%d",&s[i].chem);
		printf("Enter Student Maths-marks = ");
		scanf("%d",&s[i].maths);
		printf("Enter Student phy-marks = ");
		scanf("%d",&s[i].phy);	
	}
	
	printf("-----Students Details-----\n");
	for(i=0;i<5;i++)
	{
		total = s[i].chem + s[i].maths + s[i].phy;
		per = total/3;
		printf("Student Roll-no. = %d\n",s[i].roll_no);
		printf("Student Name = %s\n",s[i].name);
		printf("Student Chem-mark = %d\n",s[i].chem);
		printf("Student maths-mark = %d\n",s[i].maths);
		printf("Student phy-mark = %d\n",s[i].phy);
		printf("Student Percentage = %d\n\n",per);
	}
}