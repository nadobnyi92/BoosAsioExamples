#include <iostream>

#include <boost/asio.hpp>

#include "client_processor.h"

using namespace boost::asio;

int main()
{
    ip::tcp::acceptor acceptor { ClientProcessor::service, ip::tcp::endpoint{ ip::tcp::v4(), 8001} };
    while( true )
    {
        ClientProcessor processor;
        acceptor.accept( processor.socket() );
        processor.start();
    }
    return 0;
}

