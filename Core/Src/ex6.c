/*
 * ex6.c
 *
 *  Created on: Sep 6, 2025
 *      Author: HANH
 */

#include "ex6.h"
  uint16_t clockPins[12] = {GPIO_PIN_4, GPIO_PIN_5, GPIO_PIN_6, GPIO_PIN_7, GPIO_PIN_8, GPIO_PIN_9,
		  	  	  	  	  GPIO_PIN_10, GPIO_PIN_11, GPIO_PIN_12, GPIO_PIN_13, GPIO_PIN_14, GPIO_PIN_15};
void ex6_run(){
		int cnt = 0;
		while(1){
			if (cnt >= 12) cnt = 0;
			HAL_GPIO_TogglePin(GPIOA, clockPins[cnt]);
			cnt++;
			HAL_Delay(500);
		}

}

