
//Функции сюда нужно вставить

int main() {
    setlocale(0, "");
    int CardNumber, inputPin;
    int attempts = 3;

    cout << "Добро пожаловать в банкомат!" << endl;
    cout << "Введите номер карты: ";
    cin >> CardNumber;
    for (int i = 0; i < attempts; i++) {



        cout << "Введите пин-код: ";
        cin >> inputPin;

        if (inputPin == pin) {
            cout << "Вход выполнен\n";
            break;
        }
        else {
            cout << "Неправильный  пин-код\n";
            if (i == attempts - 1) {
                cout << "Доступ к карте заблокирован\n";
                return 1;
            }
        }
    }


    int choice;
    while (true) {
        cout << endl;
        cout << "Выберите действие:" << endl;
        cout << "1. Снять наличные" << endl;
        cout << "2. Пополнить счет" << endl;
        cout << "3. Оплатить телефон" << endl;
        cout << "4. Проверить баланс" << endl;
        cout << "5. Выйти" << endl;
        cout << "Введите номер: ";
        cin >> choice;

        switch (choice) {
        case 1:
            balance = withdrawMoney(balance);
            break;
        case 2:
            balance = depositMoney(balance);
            break;
        case 3:
            char operatorChoice;
            cout << "Выберите оператора, введите английскую букву В или М (B - Билайн, M - МТС): ";
            cin >> operatorChoice;
            payPhone(balance, operatorChoice);
            break;
        case 4:
            cout << "Баланс: " << balance << " р" << endl;
            break;
        case 5:
            return 0;
        default:
            cout << "Некорректный выбор" << endl;
        }
    }

    return 0;
}
