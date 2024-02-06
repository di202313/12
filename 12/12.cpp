
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

        if ((CardNumber == cardNumber1 && inputPin == pin1) || (CardNumber == cardNumber2 && inputPin == pin2)) {
            cout << "Вход выполнен\n";
            break;
            if (CardNumber == cardNumber1) {
               
                balance1 = 30000; 
                break;
            }
            else {
                balance2 = 20000; 
                break;
            }
        }
        else {
            cout << "Неправильный  пин-код\n";
            if (i == attempts - 1) {
                cout << "Доступ к карте заблокирован\n";
                 break;
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
            balance1 = withdrawMoney(balance1);
            break;
            balance2 = withdrawMoney(balance2);
            break;
        case 2:
            balance1 = depositMoney(balance1);
            break;
            balance2 = depositMoney(balance2);
            break;
        case 3:
            char operatorChoice;
            cout << "Выберите оператора, введите английскую букву В или М (B - Билайн, M - МТС): ";
            cin >> operatorChoice;
            payPhone(balance1, operatorChoice);
            break;
            payPhone(balance2, operatorChoice);
            break;
        case 4:
            cout << "Баланс: " << balance1 << " р" << endl;
            break;
            cout << "Баланс: " << balance2 << " р" << endl;
            break;
        case 5:
            return 0;
        default:
            cout << "Некорректный выбор" << endl;
        }
    }
    return 0;
}
