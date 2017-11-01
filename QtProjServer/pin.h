#ifndef PIN_H
#define PIN_H
#define OUTPUT 000
#define INPUT 001

class Pin
{
    public:
        Pin(uint8_t dir, uint8_t nr, uint8_t pull);
        uint8_t nr_pin;
        uint8_t pull_up;
        uint8_t direction;
        void Get();
        void Set();
        void change_dir(uint8_t nr_pin);
};
#endif // PIN_H
