#include "unity.h"


#include "leds.h"

   uint16_t virtual_leds ;

// Configuro condiciones iniciales.
void setUp(void) {
   virtual_leds = 0xff;

 
}   

// Retorno el estado a las condiciones iniciales.
void tearDown(void) {
 
} 


void test_leds_create(void){

    virtual_leds = 0xff;

    leds_create(&virtual_leds);

    TEST_ASSERT_EQUAL(0x00,virtual_leds);

}




