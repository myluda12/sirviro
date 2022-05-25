#pragma once

#include "utilities_.hpp"
#include "Server.hpp"
#include "ServerGroup.hpp"


class DebugWS
{
    public :

    std::vector<int> getServerPorts()
    {
        std::vector<int> tmp;
        tmp.push_back(7300);
        tmp.push_back(8082);
        // tmp.push_back(4430);
        return tmp;
    }

    std::vector<std::string> getServerHosts()
    {
        std::vector<std::string> tmp;
        tmp.push_back("127.0.0.1");
        tmp.push_back("10.11.10.9");
        //tmp.push_back("C8:F7:50:83:B1:1E");
        // tmp.push_back("127.0.0.50");
        return tmp;
    }
};

/// haitam zibi 123 

