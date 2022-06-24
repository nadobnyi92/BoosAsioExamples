#pragma once

#include <boost/asio.hpp>

using namespace boost::asio;


class ClientProcessor
{
public:
    ClientProcessor();
    void start();

    void process_message( const std::string& message );
    void on_login( const std::string& message );
    void on_ping( const std::string& message );
    void on_clients( const std::string& message );

    ip::tcp::socket& socket();

    static io_service service;

private:
    ip::tcp::socket mSocket;
    std::map< std::string, std::function<void ( const std::string& )> > mProcessors;
};

