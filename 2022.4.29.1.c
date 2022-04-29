# define ADD(x,y) ((x)+(yv))
int main()
{
   static int a ; //修饰局部变量 1.static修饰局部变量的时候，
              // 局部变量出了作用域，不销毁，本质上改变了变量的存储位置。
   extern int g_val;
   // static修饰全局变量的时候，这个全局变量的外部链接属性变成了内部链接属性，
   //其他源文件不能使用
   //函数也有外部链接属性
   register int num=3; //建议：存放在寄存器中


}
