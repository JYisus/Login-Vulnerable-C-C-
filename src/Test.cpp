#include "../ext/googletest/googletest/include/gtest/gtest.h"
#include "../include/login.h"
#include "../include/users.h"


#define NUMBER_OF_USERS 2

// User database[NUMBER_OF_USERS] = { User{ .username={"user001"}, .password="password001" }, User{ .username={"user002"}, .password="password002" } };

TEST (Login, ValidUser) {
    char username[] = "user001";
    char password[] = "password001";
    EXPECT_TRUE(login(username, password));
}

TEST (Login, NotValidUser) {
    char username[] = "fake user";
    char password[] = "password001";
    EXPECT_FALSE(login(username, password));
}

TEST (Login, ValidUserButNotValidPass) {
    char username[] = "user001";
    char password[] = "password002";
    EXPECT_FALSE(login(username, password));
}

TEST (Login, AnotherValidUser) {
    char username[] = "user002";
    char password[] = "password002";
    EXPECT_TRUE(login(username, password));    
}
