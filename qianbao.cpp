#include<stdio.h>
#include<string.h>
int number(char d[])
{
    if (strcmp(d, "��") == 0) return 0;
    else if (strcmp(d, "һ") == 0) return 1;
    else if (strcmp(d, "��") == 0) return 2;
    else if (strcmp(d, "��") == 0) return 3;
    else if (strcmp(d, "��") == 0) return 4;
    else if (strcmp(d, "��") == 0) return 5;
    else if (strcmp(d, "��") == 0) return 6;
    else if (strcmp(d, "��") == 0) return 7;
    else if (strcmp(d, "��") == 0) return 8;
    else if (strcmp(d, "��") == 0) return 9;
    else if (strcmp(d, "ʮ") == 0) return 10;
}
int exchange(char d[])
{
	char ds[1000],dg[1000];
	if(strlen(d)==2) return number(d);//����0-10
	else if(strlen(d)==4) 
	{
		dg[0]=d[2];dg[1]=d[3];//dg��������λ����ĸ�λ 
		if(number(dg)!=10) return 10+number(dg);//����11-19 
		else//����10�ı���20��30��40��50��60��70��80��90 
		{
			ds[0]=d[0];ds[1]=d[1];//ds��������λ���е�ʮλ
			return 10*number(ds);
		}
	}
	else if(strlen(d)==6)
	{
		ds[0]=d[0];ds[1]=d[1];//ds��������λ���е�ʮλ
		dg[0]=d[4];dg[1]=d[5];//dg��������λ����ĸ�λ 
		return 10*number(ds)+number(dg);
	}
}
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
	char a[1000], b[1000], c[1000], d[1000],be[1000],ce[1000],f[1000];
	scanf("%s %s %s %s", a, b, c, d);
    int m, money;
	if (strcmp(a, "����")!=0) m = 1;
	for (int i = 1;m==0; i++)
	{
		if (i == 1) money = exchange(d);
        else
        {
            scanf("%s",be);
            if ( (strcmp(be, "����")==0)) break;
            if((strcmp(be, b) != 0) && (strcmp(be, "����") != 0)) continue; 
            scanf("%s %s", ce, f);
            if (strcmp(ce, "����") == 0) 
			{
				money += exchange(f);
				//printf("%d\n",money);sum(money);printf("\n");
			}
            if (strcmp(ce, "����") == 0) 
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
