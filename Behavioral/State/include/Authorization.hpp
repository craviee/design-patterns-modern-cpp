#pragma once

#include <string>
#include <map>
#include <vector>

#include "AuthorizationState.hpp"
#include "AuthorizationStateTrigger.hpp"

class Authorization {

public:
    Authorization(std::string password) : password{password} { initializeMap(); };
    ~Authorization(){};
    void tryPassword(std::string attempt);
    void initializeMap();
    std::string getCurrentState();
private:
    AuthorizationState currentState = AuthorizationState::CLOSED;
    std::string password;
    std::map<AuthorizationState, std::vector<std::pair<AuthorizationStateTrigger, AuthorizationState>>> state;
};