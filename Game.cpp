#include "Game.h"

Game::Game()
{
    rongs.clear();
    tongSatThuong = 0;
}
Game::~Game()
{
    for (int i = 0; i < rongs.size(); i++)
    {
        delete rongs[i];
    }
    rongs.clear();
}

void Game::them1ConRong()
{
    int loaiRong;
    cout << "Nhap loai rong: rong lua (1) hoac rong nuoc (2): ";
    cin >> loaiRong;
    switch (loaiRong)
    {
    case 1:
    {
        RongLua *rongLua = new RongLua();
        rongLua->nhapThongTin();
        rongs.push_back(rongLua);
        break;
    }
    case 2:
    {
        RongNuoc *rongNuoc = new RongNuoc();
        rongNuoc->nhapThongTin();
        rongs.push_back(rongNuoc);
        break;
    }
    default:
        break;
    }
    cout << "Da them 1 con rong\n";
    rongs[rongs.size() - 1]->xuatThongTin();
    tongSatThuong += rongs[rongs.size() - 1]->tinhSucSatThuong();
}

void Game::xuatTatCaRong()
{
    cout << "Danh sach gom co " << rongs.size() << " con rong :\n ";
    for (int i = 0; i < rongs.size(); i++)
    {
        rongs[i]->xuatThongTin();
    }
}

int Game::tinhTongSucSatThuong()
{
    // cout << "Tong suc sat thuong cua cac con rong la: " << tongSatThuong << endl;
    return tongSatThuong;
}