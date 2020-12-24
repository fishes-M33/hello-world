//×Ö·û´®ÒÆÎ» 
#include<stdio.h>
#include<string.h>
int main()
{char str[200],b[200];
int M,i,l,k;
scanf("%d\n",&M);
fgets(str,200,stdin);
l = strlen(str);
for (i=0;i<M;i++)
{
b[i]=str[l-M-1+i];
}
l = strlen(str);
for(k=0;k<l-M;k++)
{b[i]=str[k];
i++;
} 
for (i=0;i<l-1;i++)
printf("%c",b[i]);	
return 0;
}
