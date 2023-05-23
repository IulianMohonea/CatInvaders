
#include "Timer.h"
#include <iostream>
Timer::Timer(float timer_) : timer{timer_}{

}
Timer:: Timer(const Timer& other) : timer{0} {
    if (other.timer) {
        timer = other.timer;
    }
}

Timer Timer::operator=(Timer& other) {

    std::swap(timer, other.timer);
    return *this;

}

float Timer::get_time(){
    return timer;
}
void Timer::set_time(float dt) {
    timer = dt;
}
Timer::~Timer() = default;




