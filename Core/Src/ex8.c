/*
 * ex8.c
 *
 *  Created on: Sep 6, 2025
 *      Author: HANH
 */

#include "ex8.h"

  uint16_t clockPins2[12] = {GPIO_PIN_4, GPIO_PIN_5, GPIO_PIN_6, GPIO_PIN_7, GPIO_PIN_8, GPIO_PIN_9,
		  	  	  	  	  GPIO_PIN_10, GPIO_PIN_11, GPIO_PIN_12, GPIO_PIN_13, GPIO_PIN_14, GPIO_PIN_15};

  void setNumberOnClock(int num){
	  if (num >= 12 || num < 0) return;
	  HAL_GPIO_WritePin(GPIOA, clockPins2[num], GPIO_PIN_RESET);
  }

  void ex8_run(){
	  int cnt = 0;
	  while(1){
		  if (cnt == 12){
			  cnt = -1;
			  clearAllClock();
		  }
		  setNumberOnClock(cnt++);
		  HAL_Delay(1000);
	  }
  }
