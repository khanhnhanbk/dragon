#include "RongNuoc.h"

RongNuoc::RongNuoc()
{
    this->HP = rand() % 9000 + 1000;
    this->mucSatThuong = rand() % 1000 + 200;
}
void RongNuoc::nhapThongTin()
{

    cout << "Day la rong nuoc\n";
    Rong::nhapThongTin();
}
void RongNuoc::xuatThongTin()
{
    cout << "Day la rong nuoc\n";
    Rong::xuatThongTin();
}
int RongNuoc::tinhSucSatThuong()
{

    return mucSatThuong * 10;
}

RongNuoc::RongNuoc(RongNuoc &rongNuoc)
{
    this->ten = rongNuoc.ten;
    this->capDo = rongNuoc.capDo;
    this->HP = rongNuoc.HP;
    this->mucSatThuong = rongNuoc.mucSatThuong;
}
RongNuoc &RongNuoc::operator=(RongNuoc &rongNuoc)
{
    this->ten = rongNuoc.ten;
    this->capDo = rongNuoc.capDo;
    this->HP = rongNuoc.HP;
    this->mucSatThuong = rongNuoc.mucSatThuong;
    return *this;
}