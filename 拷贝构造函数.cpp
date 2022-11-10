class Date
{
public:
Date(int year = 1900, int month = 1, int day = 1)
{
   _year = year;
   _month = month;
   _day = day;
}
// Date(const Date& d)   // 正确写法
   Date(const Date d)   // 错误写法：编译报错，会引发无穷递归
{
   _year = d._year;
   _month = d._month;
   _day = d._day;
}
private:
    int _year;
    int _month;
    int _day;
};
int main()
{
    Date d1;
    Date d2(d1);  //用d1构造d2
    return 0;
}
