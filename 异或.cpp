#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,m,x;
    cin >> n;
    cin >> m;
    cin >> x;
    vector<int> num;
    num.resize(n);
    for (int i = 0; i < n ; i++ )
    {
        cin >> num[i];
    }
    int a, b;
    while(m --) {
        cin >> a;
        cin >> b;
        if(a >=1 && a < 3 && b >= 3)
        cout << "yes" << endl;
        else
        cout << "no" << endl;
    }
    return 0;
