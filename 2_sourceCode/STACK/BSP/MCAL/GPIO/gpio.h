/***************************************************************************
 ** This  software  is  in  the  public  domain , furnished "as is", without
 ** technical support,  and with no  warranty, express or implied, as to its
 ** usefulness for any purpose.

 ** GPIO.h
 **************************************************************************/
#ifndef GPIO_H_
#define GPIO_H_
/**************************************************************************/
/*                              Includes                                  */
/**************************************************************************/
#include "types.h"
#include "atmega32.h"
#include "port.h"
#include "logger.h"
/**************************************************************************/
/*                              Macros                                    */
/**************************************************************************/
#define mcal_fast_set(port,pin) set_bit(port , pin)
#define mcal_fast_clr(port,pin) clr_bit(port , pin)
/**************************************************************************/
/*                               Types                                    */
/**************************************************************************/
typedef enum
{
	DIR_INPUT_PULLUP,
	DIR_INPUT_PULLDOWN,
	DIR_OUTPUT
} pinState;

typedef enum GPIO_STATE_ERROR_t
{
	GPIO_STATE_SUCCESS,
	GPIO_STATE_ERROR,
	GPIO_STATE_INVALID_ADDR,
	GPIO_STATE_INVAILD_PIN,
	GPIO_STATE_INVALID_DIR,
	GPIO_STATE_INVALID_VALUE
} GPIO_STATE_ERROR_t;

/**************************************************************************/
/*                           Public Functions                             */
/***************************************************************************
 ** mcal_gpio_pin_init()
 **
 ** parameter: u8_t base
 ** parameter: u8_t pin
 ** parameter: pinState dir
 ** return    : GPIO_STATE_ERROR_t
 ***************************************************************************
 ** this function is used to initialize all the necessary sequence for pin
 **************************************************************************/
GPIO_STATE_ERROR_t mcal_gpio_pin_init(u8_t base, u8_t pin, pinState dir);

/**************************************************************************
 ** mcal_gpio_pin_write()
 **
 ** parameter: u8_t base
 ** parameter: u8_t pin
 ** parameter: u8_t value
 ** return    : GPIO_STATE_ERROR_t
 ***************************************************************************
 ** this function is used write a value to gpio pin
 **************************************************************************/
GPIO_STATE_ERROR_t mcal_gpio_pin_write(u8_t base, u8_t pin, u8_t value);

/**************************************************************************
 ** mcal_gpio_pin_toggle()
 **
 ** parameter: u8_t base
 ** parameter: u8_t pin
 ** return    : GPIO_STATE_ERROR_t
 ***************************************************************************
 ** this function is used to toggle gpio pin
 **************************************************************************/
GPIO_STATE_ERROR_t mcal_gpio_pin_toggle(u8_t base, u8_t pin);

/**************************************************************************
 ** mcal_gpio_pin_read()
 **
 ** parameter: u8_t base
 ** parameter: u8_t pin
 ** parameter: u8_t* value
 ** return    : GPIO_STATE_ERROR_t
 ***************************************************************************
 ** this function is used read a value from gpio pin
 **************************************************************************/
GPIO_STATE_ERROR_t mcal_gpio_pin_read(u8_t base, u8_t pin, u8_t *value);

#endif /* GPIO_H_ */
