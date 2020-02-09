#include<stdio.h>
#include<string.h>

int zhs(char a[]){
	char list[11][10]={"零","一","二","三","四","五","六","七","八","九","十"};
    int i;
    for(i=0;i<11;i++){
        if(strcmp(list[i],a)==0){
            return i;
        }
    }
}

int num(char a[]){
	char b[10],c[10],d[10];
	b[0]=a[0];
	b[1]=a[1];
	b[2]='\0';
	c[0]=a[2];
	c[1]=a[3];
	c[2]='\0';
	d[0]=a[4];
	d[1]=a[5];
	d[2]='\0';
	if(strlen(a)==2)
		return zhs(a);
	else if(strlen(a)==4){
		if(zhs(b)!=0) 
			return 10+zhs(b);
		else if (zhs(b)==0) 
			return zhs(b)*10;
	}
	else if(strlen(a)==6){
			return zhs(d)*10+zhs(b);
	}
}

void num2(int a){
	int x,y;
	if(a == 0)
		printf("零");
	if(a%10 == 0)
	{
		switch(a/10){
			case 1:
				printf("十");break;
			case 2:
				printf("二十");break;
			case 3:
				printf("三十");break;
			case 4:
				printf("四十");break;
			case 5:
				printf("五十");break;
			case 6:
				printf("六十");break;
			case 7:
				printf("七十");break;
			case 8:
				printf("八十");break;
			case 9:
				printf("九十");break;
		}
	}
	else{
		x=a/10;
		y=a%10;
		switch(x){
			case 1:
				printf("十");break;
			case 2:
				printf("二十");break;
			case 3:
				printf("三十");break;
			case 4:
				printf("四十");break;
			case 5:
				printf("五十");break;
			case 6:
				printf("六十");break;
			case 7:
				printf("七十");break;
			case 8:
				printf("八十");break;
			case 9:
				printf("九十");break;
		}
		switch(y){
			case 1:
				printf("一");break;
			case 2:
				printf("二");break;
			case 3:
				printf("三");break;
			case 4:
				printf("四");break;
			case 5:
				printf("五");break;
			case 6:
				printf("六");break;
			case 7:
				printf("七");break;
			case 8:
				printf("八");break;
			case 9:
				printf("九");break;
		}
	
	}
}


int cal(int sum,char a[],char b[]){
    int x;
    x=num(b);
    if(strcmp(a,"增加")==0) 
		return sum+x;
    else if(strcmp(a,"减少")==0) 
		return sum-x;
}

int main(){
	int i,sum;
	char var[100],m1[100],m2[100],m3[100],m4[100];
	char n1[100],n2[100],n3[100];
	char p1[100],p2[100];
	char l1[100],l2[100],l3[100],l4[100],l5[100],l6[100],l7[100],l8[100],l9[100],l10[100];
	
	scanf("%s %s %s %s",m1,m2,m3,m4);
	sum=num(m4);
	while((scanf("%s",var))!=EOF){
		if(strcmp(var,m2)==0)
		{
			scanf("%s %s",n2,n3);
			if(strcmp(n2,"增加")==0)
			{
                sum=cal(sum,n2,n3);
            }
            else if(strcmp(n2,"减少")==0)
            {
                sum=cal(sum,n2,n3);
            } 
		}
		else if(strcmp(var,"看看")==0)
		{
			scanf("%s",p2);
			if(strcmp(p2,n2)==0)
				printf("%d",sum);
				num2(sum);
				printf("\n");
		}
		else if(strcmp(var,"如果")==0)
		{
			scanf("%s %s %s %s %s %s %s %s %s",l1,l2,l3,l4,l5,l6,l7,l8,l9);
			if(strcmp(l5,"看看")==0)
			{
				if(strcmp(l2,"大于")==0)
				{
					i=num(l3);
					if(sum>i)
						printf("%s\n",l6);
					else
						printf("%s\n",l9);
				}
				
			}
		}
	}
}
