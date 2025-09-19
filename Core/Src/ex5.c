/*
 * ex5.c
 *
 *  Created on: Sep 6, 2025
 *      Author: HANH
 */

#include "ex5.h"
#include "ex4.h"

void ex5_run(){
	  int cnt1 = 0;
	  int cnt2 = 0;

	  HAL_GPIO_WritePin(GPIOB, GREEN1_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(GPIOB, YELLOW1_Pin, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(GPIOB, RED1_Pin, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(GPIOB, GREEN2_Pin, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(GPIOB, YELLOW2_Pin, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(GPIOB, RED2_Pin, GPIO_PIN_RESET);
	  int counter = 3;
	  while (1)
	  {
		 if (cnt1 == 3){
			 HAL_GPIO_WritePin(GPIOB, GREEN1_Pin, GPIO_PIN_SET);
			 HAL_GPIO_WritePin(GPIOB, YELLOW1_Pin, GPIO_PIN_RESET);
			 counter = 2;
		 }
		 if (cnt1 == 5){
			 HAL_GPIO_WritePin(GPIOB, YELLOW1_Pin, GPIO_PIN_SET);
			 HAL_GPIO_WritePin(GPIOB, RED1_Pin, GPIO_PIN_RESET);
			 counter = 5;
		 }
		 if (cnt1 == 10){
			 HAL_GPIO_WritePin(GPIOB, RED1_Pin, GPIO_PIN_SET);
			 HAL_GPIO_WritePin(GPIOB, GREEN1_Pin, GPIO_PIN_RESET);
			 cnt1 = 0;
			 counter = 3;
		 }
		 if(cnt2 == 5){
			 HAL_GPIO_WritePin(GPIOB, RED2_Pin, GPIO_PIN_SET);
			 HAL_GPIO_WritePin(GPIOB, GREEN2_Pin, GPIO_PIN_RESET);
		 }
		 if(cnt2 == 8){
			 HAL_GPIO_WritePin(GPIOB, GREEN2_Pin, GPIO_PIN_SET);
			 HAL_GPIO_WritePin(GPIOB, YELLOW2_Pin, GPIO_PIN_RESET);
		 }
		 if(cnt2 == 10){
			 HAL_GPIO_WritePin(GPIOB, YELLOW2_Pin, GPIO_PIN_SET);
			 HAL_GPIO_WritePin(GPIOB, RED2_Pin, GPIO_PIN_RESET);
			 cnt2 = 0;
		 }
		 display7SEG(counter);
		 HAL_Delay(1000);
		 cnt1++;
		 cnt2++;
		 counter--;
	  }
}
