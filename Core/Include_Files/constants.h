//
// Created by Wiktor Wieclaw on 9/7/20.
//

#ifndef RCC_SYS_CONSTANTS_H
#define RCC_SYS_CONSTANTS_H

#include "hardware_config.h"
/* Numerical constants */

namespace constants {

#if HW_LCD_I2C_CONVERTER_TYPE_A
constexpr uint8_t lcdSlaveAddress = 0x7E;
#else
constexpr uint8_t lcdSlaveAddress = 0x4E;
#endif

constexpr uint8_t rtcSlaveAddress = 0x68 << 1;
}  // namespace constants

#endif  // RCC_SYS_CONSTANTS_H
