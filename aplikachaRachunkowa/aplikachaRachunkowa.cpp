#include <iostream>
#include "sell.cpp"
#include "advanced.cpp"

using namespace std;

double comission, pay;

void checkComission() {
    if (sell < 10000) {
        comission = 1.1;
    }
    else if (sell >= 10000 && sell < 15000) {
        comission = 1.12;
    }
    else if (sell >= 15000 && sell < 18000) {
        comission = 1.14;
    }
    else if (sell >= 18000 && sell < 22000) {
        comission = 1.16;
    }
    else if (sell >= 22000) {
        comission = 1.18;
    }
}

void checkPay() {
    pay = sell * comission - advanced;
    if (pay < 0) {
        cout << "Pracownik odda " << pay * -1 << "zł" << endl;
    }
    else if (pay > 0) {
        cout << "Pracownik dostanie " << pay << "zł" << endl;
    }
}

int main() {
    getAdvanced();
    getSell();
    checkComission();
    checkPay();
}