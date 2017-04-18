/*
 * Application.h
 *
 *  Created on: Dec 15, 2016
 *      Author: Eli Naiman
 */

#ifndef SOURCES_APPLICATION_H_
#define SOURCES_APPLICATION_H_


#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"

typedef struct {
  LDD_TDeviceData *handle; /* LDD device handle */
  volatile uint8_t isSent; /* this will be set to 1 once the block has been sent */
  uint8_t rxChar; /* single character buffer for receiving chars */
  uint8_t (*rxPutFct)(uint8_t); /* callback to put received character into buffer */
} UART_Desc;

void Run_Applications(void);

#endif /* SOURCES_APPLICATION_H_ */
