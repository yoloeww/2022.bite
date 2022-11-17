# include <iostream>
#include <iterator>
using namespace std;
class Bank
{
    public:
    Bank(int num = 100,string name = "mutao",int money = 1000)
    {
        _num = num;
        _name = name;
        _money = money;
    }
    int GetMoney(int money);
    void Print();
    int ResMoney(int money);
    private:
    int _num;
    string _name;
    int _money;
};
