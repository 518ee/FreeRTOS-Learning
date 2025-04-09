//
// Created by 86178 on 2025/3/25.
//
#include "../Inc/led.h"

void led_off(GPIO_TypeDef *GPIOx, uint16_t GPIO_Pin)
{
    HAL_GPIO_WritePin(GPIOx, GPIO_Pin, GPIO_PIN_SET);
}

void led_on(GPIO_TypeDef *GPIOx, uint16_t GPIO_Pin)
{
    HAL_GPIO_WritePin(GPIOx, GPIO_Pin, GPIO_PIN_RESET);
}

void led_flip(GPIO_TypeDef *GPIOx, uint16_t GPIO_Pin)
{
    GPIO_PinState state_now = HAL_GPIO_ReadPin(GPIOx, GPIO_Pin);
    HAL_GPIO_WritePin(GPIOx, GPIO_Pin, !state_now);
}
