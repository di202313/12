
//Функции сюда нужно вставить

int main() {
    setlocale(0, "");

    int CardNumber, inputPin, currentCard;
    int attempts = 3;
    do {
        cout << " Добро пожаловать в банкомат !" << endl;
        cout << " Введите номер карты :";
        cin >> CardNumber;

        if (CardNumber == cardNumber1) {
            currentCard = 1;
        }
        else if (CardNumber == cardNumber2) {
            currentCard = 2;
        }
        else {
            cout << "Неверный номер карты!" << endl;
            continue;
        }

        inputPin = enterPin(CardNumber);

        if (inputPin == 1) {

            int choice;
            while (true) {
                cout << endl;
                cout << "Выберите действие:" << endl;
                cout << "1.Проверить баланс:" << endl;
                cout << "2. Снять наличные" << endl;
                cout << "3. Пополнить счет" << endl;
                cout << "4. Оплатить телефон" << endl;
                cout << "5. Выйти" << endl;
                cout << "Введите номер: ";
                cin >> choice;

                switch (choice) {
                case 1:
                    cout << balance1;
                    break;
                    cout << balance2;
                    break;
                case 2:
                    balance1 = withdrawMoney(balance1);
                    break;
                    balance2 = withdrawMoney(balance2);
                    break;
                case 3:
                    balance1 = depositMoney(balance1);
                    break;
                    balance2 = depositMoney(balance2);
                    break;
                case 4:
                    char operatorChoice;
                    cout << "Выберите оператора (B - Билайн, M - МТС): ";
                    cin >> operatorChoice;
                    payPhone(balance1, operatorChoice);
                    break;
                    payPhone(balance2, operatorChoice);
                    break;
                case 5:
                    return 0;
                default:
                    cout << "Некорректный выбор" << endl;
                }
            }
        }
    } while (true);
    return 0;
}
