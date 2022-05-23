#pragma once
#include "Rong.h"

class RongNuoc : public Rong
{
public:
    RongNuoc();
    RongNuoc(RongNuoc &rongNuoc);            // cai dat mac dinh
    RongNuoc &operator=(RongNuoc &rongNuoc); // copy lop
    virtual void nhapThongTin();
    virtual void xuatThongTin();
    virtual int tinhSucSatThuong();
};
