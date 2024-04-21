#include "hc-sr04.h"

extern TIM_HandleTypeDef htim3;

uint32_t get_distance()
{
	// 1. Send a 10us HIGH pulse to the Trigger pin
	HAL_GPIO_WritePin(Trig_GPIO_Port, Trig_Pin, GPIO_PIN_SET);
	HAL_Delay(1);
	HAL_GPIO_WritePin(Trig_GPIO_Port, Trig_Pin, GPIO_PIN_RESET);

	// 2. Wait for the Echo pin to go HIGH
	while (HAL_GPIO_ReadPin(Echo_GPIO_Port, Echo_Pin) == GPIO_PIN_RESET)
		;
	__HAL_TIM_SetCounter(&htim3, 0);
	__HAL_TIM_ENABLE(&htim3);
	while (HAL_GPIO_ReadPin(Echo_GPIO_Port, Echo_Pin) == GPIO_PIN_SET)
		;
	uint32_t duration = __HAL_TIM_GET_COUNTER(&htim3);
	__HAL_TIM_DISABLE(&htim3);

	return (uint32_t)(duration * 0.034 / 2);
}