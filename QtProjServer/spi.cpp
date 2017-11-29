#include "spi.h"
#include "bcm2835.h"
Spi::Spi( uint8_t BIT_ORDER, uint16_t SPI_MODE0, uint8_t CLOCK_DIVIDER, uint8_t SPI_CS0, uint8_t LOW )
{


    bcm2835_init();
    bcm2835_spi_begin();
    bcm2835_spi_setBitOrder(BIT_ORDER);      // The default
    bcm2835_spi_setDataMode(SPI_MODE0);                   // The default
    bcm2835_spi_setClockDivider(CLOCK_DIVIDER); // The default
    bcm2835_spi_chipSelect(SPI_CS0);                      // The default
    bcm2835_spi_setChipSelectPolarity(SPI_CS0, this->LOW);      // the default

}

uint8_t Spi::Transfer(send_dataa)
{
      return bcm2835_spi_transfer(send_dataa);


}

