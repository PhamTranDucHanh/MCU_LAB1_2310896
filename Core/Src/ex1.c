/*
 * ex1.c
 *
 *  Created on: Sep 6, 2025
 *      Author: HANH
 */

#include "ex1.h"

void ex1_run(){
	HAL_GPIO_WritePin(GPIOB, RED1_Pin, 0);
	HAL_GPIO_WritePin(GPIOB, YELLOW1_Pin, 1);
	int cnt = 0;
	while(1){
		if (cnt == 2){
			HAL_GPIO_TogglePin(GPIOB, RED1_Pin);
			HAL_GPIO_TogglePin(GPIOB, YELLOW1_Pin);
			cnt = 0;
		}
		cnt++;
		HAL_Delay(1000);
	}
}
