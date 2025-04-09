//
// Created by 86178 on 2025/3/25.
//
#include "../Inc/key.h"


/**
 * @brief 判断按键是否按下
 * @param GPIOx
 * @param GPIO_Pin
 * @return 1：按键按下，0：按键未按下
 */
uint8_t if_press_key(GPIO_TypeDef *GPIOx, uint16_t GPIO_Pin)
{
    if(HAL_GPIO_ReadPin(GPIOx, GPIO_Pin) == GPIO_PIN_RESET)
    {
        while(HAL_GPIO_ReadPin(GPIOx, GPIO_Pin) == GPIO_PIN_RESET);
        HAL_Delay(10);
        if(HAL_GPIO_ReadPin(GPIOx, GPIO_Pin) == GPIO_PIN_SET){
            return 1;
        }
        else{
            return 0;
        }
    }
    else{
        return 0;
    }
}
