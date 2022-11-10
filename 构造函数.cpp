class Time
{
public:
  ~Time()
  {
  cout << "~Time()" << endl;
  }
private:
  int _hour;
  int _minute;
  int _second;
};
class Date
{
   private:
   // 基本类型(内置类型)
   int _year = 1970;
   int _month = 1;
   int _day = 1;
   // 自定义类型
Time _t;
};
int main()
{
   Date d;
   return 0;
}
