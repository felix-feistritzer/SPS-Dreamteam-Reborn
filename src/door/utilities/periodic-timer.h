#pragma once

#include <sys/timerfd.h>
#include "eventloop.h"
#include "timer-expired.h"
#include "timespec.h"

class PeriodicTimer : public InputHandler
{
public:
    PeriodicTimer(TimeSpec set_time, TimerExpired* timer); //Add ms parameter
    void hookup(Eventloop&);
    EventAction ready(int fd) override;

private:
    int _timer_fd;
    TimerExpired* _timer;
};
