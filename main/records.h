// records.h
// CS 314 Group 7 
// Fall 2024
// Definitions for the data types that constitute user, provider, similar records

using namespace std;

#include <string>
#include <iostream>

// Address string lengths
const int ADDR_HOUSE_LEN = 25;
const int ADDR_CITY_LEN = 14;
const int ADDR_STATE_LEN = 2;
const int ADDR_ZIP_LEN = 5;

// generic user constants
const int USR_ID_MAX = 999999999; // restrain ID values to 9 digits
const int USR_NAME_LEN = 25;


// Contains the address data for a member or provider
typedef struct address_struct
{
    char house[ADDR_HOUSE_LEN];
    char city[ADDR_CITY_LEN];
    char state[ADDR_STATE_LEN];
    char zip[ADDR_ZIP_LEN];
} Address;

// Generic user record class.
class UserRecord
{

public:
    UserRecord(/* args */);
    ~UserRecord();

    unsigned int id; // the user's ID number.
    char name[USR_NAME_LEN];
    Address address;

    string string();
    int write(FILE fd);
};

class MemberRecord : public UserRecord {

public:
    MemberRecord(/* args */);
    ~MemberRecord();
};

UserRecord::UserRecord(/* args */)
{
}

UserRecord::~UserRecord()
{
}

// returns a string containing all data members in human-readable format. 
inline string UserRecord::string()
{
    return string();
}

// Writes the record to a file
// @param   fd  File designator that the record will be written to
// @return  Number of bytes written
inline int UserRecord::write(FILE fd)
{
    return 0;
}
