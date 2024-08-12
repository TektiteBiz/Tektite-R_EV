/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define ESC1_Pin GPIO_PIN_0
#define ESC1_GPIO_Port GPIOA
#define AENBL_Pin GPIO_PIN_1
#define AENBL_GPIO_Port GPIOA
#define BENBL_Pin GPIO_PIN_2
#define BENBL_GPIO_Port GPIOA
#define VSENSE_Pin GPIO_PIN_3
#define VSENSE_GPIO_Port GPIOA
#define GYRO_CS_Pin GPIO_PIN_0
#define GYRO_CS_GPIO_Port GPIOB
#define ACCEL_CS_Pin GPIO_PIN_1
#define ACCEL_CS_GPIO_Port GPIOB
#define STOP_Pin GPIO_PIN_14
#define STOP_GPIO_Port GPIOB
#define GO_Pin GPIO_PIN_15
#define GO_GPIO_Port GPIOB
#define LED_B_Pin GPIO_PIN_8
#define LED_B_GPIO_Port GPIOA
#define LED_R_Pin GPIO_PIN_9
#define LED_R_GPIO_Port GPIOA
#define LED_G_Pin GPIO_PIN_10
#define LED_G_GPIO_Port GPIOA
#define E1B_Pin GPIO_PIN_4
#define E1B_GPIO_Port GPIOB
#define E1A_Pin GPIO_PIN_5
#define E1A_GPIO_Port GPIOB
#define E2A_Pin GPIO_PIN_6
#define E2A_GPIO_Port GPIOB
#define E2B_Pin GPIO_PIN_7
#define E2B_GPIO_Port GPIOB
#define BPHASE_Pin GPIO_PIN_8
#define BPHASE_GPIO_Port GPIOB
#define APHASE_Pin GPIO_PIN_9
#define APHASE_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
