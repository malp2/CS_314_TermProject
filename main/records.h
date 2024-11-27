// records.h
// CS 314 Group 7 
// Fall 2024
// Definitions for the data types that constitute user, provider, similar records

using namespace std;

#include <string.h>
#include <iostream>

// Address string lengths
const int ADDR_HOUSE_LEN = 25;
const int ADDR_CITY_LEN = 14;
const int ADDR_STATE_LEN = 2;
const int ADDR_ZIP_LEN = 5;

// generic user constants
const int USR_ID_MAX = 999999999; // restrain ID values to 9 digits
const int USR_NAME_LEN = 25;
