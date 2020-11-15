#include "../include/login.h"
#include "../include/users.h"
#include <cstring>
#include <cstdio>
#define NUMBER_OF_USERS 2

// User users[NUMBER_OF_USERS] = { User{ .username={"user001"}, .password="password001" }, User{ .username={"user002"}, .password="password002" } };
const User database[NUMBER_OF_USERS] = { User{ .username="user001", .password="password001" }, User{ .username="user002", .password="password002" } };

bool login(const char* username, const char* password)
{

    int numberOfUsers = sizeof(database)/sizeof(database[0]);

    printf("Array size: %d\n", numberOfUsers);

    for (int i = 0; i < numberOfUsers; i++)
    {

        if(strcmp(username, database[i].username) == 0 && strcmp(password, database[i].password) == 0)
        {
            return true;
        }
    }

    return false;
}


