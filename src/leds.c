#include "leds.h"


// Macros para manipulación de bits
#define LED_ON(virtual_leds, bit) ((*virtual_leds) |= (1 << (bit)))
#define LED_OFF(virtual_leds, bit) ((*virtual_leds) &= ~(1 << (bit)))


void leds_create(uint16_t* virtual_leds){
    (*virtual_leds) = 0x00;
}


void leds_set_led(uint16_t* virtual_leds, uint16_t gpio_num, uint16_t value){
  (value)? LED_ON(virtual_leds,gpio_num): 
           LED_OFF(virtual_leds,gpio_num);
}

void leds_set_port(uint16_t* virtual_leds, uint16_t values){
    (*virtual_leds) = values;

}
