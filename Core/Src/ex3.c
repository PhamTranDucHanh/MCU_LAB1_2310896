/*
 * ex3.c
 *
 *  Created on: Sep 6, 2025
 *      Author: HANH
 */

#include "ex3.h"

void ex3_run(){
	  int cnt1 = 0;
	  int cnt2 = 0;
	  HAL_GPIO_WritePin(GPIOB, GREEN1_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(GPIOB, YELLOW1_Pin, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(GPIOB, RED1_Pin, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(GPIOB, GREEN2_Pin, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(GPIOB, YELLOW2_Pin, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(GPIOB, RED2_Pin, GPIO_PIN_RESET);
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
		 cnt1++;
		 cnt2++;
		 HAL_Delay(1000);
	  }

}
