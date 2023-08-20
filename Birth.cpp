#include <bits/stdc++.h>
#include <io.h>
#include <fcntl.h>
#include <iostream>
#include <ctime>
#include <unistd.h>
using namespace std;

void text(char a[100])
{
    for (int i = 0; a[i] != 0; ++i)
    {
        for (double k = 0; k < 8990000; ++k)
            ;
        cout << a[i];
    }
}

void cake(char a[100])
{
    for (int i = 0; a[i] != 0; ++i)
    {
        for (double k = 0; k < 1000000; ++k)
            ;
        cout << a[i];
    }
}

void slide(char *a)
{
    for (int k = 0; k < 100; k++)
    {
        for (int i = 0; i < k; i++)
        {
            cout << " ";
        }
        cout << a;
        for (double j = 0; j < 1900000; j++)
            ;
        system("cls");
    }
}

int main()
{
    int seconds = 4;
    cout << "Ready?" << endl;
    while (seconds-- > 1)

    {
        cout << seconds << " ";
        usleep(1000000);
    }

    slide("     HAPPY BIRTHDAY     ");
    // text("I'll be there for the highs and lows");
    // cout << endl;
    // text("Give your mind if your heart gets broke");
    // cout << endl;
    // text("By your side when you're all alone");
    // cout << endl;
    // text("I'll be there");
    // cout << endl;
    // text("When your down, down on your luck");
    cout << endl;
    cake("            ________________            ");
    cout << endl;
    cake("     _,-*''`                `''*-,_     ");
    cout << endl;
    text(" _-*'             Buffalo          '*-_ ");
    cout << endl;
    text("((              19-09-2003            ))");
    cout << endl;
    cake("||-_                                _-||");
    cout << endl;
    cake("||  '*--,,,__________________,,,--*'  ||");
    cout << endl;
    cake("||                                    ||");
    cout << endl;
    text("(|   NO LUC - NGHIEM TUC - YEU DOI    |)");
    cout << endl;
    cake(" `-_                                _-` ");
    cout << endl;
    cake("    '*--,,,__________________,,,--*'    ");
    cout << endl;
    text("Happy Birthday To You!");
    cout << endl;
    text("Tro thanh mot nguoi tich cuc, doc duoc nhung ang van dui dang.");
    cout << endl;
    text("Gap go nhung nguoi tuyet voi nhu anh duong, trong mat tran ngap anh cuoi am ap.");
    cout << endl;
    text("No luc hon, tu te hon, nghiem tuc lam viec va thiet tha yeu doi");
    cout << endl;
    text("Thuan buom xuoi gio!");
    cout << endl;
    text("Finally, Your birthday is the first day of another 365-day journey. Be the shining thread in the beautiful tapestry of the world.");
    cout << endl;
    // text("Va hay nho, phai song that vui ve voi nhung thang ngay tuoi dep nhat cua cuoc doi sinh vien.");

    return 0;
}
