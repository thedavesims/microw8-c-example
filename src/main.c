#include "microw8.h"

void tic(uint32_t time)
{
    uint32_t t = time/50;

    for(uint16_t x=0; x < 320; ++x)
    {
        for(uint16_t y=0; y < 240; ++y)
        {
            //set color using imported function:
            w8_setPixel(x,y,(x+t)^(y+t*2));
            //same, but set using direct imported memory access:
            //*(uint8_t*)(120+(x + y*320)) = (x+t)^(y+t*2);
        }
    }
}