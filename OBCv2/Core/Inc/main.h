/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2025 STMicroelectronics.
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
#include "stm32h7xx_hal.h"

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

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define MAG_CS_Pin GPIO_PIN_3
#define MAG_CS_GPIO_Port GPIOE
#define BARO_INT_Pin GPIO_PIN_13
#define BARO_INT_GPIO_Port GPIOC
#define BARO_CS_Pin GPIO_PIN_14
#define BARO_CS_GPIO_Port GPIOC
#define MAG_INT_Pin GPIO_PIN_15
#define MAG_INT_GPIO_Port GPIOC
#define uC_CLK_Pin GPIO_PIN_6
#define uC_CLK_GPIO_Port GPIOF
#define USB_HS_EN_Pin GPIO_PIN_10
#define USB_HS_EN_GPIO_Port GPIOF
#define PD_CTRL_Pin GPIO_PIN_2
#define PD_CTRL_GPIO_Port GPIOB
#define ESP_CS_Pin GPIO_PIN_11
#define ESP_CS_GPIO_Port GPIOD
#define ESP_BOOT_Pin GPIO_PIN_3
#define ESP_BOOT_GPIO_Port GPIOG
#define EN_ESP_Pin GPIO_PIN_6
#define EN_ESP_GPIO_Port GPIOG
#define DCMI_MCLK_Pin GPIO_PIN_15
#define DCMI_MCLK_GPIO_Port GPIOA
#define IMU_CS_Pin GPIO_PIN_4
#define IMU_CS_GPIO_Port GPIOD
#define IMU_INT_Pin GPIO_PIN_13
#define IMU_INT_GPIO_Port GPIOG

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
