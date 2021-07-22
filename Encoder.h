#include <Arduino.h>
#define CLKD 1
#define CCLKD 0

class ENCODER
{
private:
    
public:
    uint32_t num_interrupt = 0;
    byte _pins[2];
    float w = 0;
    float rad_p_interrupt;
    float position = 0;

    bool interrupt;
    int direction = CLKD;
    unsigned long time[2], ds_millis;
    
    ENCODER();
    ~ENCODER();
    
    void interruption();
    void begin(int pins[2], int period);
    float obtain_velocity();
    float obtain_position();
    bool obtain_direction();
};
