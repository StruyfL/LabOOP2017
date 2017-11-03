/*
*	Lab assignment for Object Oriented Programming course 2017.
*
*	Lars Struyf - 2017
*/
#include "main.h"

int main(void)
{
	int login = 0;
	int choice = 0;

	cout << "Welcome to the Struyf Parcs management and booking software\n" << endl;

	login = LogIn();

	while (4 != login) {

		do {
			choice = menu(login);
		} while (4 != choice);

		login = LogIn();
	}

	cin.get();

	return 0;

}

int LogIn(void)
{
	int login = 0;

	cout << "Please login to continue:" << endl;
	cout << "1. Owner\n2. Employee\n3. Customer\n4. Exit" << endl << endl;

	while (!(cin >> login) || (5 < login || 0 > login)) {
		cout << "Wrong input" << endl;
		cin.clear(); //clear bad input flag
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // read rest of stream and ignore
	}

	return login;
}

int menu(int login)
{
	int choice = 0;
	int options = 0;
	int subMenu = 0;

	if (1 == login) {
		cout << "1. Park" << endl;
		cout << "2. Accommodations" << endl;
		cout << "3. Logout" << endl;
		options = 3;
	}
	else if (2 == login) {
		cout << "1. Customers" << endl;
		cout << "2. Bookings" << endl;
		cout << "3. Accommodations" << endl;
		cout << "4. Logout" << endl;
		options = 4;
	}
	else if (3 == login) {
		cout << "1. Account" << endl;
		cout << "2. Bookings" << endl;
		cout << "3. Logout" << endl;
		options = 3;
	}

	while (!(cin >> choice) || (options < choice || 0 > choice)) {
		cout << "Wrong input" << endl;
		cin.clear(); //clear bad input flag
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // read rest of stream and ignore
	}

	subMenu = 10 * login + choice;

	switch (subMenu) {
	case 11: SubPark(subMenu); break;
	case 12:
	case 23: SubAccommodations(subMenu); break;
	case 21:
	case 31: SubCustomers(subMenu); break;
	case 22:
	case 32: SubBookings(subMenu); break;
	default: break;
	}

	if (3 == options && 3 == choice) {
		return ++choice;
	}

	return choice;
}

void SubPark(int sub)
{
	// TODO: submenu for park functions
	int choice = 0;

	cout << "What do you want to do?" << endl;
	cout << "1. New park" << endl;
	cout << "2. Change park" << endl;
	cout << "3. Delete park" << endl;
	cout << "4. Go back" << endl;

	while (!(cin >> choice) || (5 < choice || 0 > choice)) {
		cout << "Wrong input" << endl;
		cin.clear(); //clear bad input flag
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // read rest of stream and ignore
	}

	switch (choice) {
	case 1: CreatePark(); break;
	case 2: ChangePark(); break;
	case 3: DeletePark(); break;
	default: break;
	}
}

void SubAccommodations(int sub)
{
	// TODO: submenu for accommodations
	int choice = 0;

	cout << "What do you want to do?" << endl;
	cout << "1. New park" << endl;
	cout << "2. Change park" << endl;
	cout << "3. Delete park" << endl;
	cout << "4. Go back" << endl;

	while (!(cin >> choice) || (5 < choice || 0 > choice)) {
		cout << "Wrong input" << endl;
		cin.clear(); //clear bad input flag
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // read rest of stream and ignore
	}

	switch (choice) {
	case 1: CreateAccommodation(); break;
	case 2: ChangeAccommodation(); break;
	case 3: DeleteAccommodation(); break;
	default: break;
	}
}

void SubCustomers(int sub)
{
	// TODO: submenu for customer accounts
	int choice = 0;

	cout << "What do you want to do?" << endl;
	cout << "1. New park" << endl;
	cout << "2. Change park" << endl;
	cout << "3. Delete park" << endl;
	cout << "4. Go back" << endl;

	while (!(cin >> choice) || (5 < choice || 0 > choice)) {
		cout << "Wrong input" << endl;
		cin.clear(); //clear bad input flag
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // read rest of stream and ignore
	}

	switch (choice) {
	case 1: CreateCustomer(); break;
	case 2: ChangeCustomer(); break;
	case 3: DeleteCustomer(); break;
	default: break;
	}
}

void SubBookings(int sub)
{
	// TODO: submenu for bookings
	int choice = 0;

	cout << "What do you want to do?" << endl;
	cout << "1. New booking" << endl;
	cout << "2. Change booking" << endl;

	if (22 == sub) {
		cout << "3. Delete booking" << endl;
		cout << "4. Go back" << endl;
	}
	else if (32 == sub) {
		cout << "3. Go back" << endl;
	}

	while (!(cin >> choice) || (5 < choice || 0 > choice)) {
		cout << "Wrong input" << endl;
		cin.clear(); //clear bad input flag
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // read rest of stream and ignore
	}

	switch (choice) {
	case 1: CreateBooking(); break;
	case 2: ChangeBooking(); break;
		if (22 == sub) {
	case 3: DeleteBooking(); break;
		}
	default: break;
	}
}
