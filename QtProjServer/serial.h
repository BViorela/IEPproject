#ifndef SERIAL_H
#define SERIAL_H
#include<stdint.h>

class Serial
{
public:
   virtual uint8_t Transfer(uint8_t send_dataa)=0;
 
};

#endif // SERIAL_H