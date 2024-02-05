#include <iostream>
using namespace std;

class Bankomat {

private:
    long long cardNumber;
    int pinCode;
    int balance;

public:
    Bankomat(long long card, int pin, int bal) : cardNumber(card), pinCode(pin), balance(bal) {}
    
    void login() {
        setlocale(0, "");
        long long inputCard;
        int inputPin;

        for (int i = 0; i < 3; i++) {
            cout << "Введите номер карты: ";
            cin >> inputCard;
            cout << "Введите pin-код: ";
            cin >> inputPin;

            if (inputCard == cardNumber && inputPin == pinCode) {
                cout << "Вход в систему успешен.\n";
                return;
            }
            else {
                cout << "Неверный номер карты или pin-код. Пожалуйста, попробуйте снова.\n";
            }
        }

        cout << "Ошибка входа. Доступ по этой карте запрещен\n";
    }

    void checkBalance() {
        setlocale(0, "");
        cout << "Ваш баланс равен: " << balance << "р\n";
    }

    void withdrawCash(int amount) {
        setlocale(0, "");
        if (amount % 5 != 0 || amount > balance) {
            cout << "Неверная сумма или недостаточно средств.\n";
        }
        else {
            balance -= amount;
            cout << "Успешно выведен: " << amount << "р\n";
        }
    }

    void depositCash(int amount) {
        setlocale(0, "");
        if (amount % 5 != 0) {
            cout << "Недопустимая сумма. Вносите депозит только в количестве, кратном 5р.\n";
        }
        else {
            balance += amount;
            cout << "Успешно депонирован: " << amount << "р\n";
        }
    }
};

int main() {
    Bankomat user1(123456789, 1234, 30000);

    user1.login();

    user1.checkBalance();

    user1.withdrawCash(10000);

    user1.depositCash(6000);

    return 0;
}
