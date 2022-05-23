#include "Rong.h"

Rong::Rong()
{
    this->HP = rand() % 9000 + 1000;
    this->mucSatThuong = rand() % 1000 + 200;
}
void Rong::nhapThongTin()
{
    cout << "Ten rong: ";
    cin >> this->ten;
    cout << "level: ";
    cin >> this->capDo;
}
void Rong::xuatThongTin()
{
    cout << "Ten rong: " << this->ten << endl;
    cout << "Level: " << this->capDo << endl;
    cout << "HP: " << this->HP << endl;
    cout << "Muc sat thuong: " << this->mucSatThuong << endl;
}
