#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void calc();

char array[50];

void calc(){

int i;
char array[50];	

printf("1.스케줄 입력\n2.스케줄 삭제\n3,스케줄 보기\n4.Main menu\n");
	printf("메뉴:");
	scanf("%d",&i);


	switch(i){
	case 1:
	printf("입력:\n");
gets(array);
printf("출력:%s\n",array);
printf("일정을 추가하였습니다");
	break ;

	case 2:
	break ;

 
/*	case 3:
	int year,dal,month;
	int months[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int total_day=0,total_1,total_2;
	int i;

	while(1)
	{
		total_1=0;
		total_2=1;
		printf("년,월");
		scanf("%d",&year);
		if(year==0)
		{
			break;
		}
		scanf("%d",&month);
		for(i=0;i<year-1;i++)
		{
			if((((i+1)%4)==0&&(((i+1)%100)!=0))||(((i+1)%400)==0 ))
				dal=366;
			else
			{
				dal=365;
			}
			total_1+=dal;
		}
		for(i=0;i<month-1;i++)
		{
			if(((year%4)==0((year%100!=0))||((year%400)==0)
						months[1]=29;
						else
						{
						months[1]=28;
						}	
						total_2+=months[i];
						}
						total_day=total_1+total_2;
						printf("\n");
						printf("           %d년%d월\n",year,month);
						printf("       ==============\n");
						printf("-----------------------------\n");
						printf("  sun mon tue wed thu fri sat\n");
						printf("-----------------------------\n");
						for(i=1;i<=(((total_day%7)%7));i++)
						printf("    ");
						for(i=1;i<=months[month-1];i++)
						{
						printf("%5d",i);
						if((i+(total_day%7))%7==0)
						printf("\n");
						}
						printf("\n");
						printf("\n");







*/

	}


}


int main(){

	calc();
	return 0;

}
