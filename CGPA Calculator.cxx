
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string username, password;
    string loginUser, loginPass;

    cout << "===== REGISTRATION =====" << endl;

    cout << "Create Username: ";
    cin >> username;

    cout << "Create Password: ";
    cin >> password;

    cout << "\nRegistration Successful!" << endl;

    cout << "\n===== LOGIN =====" << endl;

    cout << "Enter Username: ";
    cin >> loginUser;

    cout << "Enter Password: ";
    cin >> loginPass;

    if(loginUser == username && loginPass == password)
    {
        cout << "\nLogin Successful!" << endl;
        cout << "Welcome, " << username << "!";
    }
    else
    {
        cout << "\nInvalid Username or Password!";
    }

    return 0;
}

