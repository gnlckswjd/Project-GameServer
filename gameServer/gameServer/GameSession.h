#pragma once

#include "Session.h"

class GameSession : public Session
{
public:
    ~GameSession() override {}
    void OnConnect() override;
    void OnSend() override;
    void OnReceive(int numberOfBytes, char* buffer) override;
    //Room포인터 두는 것 고려, 
};

