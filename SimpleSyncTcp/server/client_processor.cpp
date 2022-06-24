#include "client_processor.h"

#include <iostream>

io_service ClientProcessor::service {};

ClientProcessor::ClientProcessor()
    : mSocket( service )
{
    mProcessors = {
        { "login", [this]( const std::string& message ){ on_login( message ); } },
        { "ping", [this]( const std::string& message ){ on_ping( message ); } },
        { "clients", [this]( const std::string& message ){ on_clients( message ); } }
    };
}

void ClientProcessor::start()
{
    streambuf responce;
    while( true )
    {
        read_until(mSocket, responce, '\n');
        std::string responce_str{ std::istreambuf_iterator<char>{ &responce }, 
                         std::istreambuf_iterator<char>{} };
        size_t pos = responce_str.find( ':' );
        // if( pos != std::string::npos )
        // {
        //     std::string title = { responce_str }
        // }
    }

}

void ClientProcessor::process_message( const std::string& message )
{
    
}

void ClientProcessor::on_login( const std::string& message )
{

}

void ClientProcessor::on_ping( const std::string& message )
{

}

void ClientProcessor::on_clients( const std::string& message )
{

}

ip::tcp::socket& ClientProcessor::socket()
{
    return mSocket;
}

