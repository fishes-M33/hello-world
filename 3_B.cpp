#include<stdio.h>
#include<math.h>//abs()
int main()
{int a[20],m,max=0,i,m1,m2;
scanf("%d",&m);
for(i=0;i<m;i++)
{scanf("%d",&a[i]);
}
for(i=m-1;i>=0;i--)
{m1=a[i];
if (abs(m1)>abs(max))
{max=a[i];
}
}
printf("%d",max);
return 0;
}
