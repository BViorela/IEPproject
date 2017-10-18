#include "pin.h"


Pin::Pin(uint8_t dir, uint8_t nr, uint8_t pull)
{
    this->direction = dir;
    this->pull_up = pull;
    this->nr_pin = nr;
}

void Pin::Set()
{
    if(this->direction == OUTPUT)
        bcm2835_gpio_write(this->nr_pin,on);

}
uint8_t Pin::Get()
{
    if(this->direction == OUTPUT)
    bcm2835_gpio_lev(this->nr_pin);
    else
        if(this->direction == INPUT)

}
uint8_t Pin::Change_dir()
{
    if(this->direction == OUTPUT)
    this->direction = INPUT;
    else
        if(this->direction == INPUT)
            this->direction = OUTPUT;
}
