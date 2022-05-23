#include "RongLua.h"

RongLua::RongLua()
{
    this->HP = rand() % 10000 + 5000;
    this->mucSatThuong = rand() % 900 + 100;
}
void RongLua::nhapThongTin()
{

    cout << "Day la rong lua\n";
    Rong::nhapThongTin();
}
void RongLua::xuatThongTin()
{
    cout << "Day là rong lua\n";
    Rong::xuatThongTin();
}
int RongLua::tinhSucSatThuong()
{
    return mucSatThuong * 15;
}