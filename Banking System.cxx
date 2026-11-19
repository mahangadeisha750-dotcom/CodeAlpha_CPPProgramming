
#include <iostream>
using namespace std;

int main()
{
    int choice;
    float balance = 1000, amount;

    do
    {
        cout << "\n===== BANKING SYSTEM =====";
        cout << "\n1. Check Balance";
        cout << "\n2. Deposit Money";
        cout << "\n3. Withdraw Money";
        cout << "\n4. Exit";

        cout << "\nEnter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "\nYour Balance is: Rs. " << balance;
                break;

            case 2:
                cout << "\nEnter amount to deposit: ";
                cin >> amount;

                if(amount > 0)
                {
                    balance = balance + amount;
                    cout << "Money Deposited Successfully!";
                }
                else
                {
                    cout << "Invalid Amount!";
                }
                break;

            case 3:
                cout << "\nEnter amount to withdraw: ";
                cin >> amount;

                if(amount > 0 && amount <= balance)
                {
                    balance = balance - amount;
                    cout << "Money Withdrawn Successfully!";
                }
                else
                {
                    cout << "Insufficient Balance or Invalid Amount!";
                }
                break;

            case 4:
                cout << "\nThank You for Using Our Bank!";
                break;

            default:
                cout << "\nInvalid Choice!";
        }

    } while(choice != 4);

    return 0;
}

