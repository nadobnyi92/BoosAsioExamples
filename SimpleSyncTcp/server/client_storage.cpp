#include "client_storage.h"

void ClientStorage::addClient( const std::string& client )
{
    mClients.push_back( client );
}

std::vector<std::string> ClientStorage::getClients() const
{
    return mClients;
}

