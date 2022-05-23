#pragma once
#include <bits/stdc++.h>
#include "Rong.h"
#include "RongLua.h"
#include "RongNuoc.h"

using namespace std;

class Game
{
private:
    vector<Rong *> rongs;
    int tongSatThuong;

public:
    Game(/* args */);
    ~Game();
    void them1ConRong();
    void xuatTatCaRong();
    int tinhTongSucSatThuong();
};
