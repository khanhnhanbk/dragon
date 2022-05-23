#pragma once
#include <bits/stdc++.h>
using namespace std;

class Rong
{
private:
    /* data */
protected:
    string ten;
    int capDo;
    int HP;
    int mucSatThuong;

public:
    Rong(/* args */);
    virtual void nhapThongTin();
    virtual void xuatThongTin();
    virtual int tinhSucSatThuong() = 0;
};
