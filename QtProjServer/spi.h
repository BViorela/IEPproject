#ifndef SPI_H
#define SPI_H
#include<stdint.h>

class Spi : public Serial
{
public:
    Spi();
    uint8_t BIT_ORDER;
    uint8_t SPI_MODE0;
    uint16_t CLOCK_DIVIDER;
    uint8_t SPI_CS0;
    uint8_t SPI_CS0;
    uint8_t LOW ;
    uint8_t Transfer(uint8_t send_dataa);
};

#endif // SPI_H
