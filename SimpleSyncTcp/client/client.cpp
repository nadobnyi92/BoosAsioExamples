#include "client.h"

Client::Client()
    : mTimeout( 0 )
    , mSocket( mService ) {}

bool Client::login( const std::string& address, int port, const std::string& login)
{
    ip::tcp::endpoint ep( ip::address::from_string( address ), port );
    mSocket.connect( ep );
    mSocket.write_some( buffer( "login: " + login + '\n' ) );
    return true;
}

void Client::start()
{

}

void Client::on_login( const std::string& message )
{

}

void Client::on_ping( const std::string& message )
{

}

void Client::on_clients( const std::string& message )
{

}


