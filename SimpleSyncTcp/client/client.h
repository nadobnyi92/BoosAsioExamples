#pragma once

#include <string>

#include <boost/asio.hpp>

using namespace boost::asio;

class Client
{
public:
    Client();
    bool login( const std::string& address, int port, const std::string& login);
    void start();

private:
    void on_login( const std::string& message );
    void on_ping( const std::string& message );
    void on_clients( const std::string& message );

private:
    std::string mLogin;
    uint32_t mTimeout;

    io_service mService;
    ip::tcp::socket mSocket;
};

