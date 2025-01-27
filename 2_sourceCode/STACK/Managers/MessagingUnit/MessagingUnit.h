/**************************************************************************
 ** This  software  is  in  the  public  domain , furnished "as is", without
 ** technical support,  and with no  warranty, express or implied, as to its
 ** usefulness for any purpose.

 ** MessaginUnit.h
 **************************************************************************/
#ifndef _MESSAGING_UNIT_H_
#define _MESSAGING_UNIT_H_
/**************************************************************************/
/*                              Includes                                  */
/**************************************************************************/
#include "types.h"
#include "uart.h"
#include "logger.h"
#include "std_library.h"
/**************************************************************************/
/*                                 Macros                                 */
/**************************************************************************/
#define START                 1
#define PASSWORD_RIGHT        2
#define PASSWORD_WRONG        3
#define START_NEW_PASS        4
#define START_DEFAULT_PASS    5
#define PASS_CHANGED          6
#define PASS_NOT_CHANGED      7
#define PASSWORD_EXICTED      8
#define PASSWORD_NOT_EXICTED  9
#define CHECK_PASS_EXCISTANCE 10
#define OPEN_LOCK             11
#define ALARM                 12

#define PASSWORD_LENGTH 4
#define PASSWORD_LOCATION_FLAG 0x09
/*************************************************************************/
/*                           Public Functions                            */
/**************************************************************************
 ** ms_manager_init()
 **
 ** parameter: void
 ** return    : system_error_t
 ***************************************************************************
 ** this function is used to initialize UART data between ECU on UART Bus
 **************************************************************************/
system_error_t ms_manager_init();

/**************************************************************************
** ms_manager_send_signal()
**
** parameter: u8_t data
** return    : system_error_t
***************************************************************************
** this function is used to send data between ECU on UART Bus
**************************************************************************/
system_error_t ms_manager_send_signal(u8_t data );

/**************************************************************************
** ms_manager_send_password()
**
** parameter: u8_t* data
** return    : system_error_t
***************************************************************************
** this function is used to send data string between ECU on UART Bus
**************************************************************************/
system_error_t ms_manager_send_password(u8_t* data );

/**************************************************************************
** ms_manager_receive_signal()
**
** parameter: u8_t* data
** return    : system_error_t
***************************************************************************
** this function is used to receive data between ECU on UART Bus
**************************************************************************/
system_error_t ms_manager_receive_signal(u8_t* data);

/**************************************************************************
** ms_manager_send_password()
**
** parameter: u8_t* data
** return    : system_error_t
***************************************************************************
** this function is used to receive string data between ECU on UART Bus
**************************************************************************/
system_error_t ms_manager_receive_password(u8_t* data);

#endif /* _MESSAGING_UNIT_H_ */
