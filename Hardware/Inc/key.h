//
// Created by 86178 on 2025/3/25.
//

#ifndef FREERTOS_DEMO_KEY_H
#define FREERTOS_DEMO_KEY_H

#include "stm32f1xx_hal.h"

#define KEY0 if_press_key(GPIOB, GPIO_PIN_7)

uint8_t if_press_key(GPIO_TypeDef *GPIOx, uint16_t GPIO_Pin);

#endif //FREERTOS_DEMO_KEY_H
