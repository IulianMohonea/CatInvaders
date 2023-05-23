//
// Created by Iulian on 5/23/2023.
//


class Timer {
private:
    float timer; // Pointer către timer

public:

    // Constructorul implicit
    explicit Timer(float timer_);

    Timer(const Timer& other);
    // Constructorul de copiere

    Timer operator=(Timer& other);
    // Destructorul
    ~Timer();
    float get_time();
    void set_time(float dt);

};

