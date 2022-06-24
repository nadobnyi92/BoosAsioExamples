#include <iostream>
#include <string>

#include "client.h"

int main()
{
    Client client;

    std::string login;
    std::cout << "Input login: ";
    std::cin >> login;

    client.login( "127.0.0.1", 8001, login );
    client.start();
}
