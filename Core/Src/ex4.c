/*
 * ex4.c
 *
 *  Created on: Sep 6, 2025
 *      Author: HANH
 */

#include "ex4.h"

	  uint16_t segPins[7] = {GPIO_PIN_0, GPIO_PIN_1, GPIO_PIN_2, GPIO_PIN_3, GPIO_PIN_4, GPIO_PIN_5, GPIO_PIN_6};

	  // Bảng mã cho từng số (0-9), 0 = sáng (common anode)
	  const uint8_t digitCode[10][7] = {
	    {0,0,0,0,0,0,1}, // 0
	    {1,0,0,1,1,1,1}, // 1
	    {0,0,1,0,0,1,0}, // 2
	    {0,0,0,0,1,1,0}, // 3
	    {1,0,0,1,1,0,0}, // 4
	    {0,1,0,0,1,0,0}, // 5
	    {0,1,0,0,0,0,0}, // 6
	    {0,0,0,1,1,1,1}, // 7
	    {0,0,0,0,0,0,0}, // 8
	    {0,0,0,0,1,0,0}  // 9
	  };

	  void display7SEG(int num) {
	    if (num > 9) return;
	    for (int i = 0; i < 7; i++) {
	      HAL_GPIO_WritePin(GPIOB, segPins[i], digitCode[num][i] ? GPIO_PIN_SET : GPIO_PIN_RESET);
	    }
	  }

void ex4_run(){
	  int counter = 0;
	  while(1){
		  if (counter >= 10) counter = 0;
		  display7SEG(counter++);
		  HAL_Delay(1000);
	  }
}
