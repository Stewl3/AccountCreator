#include <iostream>
#include <string>

using namespace std;

int main() {

	cout << "1 - create account" << endl
		 << "2 - change password" << endl
		 << "3 - Quit" << endl
		 << "Select an option: ";
	short input;
	cin >> input;

	string username;
	string password;
	string oldPassword;
	string newPassword;
	string newPassword2;

	if (input == 1) {
		cout << "Username: ";
		cin >> username;
		cout << "Password: ";
		cin >> password;
		cout << "Account created! Thank you " << username << endl;
	}
	else if (input == 2) {
		cout << "Old password: ";
		cin >> oldPassword;
			cout << "New password: ";
			cin >> newPassword;
			cout << "Confirm new password: ";
			cin >> newPassword2;
			if (newPassword == newPassword2)
				cout << "Password Changed!" << endl;
			else
				cout << "Error: Passwords do not match!" << endl;
			
	}
	else
		cout << "Goodbye!";

return 0;
}





