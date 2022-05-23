#include "./Rong.h"
#include "./RongNuoc.h"
#include "./RongLua.h"
#include "./Game.h"
void xuatMenu()
{
    system("pause");
    system("cls");
    cout << "1. Them 1 con rong\n";
    cout << "2. Xem tat ca con rong\n";
    cout << "3. Tinh tong suc sat thuong\n";
    cout << "4. Thoat\n";
}
int main()
{
    Game game;
    int chon;
    do
    {
        xuatMenu();
        cout << "Nhap lua chon: ";
        cin >> chon;
        switch (chon)
        {
        case 1:
            game.them1ConRong();
            break;
        case 2:
            game.xuatTatCaRong();
            break;
        case 3:
            cout << "Tong suc sat thuong cua cac con rong la: " << game.tinhTongSucSatThuong() << endl;
            // game.tinhTongSucSatThuong();
            break;
        case 4:
            break;
        default:
            break;
        }
    } while (chon != 4);

    return 0;
}