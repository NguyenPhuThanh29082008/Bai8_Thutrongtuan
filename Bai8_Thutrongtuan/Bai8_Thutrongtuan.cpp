// Bai8_Thutrongtuan.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main() {
int so;

cout << "Nhap so de nhan biet thu may: "; cin >> so;

switch (so) {
case 2:
    cout << "Thu hai\n";
    break;
case 3:
    cout << "Thu ba\n";
    break;
case 4:
    cout << "Thu tu\n";
    break;
case 5:
    cout << "Thu nam\n";
    break;
case 6:
    cout << "Thu sau\n";
    break;
case 7:
    cout << "Thu bay\n";
    break;
case 8:
    cout << "Chu nhat\n";
    break;

default :
        cout << "So nay khong thuoc cac ngay trong tuan\n";
    break;
 }


system("pause");
return 0;

}
