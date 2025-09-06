/*
 * ex2.c
 *
 *  Created on: Sep 6, 2025
 *      Author: HANH
 */


#include "ex2.h"

void ex2_run(){
	  int cnt1 = 0;

	  HAL_GPIO_WritePin(GPIOB, GREEN1_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(GPIOB, YELLOW1_Pin, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(GPIOB, RED1_Pin, GPIO_PIN_SET);
	  while (1)
	  {
		 if (cnt1 == 3){
			 HAL_GPIO_WritePin(GPIOB, GREEN1_Pin, GPIO_PIN_SET);
			 HAL_GPIO_WritePin(GPIOB, YELLOW1_Pin, GPIO_PIN_RESET);
		 }
		 if (cnt1 == 5){
			 HAL_GPIO_WritePin(GPIOB, YELLOW1_Pin, GPIO_PIN_SET);
			 HAL_GPIO_WritePin(GPIOB, RED1_Pin, GPIO_PIN_RESET);
		 }
		 if (cnt1 == 10){
			 HAL_GPIO_WritePin(GPIOB, RED1_Pin, GPIO_PIN_SET);
			 HAL_GPIO_WritePin(GPIOB, GREEN1_Pin, GPIO_PIN_RESET);
			 cnt1 = 0;
		 }
		 cnt1++;
		 HAL_Delay(1000);
	  }

}
