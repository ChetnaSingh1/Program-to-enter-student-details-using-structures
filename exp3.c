#include<stdio.h>
#include<string.h>
struct student
{
char name[15];
long long int prn;
char branch[10];
}S[5];
int i;

void INPUT()
{
for(i=0;i<5;i++)
	{
	printf("\nEnter name ");
	scanf("%s",&S[i].name);
	printf("Enter prn ");
	scanf("%lld",&S[i].prn);
	printf("Enter branch ");
	scanf("%s",&S[i].branch);
    }
}
void OUTPUT()
{
for(i=0;i<5;i++)
{
printf("\nName %s",S[i].name);
printf("\nPRN %lld",S[i].prn);
printf("\nBranch %s",S[i].branch);
    }
}
main()
{
INPUT();
OUTPUT();
}

