#include<stdio.h>
#include<string.h>
void Chinese(int mo)
{
    switch (mo)
    {
    case 0:printf("��"); break;
    case 1:printf("һ"); break;
    case 2:printf("��"); break;
    case 3:printf("��"); break;
    case 4:printf("��"); break;
    case 5:printf("��"); break;
    case 6:printf("��"); break;
    case 7:printf("��"); break;
    case 8:printf("��"); break;
    case 9:printf("��"); break;
    case 10:printf("ʮ"); break;
    }
}
void sum(int mon)
{
    int ge, shi;
    if (mon <= 10) Chinese(mon);
    else if (mon < 20)
    {
        ge = mon % 10;
        printf("ʮ");
        Chinese(ge);
    }
    else
    {
        shi = mon / 10;
        ge = mon % 10;
        if (ge == 0)
        {
        	Chinese(shi);
            printf("ʮ");
        }
        else
        {
            Chinese(shi);
            printf("ʮ");
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
