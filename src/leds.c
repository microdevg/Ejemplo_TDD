#include "leds.h"

/**
 * @brief Lista de caracteristicas o condiciones que debe cumplir el modulo led
 *  El driver almacenara el estado de 16 leds en una variable  int16_t.
 * 
 *  1. Todos los leds deben estar apagados despues de que el driver se inicializo.
 *  2. Encender un led de manera individual.
 *  3. Apagar un led de manera individual.
 *  4. Encender o apagar multiples leds al mismo tiempo.
 *  5. Apagar todos los leds al mismo tiempo.
 *  6. Encender todos los leds al mismo tiempo.
 *  7. Obtener el estado de cualquier led.
 *  8. Verificar valores limites
 *  9. Verificar valores fuera de los limites
 * 
 */