#include "../ext/googletest/googletest/include/gtest/gtest.h"
#include "../include/login.h"

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

TEST (User, GivenAnUsernameReturnItsPassword) {
    char username[] = "user001";
    char password[] = "password001";
    EXPECT_STREQ(password, getUserPassword(username));
}

TEST (User, GivenAnotherUsernameReturnItsPassword) {
    char username[] = "user002";
    char password[] = "password002";
    EXPECT_STREQ(password, getUserPassword(username));
}