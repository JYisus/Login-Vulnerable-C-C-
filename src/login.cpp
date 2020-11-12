#include "../include/login.h"
#include <cstring>
#define NUMBER_OF_USERS 2

const char* validUsers[NUMBER_OF_USERS] = { "user001", "user002" };
const char* validPasswords[NUMBER_OF_USERS] = { "password001", "password002" };

struct User
{
    char username[50];
    char password[50];
};


User users[NUMBER_OF_USERS] = { User{ .username={"user001"}, .password="password001" }, User{ .username={"user002"}, .password="password002" } };

bool login(const char* username, const char* password)
{

    for (int i = 0; i < NUMBER_OF_USERS; i++)
    {
        if(strcmp(username, users[i].username) == 0 && strcmp(password, users[i].password) == 0)
        {
            return true;
        }
    }

    return false;
}

char* getUserPassword(const char* username)
{
    for (int i = 0; i < NUMBER_OF_USERS; i++)
    {
        if(strcmp(username, users[i].username) == 0)
        {
            // char* pass;
            // strcpy(pass, validPasswords[i]);
            return users[i].password;
        }
    }
}

