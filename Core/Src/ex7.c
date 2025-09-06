/*
 * ex7.c
 *
 *  Created on: Sep 6, 2025
 *      Author: HANH
 */

#include "ex7.h"
  uint16_t clockPins1[12] = {GPIO_PIN_4, GPIO_PIN_5, GPIO_PIN_6, GPIO_PIN_7, GPIO_PIN_8, GPIO_PIN_9,
		  	  	  	  	  GPIO_PIN_10, GPIO_PIN_11, GPIO_PIN_12, GPIO_PIN_13, GPIO_PIN_14, GPIO_PIN_15};

void clearAllClock(){
  for (int i = 0; i < 12; i++){
	  HAL_GPIO_WritePin(GPIOA, clockPins1[i], GPIO_PIN_SET);
  }
 }
void ex7_run(){
	  for (int i = 0; i < 12; i++){
		  HAL_GPIO_WritePin(GPIOA, clockPins1[i], GPIO_PIN_RESET);
	  }
	  HAL_Delay(1000);
	  clearAllClock();
	  HAL_Delay(1000);
}
