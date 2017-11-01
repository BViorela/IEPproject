#include "pwmm.h"


PWMM::PWMM(uint16_t f, uint8_t fact)
{
    this->freq = f;
    this->fact_umplere = this->freq * fact / 100;
    bcm2835_pwm_set_clock(BCM2835_PWM_CLOCK_DIVIDER_16);
    bcm2835_pwm_set_mode(0, 1, 1);
    bcm2835_pwm_set_range(0, f);
    bcm2835_pwm_set_data(0, this->fact_umplere);
}

void PWMM::Set(uint16_t freq, uint8_t duty_cycle)
{
    this->freq = freq;
    this->fact_umplere = this->freq * duty_cycle / 100;
    bcm2835_pwm_set_range(0, this->freq);
    bcm2835_pwm_set_data(0, this->fact_umplere);
}
uint8_t PWMM::GetF()
{
    return this->freq;
}

uint8_t PWMM::GetFU()
{
    return this->fact_umplere;
}
