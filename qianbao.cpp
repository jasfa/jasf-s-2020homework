#include<stdio.h>
#include<string.h>
int number(char d[])
{
    if (strcmp(d, "零") == 0) return 0;
    else if (strcmp(d, "一") == 0) return 1;
    else if (strcmp(d, "二") == 0) return 2;
    else if (strcmp(d, "三") == 0) return 3;
    else if (strcmp(d, "四") == 0) return 4;
    else if (strcmp(d, "五") == 0) return 5;
    else if (strcmp(d, "六") == 0) return 6;
    else if (strcmp(d, "七") == 0) return 7;
    else if (strcmp(d, "八") == 0) return 8;
    else if (strcmp(d, "九") == 0) return 9;
    else if (strcmp(d, "十") == 0) return 10;
}
int exchange(char d[])
{
	char ds[1000],dg[1000];
	if(strlen(d)==2) return number(d);//处理0-10
	else if(strlen(d)==4) 
	{
		dg[0]=d[2];dg[1]=d[3];//dg里存的是两位数里的个位 
		if(number(dg)!=10) return 10+number(dg);//处理11-19 
		else//处理10的倍数20，30，40，50，60，70，80，90 
		{
			ds[0]=d[0];ds[1]=d[1];//ds里存的是两位数中的十位
			return 10*number(ds);
		}
	}
	else if(strlen(d)==6)
	{
		ds[0]=d[0];ds[1]=d[1];//ds里存的是两位数中的十位
		dg[0]=d[4];dg[1]=d[5];//dg里存的是两位数里的个位 
		return 10*number(ds)+number(dg);
	}
}
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
	char a[1000], b[1000], c[1000], d[1000],be[1000],ce[1000],f[1000];
	scanf("%s %s %s %s", a, b, c, d);
    int m, money;
	if (strcmp(a, "整数")!=0) m = 1;
	for (int i = 1;m==0; i++)
	{
		if (i == 1) money = exchange(d);
        else
        {
            scanf("%s",be);
            if ( (strcmp(be, "看看")==0)) break;
            if((strcmp(be, b) != 0) && (strcmp(be, "看看") != 0)) continue; 
            scanf("%s %s", ce, f);
            if (strcmp(ce, "增加") == 0) 
			{
				money += exchange(f);
				//printf("%d\n",money);sum(money);printf("\n");
			}
            if (strcmp(ce, "减少") == 0) 
			{
				money -= exchange(f);
				//printf("%d\n",money);sum(money);printf("\n");
			}	
        }
	}
	//printf("%d\n",money);
    sum(money);
    return 0;
}
