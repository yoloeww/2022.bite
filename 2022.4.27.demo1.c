//1.字面常量
//2.const修饰的常变量 定义后不能改变了
# define N 100 //3.标识符常量
# define str "asdsa"
#include<stdio.h>
#include<string.h>
enum Color  //4.枚举常量
{
   RED,
   GREEN,
   BLUE
};
int main()
{
  const int a=10;//在c语言中，const修饰的a，本质是变量，但是不能直接修改，有常量的属性。
  printf("%d\n",a);
  printf("%s\n",str);
  enum Color b= RED;
  char ch='s'; //字符
  char ch1[23]="Asdaasd";//字符串，c语言中没有字符串类型
  char arr[]="asdsds"; //可以不限制长度
  printf("%d\n",strlen("qwer t"));//斜杠零不是长度
  printf("%d\n","c:\test\628\test.c");
  // c++注释风格
  /*  c语言风格 */
  //1.注释可以梳理 2.对复杂的代码进行解释 3.增加可读性，利人利己
  int input=0;
  if(input==1)
  {
      printf("好offer\n");
  }
  else
  {
      printf("buhao\n");
  }
  int line=0;
if(line<20000)
  {
    printf("写代码\n");
  }
else
  {
    printf("继续加油\n");
  }
return 0;
}