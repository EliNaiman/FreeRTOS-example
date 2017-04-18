/*
 * Application.c
 *
 *  Created on: Dec 15, 2016
 *      Author: Eli Naiman
 */

#include "Application.h"
#include "FRTOS1.h"
#include "LED1.h"
#include "LED2.h"
#include "LED3.h"

xSemaphoreHandle taskkeeper = NULL;

static portTASK_FUNCTION(Task1, pvParameters)
	{
	(void)pvParameters; // parameter not used
	for(;;)
		{
	    if( taskkeeper != NULL )
	    	{
	        if( FRTOS1_xSemaphoreTake( taskkeeper, 1000 ) == pdTRUE )
				{
	        	LED1_On();
	        	FRTOS1_vTaskDelay(1000/portTICK_RATE_MS);
	        	LED1_Off();
	        	FRTOS1_vTaskDelay(1000/portTICK_RATE_MS);

	        	FRTOS1_xSemaphoreGive(taskkeeper);
	        	FRTOS1_taskYIELD();
				}
	    	}
		}
	}

static portTASK_FUNCTION(Task2, pvParameters)
	{
	(void)pvParameters; // parameter not used
	for(;;)
		{
	    if( taskkeeper != NULL )
	    	{
	        if( FRTOS1_xSemaphoreTake( taskkeeper, 1000 ) == pdTRUE )
			{
			LED2_On();
			FRTOS1_vTaskDelay(1000/portTICK_RATE_MS);
			LED2_Off();
			FRTOS1_vTaskDelay(1000/portTICK_RATE_MS);

			FRTOS1_xSemaphoreGive(taskkeeper);
			FRTOS1_taskYIELD();
			}
			}
		}
	}

static portTASK_FUNCTION(Task3, pvParameters)
	{
	(void)pvParameters; // parameter not used
	for(;;)
		{
	    if( taskkeeper != NULL )
	    	{
	        if( FRTOS1_xSemaphoreTake( taskkeeper, 1000 ) == pdTRUE )
			{
			LED3_On();
			FRTOS1_vTaskDelay(1000/portTICK_RATE_MS);
			LED3_Off();
			FRTOS1_vTaskDelay(1000/portTICK_RATE_MS);

			FRTOS1_xSemaphoreGive(taskkeeper);
			FRTOS1_taskYIELD();
			}
			}
		}
	}

void Run_Applications(void)
	{
	taskkeeper = FRTOS1_xSemaphoreCreateMutex();

	if (FRTOS1_xTaskCreate(
			Task1,  					// pointer to the task
			(signed portCHAR *)"Task1", // task name for kernel awareness debugging
			configMINIMAL_STACK_SIZE, 	// task stack size
			(void*)NULL, 				// optional task startup argument
			tskIDLE_PRIORITY,  			// initial priority
			(xTaskHandle*)NULL 			// optional task handle to create
			) != pdPASS)
		{
	    //lint -e527
	    for(;;){}; 						// error! probably out of memory
	    //lint +e527
		}

	if (FRTOS1_xTaskCreate(
		    Task2,  					// pointer to the task
		    (signed portCHAR *)"Task2", // task name for kernel awareness debugging
		    configMINIMAL_STACK_SIZE, 	// task stack size
		    (void*)NULL, 				// optional task startup argument
		    tskIDLE_PRIORITY,  			// initial priority
		    (xTaskHandle*)NULL 			// optional task handle to create
		  	) != pdPASS)
		{
		//lint -e527
		for(;;){}; 						// error! probably out of memory
		//lint +e527
		}

	if (FRTOS1_xTaskCreate(
		    Task3,  					// pointer to the task
		    (signed portCHAR *)"Task3", // task name for kernel awareness debugging
		    configMINIMAL_STACK_SIZE, 	// task stack size
		    (void*)NULL, 				// optional task startup argument
		    tskIDLE_PRIORITY,  			// initial priority
		    (xTaskHandle*)NULL 			// optional task handle to create
		  	) != pdPASS)
		{
		//lint -e527
		for(;;){}; 						// error! probably out of memory
		//lint +e527
		}

	  FRTOS1_vTaskStartScheduler();
	}
