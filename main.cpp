#include <cstdio>
#include <cstring>
#include <list>

#include "./include/login.h"
#include "./include/users.h"

int main (int argc, char** argv) {
    if (argc-1 != 2) {
        printf("Incorrect number of parameters, expected 2, have %d\n", argc-1);
    }

    char username[25];
    char password[25];

    printf("Username: ");
    gets(username);

    printf("Password: ");
    gets(password);


    bool loged = login(username, password);

    if (loged) {
        printf("ACCESS GRANTED!\n");
        return 0;
    }

    printf("ACCESS DENIED!\nIncorrent username or password.\n");
    return 1;
}