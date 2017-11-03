#pragma once

// includes
#include <iostream>
using namespace std;

// Accomodations functions
void CreateAccommodation(void);
void ChangeAccommodation(void);
void DeleteAccommodation(void);

// Booking functions
void CreateBooking(void);
void ChangeBooking(void);
void DeleteBooking(void);

// Customer functions
void CreateCustomer(void);
void ChangeCustomer(void);
void DeleteCustomer(void);

// Park functions
void CreatePark(void);
void ChangePark(void);
void DeletePark(void);

// Helper functions
int LogIn(void);
int menu(int);
void SubPark(int);
void SubAccommodations(int);
void SubCustomers(int);
void SubBookings(int);