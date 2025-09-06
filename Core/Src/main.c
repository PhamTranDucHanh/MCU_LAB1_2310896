/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2025 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */
/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include "ex1.h"
#include "ex2.h"
#include "ex3.h"
#include "ex4.h"
#include "ex5.h"
#include "ex6.h"
#include "ex7.h"
#include "ex8.h"
#include "ex9.h"
#include "ex10.h"
/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */
/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

//#define ex1
//#define ex2
//#define ex3
//#define ex4
//#define ex5
//#define ex6
//#define ex7
//#define ex8
//#define ex9
#define ex10

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/

/* USER CODE BEGIN PV */

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{
  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  /* USER CODE BEGIN 2 */

  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  HAL_GPIO_WritePin(GPIOA, L0_Pin, GPIO_PIN_SET);
  HAL_GPIO_WritePin(GPIOA, L1_Pin, GPIO_PIN_SET);
  HAL_GPIO_WritePin(GPIOA, L2_Pin, GPIO_PIN_SET);
  HAL_GPIO_WritePin(GPIOA, L3_Pin, GPIO_PIN_SET);
  HAL_GPIO_WritePin(GPIOA, L4_Pin, GPIO_PIN_SET);
  HAL_GPIO_WritePin(GPIOA, L5_Pin, GPIO_PIN_SET);
  HAL_GPIO_WritePin(GPIOA, L6_Pin, GPIO_PIN_SET);
  HAL_GPIO_WritePin(GPIOA, L7_Pin, GPIO_PIN_SET);
  HAL_GPIO_WritePin(GPIOA, L8_Pin, GPIO_PIN_SET);
  HAL_GPIO_WritePin(GPIOA, L9_Pin, GPIO_PIN_SET);
  HAL_GPIO_WritePin(GPIOA, L10_Pin, GPIO_PIN_SET);
  HAL_GPIO_WritePin(GPIOA, L11_Pin, GPIO_PIN_SET);
  HAL_GPIO_WritePin(GPIOB, a_Pin, GPIO_PIN_SET);
  HAL_GPIO_WritePin(GPIOB, b_Pin, GPIO_PIN_SET);
  HAL_GPIO_WritePin(GPIOB, c_Pin, GPIO_PIN_SET);
  HAL_GPIO_WritePin(GPIOB, d_Pin, GPIO_PIN_SET);
  HAL_GPIO_WritePin(GPIOB, e_Pin, GPIO_PIN_SET);
  HAL_GPIO_WritePin(GPIOB, f_Pin, GPIO_PIN_SET);
  HAL_GPIO_WritePin(GPIOB, g_Pin, GPIO_PIN_SET);
  HAL_GPIO_WritePin(GPIOB, GREEN1_Pin, GPIO_PIN_SET);
  HAL_GPIO_WritePin(GPIOB, YELLOW1_Pin, GPIO_PIN_SET);
  HAL_GPIO_WritePin(GPIOB, RED1_Pin, GPIO_PIN_SET);
  HAL_GPIO_WritePin(GPIOB, GREEN2_Pin, GPIO_PIN_SET);
  HAL_GPIO_WritePin(GPIOB, YELLOW2_Pin, GPIO_PIN_SET);
  HAL_GPIO_WritePin(GPIOB, RED2_Pin, GPIO_PIN_SET);
  while (1)
  {
    /* USER CODE END WHILE */

	#ifdef ex1
		 ex1_run();
	#endif

	#ifdef ex2
		 ex2_run();
	#endif

	#ifdef ex3
		 ex3_run();
	#endif

	#ifdef ex4
		 ex4_run();
	#endif

	#ifdef ex5
		 ex5_run();
	#endif

	#ifdef ex6
		 ex6_run();
	#endif

	#ifdef ex7
		 ex7_run();
	#endif

	#ifdef ex8
		 ex8_run();
	#endif

	#ifdef ex9
		 ex9_run();
	#endif

	#ifdef ex10
		 ex10_run();
	#endif

    /* USER CODE BEGIN 3 */
  }
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_NONE;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }
  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_HSI;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_0) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
  * @brief GPIO Initialization Function
  * @param None
  * @retval None
  */
static void MX_GPIO_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOA, L0_Pin|L1_Pin|L2_Pin|L3_Pin
                          |L4_Pin|L5_Pin|L6_Pin|L7_Pin
                          |L8_Pin|L9_Pin|L10_Pin|L11_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOB, a_Pin|b_Pin|c_Pin|GREEN1_Pin
                          |YELLOW1_Pin|RED1_Pin|GREEN2_Pin|YELLOW2_Pin
                          |RED2_Pin|d_Pin|e_Pin|f_Pin
                          |g_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pins : L0_Pin L1_Pin L2_Pin L3_Pin
                           L4_Pin L5_Pin L6_Pin L7_Pin
                           L8_Pin L9_Pin L10_Pin L11_Pin */
  GPIO_InitStruct.Pin = L0_Pin|L1_Pin|L2_Pin|L3_Pin
                          |L4_Pin|L5_Pin|L6_Pin|L7_Pin
                          |L8_Pin|L9_Pin|L10_Pin|L11_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  /*Configure GPIO pins : a_Pin b_Pin c_Pin GREEN1_Pin
                           YELLOW1_Pin RED1_Pin GREEN2_Pin YELLOW2_Pin
                           RED2_Pin d_Pin e_Pin f_Pin
                           g_Pin */
  GPIO_InitStruct.Pin = a_Pin|b_Pin|c_Pin|GREEN1_Pin
                          |YELLOW1_Pin|RED1_Pin|GREEN2_Pin|YELLOW2_Pin
                          |RED2_Pin|d_Pin|e_Pin|f_Pin
                          |g_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

}

/* USER CODE BEGIN 4 */

/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  __disable_irq();
  while (1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
