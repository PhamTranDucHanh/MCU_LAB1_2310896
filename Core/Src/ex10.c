/*
 * ex10.c
 *
 *  Created on: Sep 6, 2025
 *      Author: HANH
 */
#include "ex10.h"

void ex10_run(){
	int sec = 0;
	int secCount = 0;
	int min = 0;
	int minCount = 0;
	int hour = 0;
	int hourCount = 0;
	while(1){
		clearAllClock();
		if (secCount == 5){
			sec++;
			secCount = 0;
		}
		if (sec == 12){
			sec = 0;
			minCount++;
		}
		if (minCount == 5){
			min++;
			minCount = 0;
		}
		if (min == 12){
			min = 0;
			hourCount++;
		}
		if (hourCount == 5){
			hour++;
			hourCount = 0;
		}
		if (hour == 12){
			hour = 0;
		}

		setNumberOnClock(sec);
		setNumberOnClock(min);
		setNumberOnClock(hour);
		HAL_Delay(10);
		secCount++;
	}
}

