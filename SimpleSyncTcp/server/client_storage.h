#pragma once

#include <vector>
#include <string>

class ClientStorage
{
public:
    void addClient( const std::string& client );
    std::vector<std::string> getClients() const;
private:
    std::vector < std::string > mClients;
};

