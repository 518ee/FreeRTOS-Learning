//
// Created by 86178 on 2025/3/25.
//

#ifndef FREERTOS_DEMO_LED_H
#define FREERTOS_DEMO_LED_H

#include "stm32f1xx_hal.h"

#define LED0_OFF  led_off(GPIOB, GPIO_PIN_3)
#define LED0_ON   led_on(GPIOB, GPIO_PIN_3)
#define LED0_FLIP led_flip(GPIOB, GPIO_PIN_3)

#define LED1_OFF  led_off(GPIOB, GPIO_PIN_5)
#define LED1_ON   led_on(GPIOB, GPIO_PIN_5)
#define LED1_FLIP led_flip(GPIOB, GPIO_PIN_5)

void led_off(GPIO_TypeDef *GPIOx, uint16_t GPIO_Pin);
void led_on(GPIO_TypeDef *GPIOx, uint16_t GPIO_Pin);
void led_flip(GPIO_TypeDef *GPIOx, uint16_t GPIO_Pin);

#endif //FREERTOS_DEMO_LED_H
