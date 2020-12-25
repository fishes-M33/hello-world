#include<stdio.h>
#include<stdlib.h>

int main()
{
   char table[21][31];//显示
   int num[20];//接收数字
   char sign[20];//接收符号
   int n,i,j;
   scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
        scanf("%c",&sign[i]);
    }
    int up=0,down=0;//表示x轴上方和下方各有多少行
    for(i=0;i<n;i++)                    //确定最大值和最小值 
    {
        if(num[i]>0&&up<num[i])
        {
            up=num[i];

        }
        else if(num[i]<=0&&down>num[i])
        {
            down=num[i];

        }
    }
    int row=up-down+1;//一共有的行数 

    for(j=0;j<n;j++)  //从第一个数开始 
    {
        if(num[j]>0)//如果大于零 
        {
            for(i=0;i<row;i++)//从第一行开始到最后一行 
            {
                if(i<up-num[j])//如果那一行还没有到有显示的那一行 
                {
                    table[i][j]=' ';//赋予空格 
                }
                else if(i<up&&i>=up-num[j])//如果到了有值的地方 ,判断是不是空的 
                {
                    if(sign[j]==' '||sign[j]=='\n')
                    {
                        table[i][j]='+';
                    }
                    else{
                        table[i][j]=sign[j];
                    }

                }
                else if(i==up)//如果到了x轴的地方 
                {
                    table[i][j]='-';
                }
                else//在x轴下方的位置 
                {
                    table[i][j]=' ';
                }
            }
        }
        else//如果这是个小于零的数 
        {
            for(i=0;i<row;i++)//从第一行开始 
            {

                if(i<up)//在轴上方 
                {
                    table[i][j]=' ';
                }
                else if(i==up)//x轴 
                {
                    table[i][j]='-';
                }
                else if(i>up&&i<=up-num[j])
                {
                    if(sign[j]==' '||sign[j]=='\n')
                    {
                        table[i][j]='+';
                    } else{
                        table[i][j]=sign[j];
                    }
                }
                else
                    {
                     table[i][j]=' ';

                }
            }

        }
    }


    for(i=0;i<row;i++)//从第一行开始 
    {
        if(i==up)//如果是到了x轴那一行 
        {
            for(j=0;j<n;j++)//从第一列开始 
            {
                if(j==n-1)//如果到了最后一列 就只打一个 
                {
                    printf("%c",table[i][j]);
                }
                else//如果没到就打两个 
                {
                    printf("%c-",table[i][j]);
                }

            }
        }
        else
        {
            for(j=0;j<n;j++)
            {
                printf("%c ",table[i][j]);
            }
        }
        printf("\n");
    }


    return 0;

}
