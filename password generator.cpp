#include <iostream>
#include <string>
#include <ctime>
#include<windows.h>
//#include<conio.h>
//#include<iomanip>
using namespace std;
// Function to generate a random password
string generate_password(int length, bool include_uppercase, bool include_numbers, bool include_symbols) {
    string password = "";
    string lowercase_letters = "abcdefghijklmnopqrstuvwxyz";
    string uppercase_letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string numbers = "0123456789";
    string symbols = "!@#$%^&*()_+-=";         
    string characters = lowercase_letters;
    if (include_uppercase) {
        characters += uppercase_letters;
    }
    if (include_numbers) {
        characters += numbers;
    }
    if (include_symbols) {
        characters += symbols;
    }
    srand(time(0));
    for (int i = 0; i < length; i++) {
        int random_index = rand() % characters.length();
        password += characters[random_index];
    }
    return password;
}
int main() {

		cout<<"\t \t \t \t THIS ";
		Sleep(500);
		cout<<" PROGRAM ";
		Sleep(500);
		cout<<" IS ";
		Sleep(500);
		cout<<" CREATED ";
		Sleep(500);
		cout<<" BY ";
		Sleep(500);
		cout<<" MUHAMMAD SAIF ";
		Sleep(500);
		cout<<" !";
		Sleep(500);
		cout<<" !";
		Sleep(500);
	cout<<endl;
	system("CLS");
	system("color 9F");    //9 for lightblue background F for white text
	cout<<"Please wait";
	Sleep(1000);
	for (int i = 0; i < 6; i++) {
        cout << ".";
        Sleep(700); 
    }
    cout << endl;
    system("CLS");
    cout<<"system has started running in background don't close the program:";
	Sleep(5000);
	cout<<endl;
	system("CLS");
    int length;
    bool include_uppercase, include_numbers, include_symbols;
    cout << "Enter the desired password length: ";
    cin >> length;
    cout << "Include uppercase letters? (0 or 1): ";
    cin >> include_uppercase;
    cout << "Include numbers? (0 or 1): ";
    cin >> include_numbers;
    cout << "Include symbols? (0 or 1): ";
    cin >> include_symbols;
    string password = generate_password(length, include_uppercase, include_numbers, include_symbols);
    cout << "Generated password: " << password << endl;
    return 0;
}

