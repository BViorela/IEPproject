#ifndef PWMM_H
#define PWMM_H
#include<stdint.h>

class PWMM
{
public:
    PWMM(uint16_t freq, uint8_t fact_umplere);
    uint8_t freq;
    uint8_t fact_umplere;
    uint8_t GetF();
    uint8_t GetFU();
    void Set(uint16_t freq, uint8_t duty_cycle);
};

#endif // PWMM_H

