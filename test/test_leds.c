#include "unity.h"


#include "leds.h"


// Configuro condiciones iniciales.
void setUp(void) {
 
}   

// Retorno el estado a las condiciones iniciales.
void tearDown(void) {
 
} 


void test_create_leds(void){

    uint16_t virtual_leds = 0xff;

    leds_create(&virtual_leds);

    TEST_ASSERT_EQUAL(virtual_leds, 0x00);

}




