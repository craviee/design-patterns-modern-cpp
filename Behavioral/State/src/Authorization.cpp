#include "Authorization.hpp"

void Authorization::initializeMap()
{
    state[AuthorizationState::CLOSED] = {
        {AuthorizationStateTrigger::WRONG_PASSWORD,AuthorizationState::FIRST_FAIL},
        {AuthorizationStateTrigger::RIGHT_PASSWORD,AuthorizationState::OPEN}
    };
    state[AuthorizationState::FIRST_FAIL] = {
        {AuthorizationStateTrigger::WRONG_PASSWORD,AuthorizationState::SECOND_FAIL},
        {AuthorizationStateTrigger::RIGHT_PASSWORD,AuthorizationState::OPEN}
    };
    state[AuthorizationState::SECOND_FAIL] = {
        {AuthorizationStateTrigger::WRONG_PASSWORD,AuthorizationState::LOCKED},
        {AuthorizationStateTrigger::RIGHT_PASSWORD,AuthorizationState::OPEN}
    };
    state[AuthorizationState::LOCKED] = {
        {AuthorizationStateTrigger::WRONG_PASSWORD,AuthorizationState::LOCKED},
        {AuthorizationStateTrigger::RIGHT_PASSWORD,AuthorizationState::LOCKED}
    };
    state[AuthorizationState::OPEN] = {
        {AuthorizationStateTrigger::WRONG_PASSWORD,AuthorizationState::CLOSED},
        {AuthorizationStateTrigger::RIGHT_PASSWORD,AuthorizationState::CLOSED}
    };
}

void Authorization::tryPassword(std::string attempt)
{
    auto trigger = (password == attempt) ?
        AuthorizationStateTrigger::RIGHT_PASSWORD :
        AuthorizationStateTrigger::WRONG_PASSWORD;
    
    for(auto transitionPair : state[currentState])
    {
        if(transitionPair.first == trigger)
        {
            currentState = transitionPair.second;
            break;
        }
    }
}

std::string Authorization::getCurrentState()
{
    if(currentState == AuthorizationState::CLOSED)
        return "CLOSED";
    else if(currentState == AuthorizationState::OPEN)
        return "OPEN";
    else if(currentState == AuthorizationState::LOCKED)
        return "LOCKED";
    else if(currentState == AuthorizationState::FIRST_FAIL)
        return "FIRST_FAIL";
    else if(currentState == AuthorizationState::SECOND_FAIL)
        return "SECOND_FAIL";
    return "INVALID STATE";
}