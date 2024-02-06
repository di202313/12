#include <iostream>
using namespace std;

int cardNumber = 1234567890;
int pin = 1234;

float balance = 40000;

bool checkAmount(double amount) {
    if (amount < 5.0 || amount != (int)amount) {
        cout << "Введена неверная сумма" << endl;
        return false;
    }
    return true;
}

double withdrawMoney(double balance) {
    double amount;
    cout << "Введите сумму для снятия: ";
    cin >> amount;
    if (checkAmount(amount) && balance >= amount) {
        balance -= amount;
        cout << "Операция выполнена успешно" << endl;
    }
    else {
        cout << "Недостаточно средств или введена неверная сумма" << endl;
    }
    return balance;
}

double depositMoney(double balance) {
    double amount;
    cout << "Введите сумму для пополнения: ";
    cin >> amount;
    if (checkAmount(amount)) {
        balance += amount;
        cout << "Операция выполнена успешно" << endl;
    }
    else {
        cout << "Введена неверная сумма" << endl;
    }
    return balance;
}

void payPhone(float balance, char operatorCode) {
    float amount, commission;
    cout << "Введите сумму для оплаты телефона: ";
    cin >> amount;
    if (checkAmount(amount) && balance >= amount) {
        if (operatorCode == 'B') {
            commission = amount * 0.05;
        }
        else if (operatorCode == 'M') {
            commission = amount * 0.07;
        }
        else {
            cout << "Некорректный код оператора\n";
            return;
        }
        float totalPayment = amount + commission;
        balance -= totalPayment;
        cout << "Оплачено " << amount << " рублей. Комиссия: " << commission << " рублей. Остаток на счете: " << balance << " рублей\n";
    }
    else {
        cout << "Недостаточно средств или введена неверная сумма" << endl;
    }
}
