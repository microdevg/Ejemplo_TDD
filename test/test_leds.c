#include "unity.h"


#include "leds.h"

   uint16_t virtual_leds ;

// Configuro condiciones iniciales.
void setUp(void) {
   virtual_leds = 0xff;
   leds_create(&virtual_leds);

 
}   

// Retorno el estado a las condiciones iniciales.
void tearDown(void) {
 
} 


void test_leds_create(void){
    leds_create(&virtual_leds);
    TEST_ASSERT_EQUAL(0x00,virtual_leds);
}


void test_set_on_led(){
    uint16_t gpio_num = 7;
    //Estado aleatorio cualquiera
    virtual_leds = 0b0000111100001111;
    leds_set_led(&virtual_leds, gpio_num, 1);
    TEST_ASSERT_EQUAL( (virtual_leds  | 1 << gpio_num),virtual_leds);
}



void test_set_off_led(){
    uint16_t gpio_num = 9;
    //Estado aleatorio cualquiera
    virtual_leds = 0b0000111100001111;
    leds_set_led(&virtual_leds, gpio_num, 0);
    TEST_ASSERT_EQUAL( (virtual_leds) & ~(1 << (gpio_num)),virtual_leds);
}

void test_set_port(){

    uint16_t port_value = 0b00000000011100000;
    leds_set_port(&virtual_leds,port_value);
    TEST_ASSERT_EQUAL(port_value,virtual_leds);
}
