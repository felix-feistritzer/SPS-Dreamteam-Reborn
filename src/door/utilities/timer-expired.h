#pragma once

class TimerExpired
{
public:
    virtual ~TimerExpired() = default;
    virtual void expired() = 0;
};