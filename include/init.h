#ifndef INIT_H_
#define INIT_H_

#include "stm32f4xx.h"
#include "stm32f4xx_hal.h"
#include "diag/Trace.h"
#include "fatfs.h"
#include "TM_lib/tm_stm32_rtc.h"
#include "config.h"

//global fatFs variables in main.c
extern SD_HandleTypeDef hsd;
extern HAL_SD_CardInfoTypedef SDCardInfo;
extern FATFS FS;
extern FIL log1;

//global HW handlers in main.c
extern ADC_HandleTypeDef hadc3;
extern UART_HandleTypeDef huart2;
extern UART_HandleTypeDef huart3;
extern UART_HandleTypeDef huart6;
extern I2C_HandleTypeDef hi2c2;
extern TIM_HandleTypeDef htim1;
extern TIM_HandleTypeDef htim2;
extern TIM_HandleTypeDef htim3;
extern char initStatus;
extern char sdStatus;

void initSystem();
void initRTC();
void initSD();
void initRCC();
void GPIO_Init();
void initADC();
void initRTC();
void initUARTs();
void initI2C();
void initTIMs();
void MX_NVIC_Init(void); //IT enabler

//init error codes
#define INIT_OK 0
#define RCC_INIT_ERROR 1
#define ERROR_NO_MOUNT 2
#define ERROR_ADC_INIT 3
#define ERROR_TIMER_INIT 4
#define ERROR_UART_INIT 5
#define ERROR_I2C_INIT 6
#define MPU_INIT_FAIL 7
#define DUST_ERROR 8
#define ERROR_FILE_OPEN 9
#define ERROR_RTC_NOT_SET 10




#endif
