#include<stdio.h>
#include<string.h>
void Chinese(int mo)
{
    switch (mo)
    {
    case 0:printf("零"); break;
    case 1:printf("一"); break;
    case 2:printf("二"); break;
    case 3:printf("三"); break;
    case 4:printf("四"); break;
    case 5:printf("五"); break;
    case 6:printf("六"); break;
    case 7:printf("七"); break;
    case 8:printf("八"); break;
    case 9:printf("九"); break;
    case 10:printf("十"); break;
    }
}
void sum(int mon)
{
    int ge, shi;
    if (mon <= 10) Chinese(mon);
    else if (mon < 20)
    {
        ge = mon % 10;
        printf("十");
        Chinese(ge);
    }
    else
    {
        shi = mon / 10;
        ge = mon % 10;
        if (ge == 0)
        {
        	Chinese(shi);
            printf("十");
        }
        else
        {
            Chinese(shi);
            printf("十");
            Chinese(ge);
        }
    }
}
int main()
{
	int money;
	scanf("%d",&money);
	sum(money);
	return 0; 
}
