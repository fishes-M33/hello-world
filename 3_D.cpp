#include<stdio.h>
#include<stdlib.h>

int main()
{
   char table[21][31];//��ʾ
   int num[20];//��������
   char sign[20];//���շ���
   int n,i,j;
   scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
        scanf("%c",&sign[i]);
    }
    int up=0,down=0;//��ʾx���Ϸ����·����ж�����
    for(i=0;i<n;i++)                    //ȷ�����ֵ����Сֵ 
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
    int row=up-down+1;//һ���е����� 

    for(j=0;j<n;j++)  //�ӵ�һ������ʼ 
    {
        if(num[j]>0)//��������� 
        {
            for(i=0;i<row;i++)//�ӵ�һ�п�ʼ�����һ�� 
            {
                if(i<up-num[j])//�����һ�л�û�е�����ʾ����һ�� 
                {
                    table[i][j]=' ';//����ո� 
                }
                else if(i<up&&i>=up-num[j])//���������ֵ�ĵط� ,�ж��ǲ��ǿյ� 
                {
                    if(sign[j]==' '||sign[j]=='\n')
                    {
                        table[i][j]='+';
                    }
                    else{
                        table[i][j]=sign[j];
                    }

                }
                else if(i==up)//�������x��ĵط� 
                {
                    table[i][j]='-';
                }
                else//��x���·���λ�� 
                {
                    table[i][j]=' ';
                }
            }
        }
        else//������Ǹ�С������� 
        {
            for(i=0;i<row;i++)//�ӵ�һ�п�ʼ 
            {

                if(i<up)//�����Ϸ� 
                {
                    table[i][j]=' ';
                }
                else if(i==up)//x�� 
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


    for(i=0;i<row;i++)//�ӵ�һ�п�ʼ 
    {
        if(i==up)//����ǵ���x����һ�� 
        {
            for(j=0;j<n;j++)//�ӵ�һ�п�ʼ 
            {
                if(j==n-1)//����������һ�� ��ֻ��һ�� 
                {
                    printf("%c",table[i][j]);
                }
                else//���û���ʹ����� 
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
