
# include<stdio.h> //std 标准 i 输入 o 输出
# include<string.h>
int main () //程序入口
{
    int i;
    for(i=0;i<10;i++)
    printf("%d\n",i);
    printf("hehe\n");
   
    printf("%d\n",sizeof(char));
    printf("%d\n",sizeof(short));
    printf("%d\n",sizeof(long)); //long>=int
    int a;
    scanf("%d",&a);
    return 0;


}