#include "leds.h"


// Macros para manipulación de bits
#define LED_ON(led_address, bit) ((led_address) |= (1 << (bit)))
#define LED_OFF(led_address, bit) ((led_address) &= ~(1 << (bit)))




static uint16_t* _port_address;


void leds_create(uint16_t* virtual_leds){
    _port_address = virtual_leds;
    (*_port_address) = 0x00;
}


void leds_set_led (uint16_t gpio_num, uint16_t value){
  (value)? LED_ON(*_port_address,gpio_num): 
           LED_OFF(*_port_address,gpio_num);
}

void leds_set_port (uint16_t values){
    (*_port_address) = values;

}
