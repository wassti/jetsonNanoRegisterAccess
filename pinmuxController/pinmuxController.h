/**
 * @file pinmuxController.h
 * @brief pinmux controller register declaration
 * @author Matthew Hardenburgh
 * @version 0.1
 * @date 3/6/21
 * @copyright Matthew Hardenburgh 2021
 *
 * @section license LICENSE
 * 
 * Jetson nano pinmux controller direct register access drivers
 * Copyright (C) 2021  Matthew Hardenburgh
 * mdhardenburgh@protonmail.com
 * 
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see https://www.gnu.org/licenses/.
 */ 

/**
 * @class PinmuxController
 * @brief Jetson pinmux controller register group 
 * 
 * @section Description
 *
 * The following class controls and configures the MPIO pads on a per pad basis
 * 
 * During normal operation, these per-pad controls are driven by the pinmux 
 * controller registers. See Section 9.6: Pinmuxing below for more information.
 *
 */

#ifndef PINMUX_CONTROLLER_H
#define PINMUX_CONTROLLER_H

#include <cstdint>

struct pinmuxController
{
    static const uint32_t baseAddress = 0x70003000;

    static const uint32_t DRV_TYPE_BIT_DRIVE_1X = 0;
    static const uint32_t DRV_TYPE_BIT_DRIVE_2X = 1;
    static const uint32_t DRV_TYPE_BIT_DRIVE_3X = 2;
    static const uint32_t DRV_TYPE_BIT_DRIVE_4X = 3;
    
    static const uint32_t E_SCHMT_TRIG_BIT_DISABLE = 0;
    static const uint32_t E_SCHMT_TRIG_BIT_ENABLE = 1;
    
    static const uint32_t E_HSM_BIT_DISABLE = 0;
    static const uint32_t E_HSM_BIT_ENABLE = 1;

    static const uint32_t LOCK_BIT_DISABLE = 0;
    static const uint32_t LOCK_BIT_ENABLE = 1;

    static const uint32_t E_INPUT_BIT_DISABLE = 0;
    static const uint32_t E_INPUT_BIT_ENABLE = 1;

    static const uint32_t PARK_BIT_NORMAL = 0;
    static const uint32_t PARK_BIT_PARKED = 1;

    static const uint32_t TRISTATE_BIT_PASSTHROUGH = 0;
    static const uint32_t TRISTATE_BIT_TRISTATE = 1;

    static const uint32_t PUPD_BIT_NONE = 0;
    static const uint32_t PUPD_BIT_PULL_DOWN = 1;
    static const uint32_t PUPD_BIT_PULL_UP = 2;
    static const uint32_t PUPD_BIT_RSVD = 3;

    static const uint32_t PM_BIT_SDMMC1 = 0;
    static const uint32_t PM_BIT_RSVD0 = 0;
    static const uint32_t PM_BIT_PE0 = 0;
    static const uint32_t PM_BIT_PE1 = 0;
    static const uint32_t PM_BIT_SATA = 0;
    static const uint32_t PM_BIT_SPI1 = 0;
    static const uint32_t PM_BIT_SPI2 = 0;
    static const uint32_t PM_BIT_SPI4 = 0;
    static const uint32_t PM_BIT_QSPI = 0;
    static const uint32_t PM_BIT_DMIC1 = 0;
    static const uint32_t PM_BIT_DMIC2 = 0;
    static const uint32_t PM_BIT_DMIC3 = 0;
    static const uint32_t PM_BIT_I2C1 = 0;
    static const uint32_t PM_BIT_I2C2 = 0;
    static const uint32_t PM_BIT_I2C3 = 0;
    static const uint32_t PM_BIT_I2CPMU = 0;
    static const uint32_t PM_BIT_UARTA = 0;
    static const uint32_t PM_BIT_UARTB = 0;
    static const uint32_t PM_BIT_UARTC = 0;
    static const uint32_t PM_BIT_UARTD = 0;
    static const uint32_t PM_BIT_I2S4B = 0;
    static const uint32_t PM_BIT_I2S1 = 0;
    static const uint32_t PM_BIT_I2S2 = 0;
    static const uint32_t PM_BIT_EXTPERIPH3 = 0;
    static const uint32_t PM_BIT_JTAG = 0;
    static const uint32_t PM_BIT_SOC = 0;
    static const uint32_t PM_BIT_BCL = 0;
    static const uint32_t PM_BIT_AUD = 0;
    static const uint32_t PM_BIT_CEC = 0;
    static const uint32_t PM_BIT_DP = 0;
    static const uint32_t PM_BIT_SPDIF_STATE_0 = 0;
    static const uint32_t PM_BIT_USB = 0;
    static const uint32_t PM_BIT_VGP1 = 0;
    static const uint32_t PM_BIT_VIMCLK = 0;
    static const uint32_t PM_BIT_VIMCLK2 = 0;
    static const uint32_t PM_BIT_VGP4 = 0;
    static const uint32_t PM_BIT_VGP5 = 0;
    static const uint32_t PM_BIT_VGP6 = 0;
    static const uint32_t PM_BIT_DISPLAYA = 0;
    static const uint32_t PM_BIT_DISPLAYB = 0;
    static const uint32_t PM_BIT_TOUCH = 0;
    static const uint32_t PM_BIT_IQC0 = 0;
    static const uint32_t PM_BIT_IQC1 = 0;
    static const uint32_t PM_BIT_SDMMC3 = 0;
    static const uint32_t PM_BIT_VGP3 = 1;
    static const uint32_t PM_BIT_VGP2 = 1;
    static const uint32_t PM_BIT_BLINK = 1;
    static const uint32_t PM_BIT_UART = 1;
    static const uint32_t PM_BIT_SPI4_STATE_1 = 1;
    static const uint32_t PM_BIT_I2S4A = 1;
    static const uint32_t PM_BIT_I2CVI = 1;
    static const uint32_t PM_BIT_I2S3 = 1;
    static const uint32_t PM_BIT_I2S4 = 1;
    static const uint32_t PM_BIT_I2S5A = 1;
    static const uint32_t PM_BIT_DTV = 1;
    static const uint32_t PM_BIT_RSVD1 = 1;
    static const uint32_t PM_BIT_CLDVFS = 1;
    static const uint32_t PM_BIT_UARTB_STATE_1 = 1;
    static const uint32_t PM_BIT_SDMMC1_STATE_1 = 1;
    static const uint32_t PM_BIT_CCLA = 1;
    static const uint32_t PM_BIT_SPDIF = 2;
    static const uint32_t PM_BIT_RSVD2 = 2;
    static const uint32_t PM_BIT_SPI3 = 2;
    static const uint32_t PM_BIT_PWM2 = 2;
    static const uint32_t PM_BIT_PWM3 = 2;
    static const uint32_t PM_BIT_UART_STATE_3 = 3;
    static const uint32_t PM_BIT_RSVD3 = 3;
};
/*
DO NOT USE. LEAVE IT AT THE DEFAULT VALUE.
onst uint32_t E_OD_BIT_DISABLE = 0;
const uint32_t E_OD_BIT_ENABLE = 1;
*/

const uint32_t E_IO_HV_BIT_DISABLE = 0;
const uint32_t E_IO_HV_BIT_ENABLE = 1;

const uint32_t E_LPDR_BIT_DISABLE = 0;
const uint32_t E_LPDR_BIT_ENABLE = 1;

const uint32_t E_PREEMP_BIT_DISABLE = 0;
const uint32_t E_PREEMP_BIT_ENABLE = 1;

const uint32_t pinMuxControlBase = 0x70000000 + 0x3000;
 
// 9.15.1
struct PINMUX_AUX_SDMMC1_CLK_0
{
    const uint32_t address = 0x70000000 + 0x3000;

    const uint32_t DRV_TYPE_bit = 13;
    const uint32_t DRV_TYPE_bitWidth = 2;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
     
    const uint32_t E_HSM_bit = 9;
    const uint32_t E_HSM_bitWidth = 1;
    
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;
};

// 9.15.2
struct PINMUX_AUX_SDMMC1_CMD_0
{
    const uint32_t address = 0x70000000 + 0x3004;

    const uint32_t DRV_TYPE_bit = 13;
    const uint32_t DRV_TYPE_bitWidth = 2;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
     
    const uint32_t E_HSM_bit = 9;
    const uint32_t E_HSM_bitWidth = 1;
    
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;
};

// 9.15.3
struct PINMUX_AUX_SDMMC1_DAT3_0
{
    const uint32_t address = 0x70000000 + 0x3008;

    const uint32_t DRV_TYPE_bit = 13;
    const uint32_t DRV_TYPE_bitWidth = 2;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
     
    const uint32_t E_HSM_bit = 9;
    const uint32_t E_HSM_bitWidth = 1;
    
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;
};

// 9.15.4
struct PINMUX_AUX_SDMMC1_DAT2_0
{
    const uint32_t address = 0x70000000 + 0x300C;

    const uint32_t DRV_TYPE_bit = 13;
    const uint32_t DRV_TYPE_bitWidth = 2;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
     
    const uint32_t E_HSM_bit = 9;
    const uint32_t E_HSM_bitWidth = 1;
    
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;
};

// 9.15.5
struct PINMUX_AUX_SDMMC1_DAT1_0
{
    const uint32_t address = 0x70000000 + 0x3010;

    const uint32_t DRV_TYPE_bit = 13;
    const uint32_t DRV_TYPE_bitWidth = 2;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
     
    const uint32_t E_HSM_bit = 9;
    const uint32_t E_HSM_bitWidth = 1;
    
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;
};

// 9.15.6
struct PINMUX_AUX_SDMMC1_DAT0_0
{
    const uint32_t address = 0x70000000 + 0x3014;

    const uint32_t DRV_TYPE_bit = 13;
    const uint32_t DRV_TYPE_bitWidth = 2;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
     
    const uint32_t E_HSM_bit = 9;
    const uint32_t E_HSM_bitWidth = 1;
    
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;
};

// 9.15.7
struct PINMUX_AUX_SDMMC3_CLK_0
{
    const uint32_t address = 0x70000000 + 0x301C;

    const uint32_t DRV_TYPE_bit = 13;
    const uint32_t DRV_TYPE_bitWidth = 2;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
     
    const uint32_t E_HSM_bit = 9;
    const uint32_t E_HSM_bitWidth = 1;
    
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;
};

// 9.15.8
struct PINMUX_AUX_SDMMC3_CMD_0
{
    const uint32_t address = 0x70000000 + 0x3020;

    const uint32_t DRV_TYPE_bit = 13;
    const uint32_t DRV_TYPE_bitWidth = 2;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
     
    const uint32_t E_HSM_bit = 9;
    const uint32_t E_HSM_bitWidth = 1;
    
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;
};

// 9.15.9
struct PINMUX_AUX_SDMMC3_DAT0_0
{
    const uint32_t address = 0x70000000 + 0x3024;

    const uint32_t DRV_TYPE_bit = 13;
    const uint32_t DRV_TYPE_bitWidth = 2;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
     
    const uint32_t E_HSM_bit = 9;
    const uint32_t E_HSM_bitWidth = 1;
    
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;
};

// 9.15.10
struct PINMUX_AUX_SDMMC3_DAT1_0
{
    const uint32_t address = 0x70000000 + 0x3028;

    const uint32_t DRV_TYPE_bit = 13;
    const uint32_t DRV_TYPE_bitWidth = 2;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
     
    const uint32_t E_HSM_bit = 9;
    const uint32_t E_HSM_bitWidth = 1;
    
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;
};

// 9.15.11
struct PINMUX_AUX_SDMMC3_DAT2_0
{
    const uint32_t address = 0x70000000 + 0x302C;

    const uint32_t DRV_TYPE_bit = 13;
    const uint32_t DRV_TYPE_bitWidth = 2;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
     
    const uint32_t E_HSM_bit = 9;
    const uint32_t E_HSM_bitWidth = 1;
    
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;
};

// 9.15.12
struct PINMUX_AUX_SDMMC3_DAT3_0
{
    const uint32_t address = 0x70000000 + 0x3030;

    const uint32_t DRV_TYPE_bit = 13;
    const uint32_t DRV_TYPE_bitWidth = 2;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
     
    const uint32_t E_HSM_bit = 9;
    const uint32_t E_HSM_bitWidth = 1;
    
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;
};

// 9.15.13
struct PINMUX_AUX_PEX_L0_RST_N_0
{
    const uint32_t address = 0x70000000 + 0x3038;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
    
    /*
    DO NOT USE. LEAVE IT AT THE DEFAULT VALUE.
    const uint32_t E_OD_bit = 11;
    const uint32_t E_OD_bitWidth = 1;
    */

    const uint32_t E_IO_HV_bit = 10;
    const uint32_t E_IO_HV_bitWidth = 1;
 
    const uint32_t E_LPDR_bit = 8;
    const uint32_t E_LPDR_bitWidth = 1;
    
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;
};

// 9.15.14
struct PINMUX_AUX_PEX_L0_CLKREQ_N_0
{
    const uint32_t address = 0x70000000 + 0x303C;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
    
    /*
    DO NOT USE. LEAVE IT AT THE DEFAULT VALUE.
    const uint32_t E_OD_bit = 11;
    const uint32_t E_OD_bitWidth = 1;
    */

    const uint32_t E_IO_HV_bit = 10;
    const uint32_t E_IO_HV_bitWidth = 1;
 
    const uint32_t E_LPDR_bit = 8;
    const uint32_t E_LPDR_bitWidth = 1;
    
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;
};

// 9.15.15
struct PINMUX_AUX_PEX_WAKE_N_0
{
    const uint32_t address = 0x70000000 + 0x3040;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
    
    /*
    DO NOT USE. LEAVE IT AT THE DEFAULT VALUE.
    const uint32_t E_OD_bit = 11;
    const uint32_t E_OD_bitWidth = 1;
    */

    const uint32_t E_IO_HV_bit = 10;
    const uint32_t E_IO_HV_bitWidth = 1;
 
    const uint32_t E_LPDR_bit = 8;
    const uint32_t E_LPDR_bitWidth = 1;
    
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;
};

// 9.15.16
struct PINMUX_AUX_PEX_L1_RST_N_0
{
    const uint32_t address = 0x70000000 + 0x3044;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
    
    /*
    DO NOT USE. LEAVE IT AT THE DEFAULT VALUE.
    const uint32_t E_OD_bit = 11;
    const uint32_t E_OD_bitWidth = 1;
    */

    const uint32_t E_IO_HV_bit = 10;
    const uint32_t E_IO_HV_bitWidth = 1;
 
    const uint32_t E_LPDR_bit = 8;
    const uint32_t E_LPDR_bitWidth = 1;
    
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;
};

// 9.15.17
struct PINMUX_AUX_PEX_L1_CLKREQ_N_0
{
    const uint32_t address = 0x70000000 + 0x3048;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
    
    /*
    DO NOT USE. LEAVE IT AT THE DEFAULT VALUE.
    const uint32_t E_OD_bit = 11;
    const uint32_t E_OD_bitWidth = 1;
    */

    const uint32_t E_IO_HV_bit = 10;
    const uint32_t E_IO_HV_bitWidth = 1;
 
    const uint32_t E_LPDR_bit = 8;
    const uint32_t E_LPDR_bitWidth = 1;
    
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;
};

// 9.15.18
struct PINMUX_AUX_SATA_LED_ACTIVE_0
{
    const uint32_t address = 0x70000000 + 0x304C;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
    
    /*
    DO NOT USE. LEAVE IT AT THE DEFAULT VALUE.
    const uint32_t E_OD_bit = 11;
    const uint32_t E_OD_bitWidth = 1;
    */

    const uint32_t E_LPDR_bit = 8;
    const uint32_t E_LPDR_bitWidth = 1;
    
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;
};

// 9.15.19
struct PINMUX_AUX_SPI1_MOSI_0
{
    const uint32_t address = 0x70000000 + 0x3050;

    const uint32_t E_PREEMP_bit = 15;
    const uint32_t E_PREEMP_bitWidth = 1;
 
    const uint32_t DRV_TYPE_bit = 13;
    const uint32_t DRV_TYPE_bitWidth = 2;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
     
    const uint32_t E_HSM_bit = 9;
    const uint32_t E_HSM_bitWidth = 1;
    
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;
};

// 9.15.20
struct PINMUX_AUX_SPI1_MISO_0
{
    const uint32_t address = 0x70000000 + 0x3054;

    const uint32_t E_PREEMP_bit = 15;
    const uint32_t E_PREEMP_bitWidth = 1;
 
    const uint32_t DRV_TYPE_bit = 13;
    const uint32_t DRV_TYPE_bitWidth = 2;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
     
    const uint32_t E_HSM_bit = 9;
    const uint32_t E_HSM_bitWidth = 1;
    
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;
};

// 9.15.21
struct PINMUX_AUX_SPI1_SCK_0
{
    const uint32_t address = 0x70000000 + 0x3058;

    const uint32_t E_PREEMP_bit = 15;
    const uint32_t E_PREEMP_bitWidth = 1;
 
    const uint32_t DRV_TYPE_bit = 13;
    const uint32_t DRV_TYPE_bitWidth = 2;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
     
    const uint32_t E_HSM_bit = 9;
    const uint32_t E_HSM_bitWidth = 1;
    
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;
};

// 9.15.22
struct PINMUX_AUX_SPI1_CS0_0
{
    const uint32_t address = 0x70000000 + 0x305C;

    const uint32_t E_PREEMP_bit = 15;
    const uint32_t E_PREEMP_bitWidth = 1;
 
    const uint32_t DRV_TYPE_bit = 13;
    const uint32_t DRV_TYPE_bitWidth = 2;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
     
    const uint32_t E_HSM_bit = 9;
    const uint32_t E_HSM_bitWidth = 1;
    
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;
};

// 9.15.23
struct PINMUX_AUX_SPI1_CS1_0
{
    const uint32_t address = 0x70000000 + 0x3060;

    const uint32_t E_PREEMP_bit = 15;
    const uint32_t E_PREEMP_bitWidth = 1;
 
    const uint32_t DRV_TYPE_bit = 13;
    const uint32_t DRV_TYPE_bitWidth = 2;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
     
    const uint32_t E_HSM_bit = 9;
    const uint32_t E_HSM_bitWidth = 1;
    
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;
};

// 9.15.24
struct PINMUX_AUX_SPI2_MOSI_0
{
    const uint32_t address = 0x70000000 + 0x3064;

    const uint32_t DRV_TYPE_bit = 13;
    const uint32_t DRV_TYPE_bitWidth = 2;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
     
    const uint32_t E_HSM_bit = 9;
    const uint32_t E_HSM_bitWidth = 1;
    
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;
};

// 9.15.25
struct PINMUX_AUX_SPI2_MISO_0
{
    const uint32_t address = 0x70000000 + 0x3068;

    const uint32_t DRV_TYPE_bit = 13;
    const uint32_t DRV_TYPE_bitWidth = 2;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
     
    const uint32_t E_HSM_bit = 9;
    const uint32_t E_HSM_bitWidth = 1;
    
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;
};

// 9.15.26
struct PINMUX_AUX_SPI2_SCK_0
{
    static const uint32_t addressOffset = 0x6C;

    static const uint32_t DRV_TYPE_bit = 13;
    static const uint32_t DRV_TYPE_bitWidth = 2;

    static const uint32_t E_SCHMT_bit = 12;
    static const uint32_t E_SCHMT_bitWidth = 1;
     
    static const uint32_t E_HSM_bit = 9;
    static const uint32_t E_HSM_bitWidth = 1;
    
    static const uint32_t LOCK_bit = 7;
    static const uint32_t LOCK_bitWidth = 1;

    static const uint32_t E_INPUT_bit = 6;
    static const uint32_t E_INPUT_bitWidth = 1;
 
    static const uint32_t PARK_bit = 5;
    static const uint32_t PARK_bitWidth = 1;

    static const uint32_t TRISTATE_bit = 4;
    static const uint32_t TRISTATE_bitWidth = 1;
    
    static const uint32_t PUPD_bit = 2;
    static const uint32_t PUPD_bitWidth = 2;

    static const uint32_t PM_bit = 0;
    static const uint32_t PM_bitWidth = 2;
};

// 9.15.27
struct PINMUX_AUX_SPI2_CSO_0
{
    const uint32_t address = 0x70000000 + 0x3070;

    const uint32_t DRV_TYPE_bit = 13;
    const uint32_t DRV_TYPE_bitWidth = 2;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
     
    const uint32_t E_HSM_bit = 9;
    const uint32_t E_HSM_bitWidth = 1;
    
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;
};

// 9.15.28
struct PINMUX_AUX_SPI2_CS1_0
{
    const uint32_t address = 0x70000000 + 0x3074;

    const uint32_t DRV_TYPE_bit = 13;
    const uint32_t DRV_TYPE_bitWidth = 2;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
     
    const uint32_t E_HSM_bit = 9;
    const uint32_t E_HSM_bitWidth = 1;
    
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;
};

// 9.15.29
struct PINMUX_AUX_SPI4_MOSI_0
{
    const uint32_t address = 0x70000000 + 0x3078;

    const uint32_t E_PREEMP_bit = 15;
    const uint32_t E_PREEMP_bitWidth = 1;

    const uint32_t DRV_TYPE_bit = 13;
    const uint32_t DRV_TYPE_bitWidth = 2;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
     
    const uint32_t E_HSM_bit = 9;
    const uint32_t E_HSM_bitWidth = 1;
    
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;
};

// 9.15.30
struct PINMUX_AUX_SPI4_MISO_0
{
    const uint32_t address = 0x70000000 + 0x307C;

    const uint32_t E_PREEMP_bit = 15;
    const uint32_t E_PREEMP_bitWidth = 1;

    const uint32_t DRV_TYPE_bit = 13;
    const uint32_t DRV_TYPE_bitWidth = 2;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
     
    const uint32_t E_HSM_bit = 9;
    const uint32_t E_HSM_bitWidth = 1;
    
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;
};

// 9.15.31
struct PINMUX_AUX_SPI4_SCK_0
{
    const uint32_t address = 0x70000000 + 0x3080;

    const uint32_t E_PREEMP_bit = 15;
    const uint32_t E_PREEMP_bitWidth = 1;

    const uint32_t DRV_TYPE_bit = 13;
    const uint32_t DRV_TYPE_bitWidth = 2;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
     
    const uint32_t E_HSM_bit = 9;
    const uint32_t E_HSM_bitWidth = 1;
    
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;
};

// 9.15.32
struct PINMUX_AUX_SPI4_CS0_0
{
    const uint32_t address = 0x70000000 + 0x3084;

    const uint32_t E_PREEMP_bit = 15;
    const uint32_t E_PREEMP_bitWidth = 1;

    const uint32_t DRV_TYPE_bit = 13;
    const uint32_t DRV_TYPE_bitWidth = 2;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
     
    const uint32_t E_HSM_bit = 9;
    const uint32_t E_HSM_bitWidth = 1;
    
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;
};

// 9.15.33
struct PINMUX_AUX_QSPI_SCK_0
{
    const uint32_t address = 0x70000000 + 0x3088;

    const uint32_t DRV_TYPE_bit = 13;
    const uint32_t DRV_TYPE_bitWidth = 2;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
     
    const uint32_t E_HSM_bit = 9;
    const uint32_t E_HSM_bitWidth = 1;
    
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;
};

// 9.15.34
struct PINMUX_AUX_QSPI_CS_N_0
{
    const uint32_t address = 0x70000000 + 0x308C;

    const uint32_t DRV_TYPE_bit = 13;
    const uint32_t DRV_TYPE_bitWidth = 2;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
     
    const uint32_t E_HSM_bit = 9;
    const uint32_t E_HSM_bitWidth = 1;
    
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;
};

// 9.15.35
struct PINMUX_AUX_QSPI_IO0_0
{
    const uint32_t address = 0x70000000 + 0x3090;

    const uint32_t DRV_TYPE_bit = 13;
    const uint32_t DRV_TYPE_bitWidth = 2;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
     
    const uint32_t E_HSM_bit = 9;
    const uint32_t E_HSM_bitWidth = 1;
    
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;
};

// 9.15.36
struct PINMUX_AUX_QSPI_IO1_0
{
    const uint32_t address = 0x70000000 + 0x3094;

    const uint32_t DRV_TYPE_bit = 13;
    const uint32_t DRV_TYPE_bitWidth = 2;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
     
    const uint32_t E_HSM_bit = 9;
    const uint32_t E_HSM_bitWidth = 1;
    
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;
};

// 9.15.37
struct PINMUX_AUX_QSPI_IO2_0
{
    const uint32_t address = 0x70000000 + 0x3098;

    const uint32_t DRV_TYPE_bit = 13;
    const uint32_t DRV_TYPE_bitWidth = 2;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
     
    const uint32_t E_HSM_bit = 9;
    const uint32_t E_HSM_bitWidth = 1;
    
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;
};

// 9.15.38
struct PINMUX_AUX_QSPI_IO3_0
{
    const uint32_t address = 0x70000000 + 0x309C;

    const uint32_t DRV_TYPE_bit = 13;
    const uint32_t DRV_TYPE_bitWidth = 2;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
     
    const uint32_t E_HSM_bit = 9;
    const uint32_t E_HSM_bitWidth = 1;
    
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;
};

// 9.15.39
struct PINMUX_AUX_DMIC1_CLK_0
{
    const uint32_t address = 0x70000000 + 0x30A4;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
     
    const uint32_t E_HSM_bit = 9;
    const uint32_t E_HSM_bitWidth = 1;
    
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;
};

// 9.15.40
struct PINMUX_AUX_DMIC1_DAT_0
{
    const uint32_t address = 0x70000000 + 0x30A8;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
     
    /*
    DO NOT USE. LEAVE IT AT THE DEFAULT VALUE.
    const uint32_t E_OD_bit = 11;
    const uint32_t E_OD_bitWidth = 1;
    */

    const uint32_t E_LPDR_bit = 8;
    const uint32_t E_LPDR_bitWidth = 1;
 
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;
};

// 9.15.41
struct PINMUX_AUX_DMIC2_CLK_0
{
    const uint32_t address = 0x70000000 + 0x30AC;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
    
    /*
    DO NOT USE. LEAVE IT AT THE DEFAULT VALUE.
    const uint32_t E_OD_bit = 11;
    const uint32_t E_OD_bitWidth = 1;
    */

    const uint32_t E_LPDR_bit = 8;
    const uint32_t E_LPDR_bitWidth = 1;
    
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;
};

// 9.15.42
struct PINMUX_AUX_DMIC2_DAT_0
{
    const uint32_t address = 0x70000000 + 0x30B0;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
    
    /*
    DO NOT USE. LEAVE IT AT THE DEFAULT VALUE.
    const uint32_t E_OD_bit = 11;
    const uint32_t E_OD_bitWidth = 1;
    */

    const uint32_t E_LPDR_bit = 8;
    const uint32_t E_LPDR_bitWidth = 1;
    
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;
};

// 9.15.43
struct PINMUX_AUX_DMIC3_CLK_0
{
    const uint32_t address = 0x70000000 + 0x30B4;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
    
    /*
    DO NOT USE. LEAVE IT AT THE DEFAULT VALUE.
    const uint32_t E_OD_bit = 11;
    const uint32_t E_OD_bitWidth = 1;
    */

    const uint32_t E_LPDR_bit = 8;
    const uint32_t E_LPDR_bitWidth = 1;
    
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;
};

// 9.15.44
struct PINMUX_AUX_DMIC3_DAT_0
{
    const uint32_t address = 0x70000000 + 0x30B8;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
    
    /*
    DO NOT USE. LEAVE IT AT THE DEFAULT VALUE.
    const uint32_t E_OD_bit = 11;
    const uint32_t E_OD_bitWidth = 1;
    */

    const uint32_t E_LPDR_bit = 8;
    const uint32_t E_LPDR_bitWidth = 1;
    
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;
};

// 9.15.45
struct PINMUX_AUX_GEN1_I2C_SCL_0
{
    const uint32_t address = 0x70000000 + 0x30BC;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
    
    /*
    DO NOT USE. LEAVE IT AT THE DEFAULT VALUE.
    const uint32_t E_OD_bit = 11;
    const uint32_t E_OD_bitWidth = 1;
    */

    const uint32_t E_IO_HV_bit = 10;
    const uint32_t E_IO_HV_bitWidth = 1;
 
    const uint32_t E_LPDR_bit = 8;
    const uint32_t E_LPDR_bitWidth = 1;
    
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;
};

// 9.15.46
struct PINMUX_AUX_GEN1_I2C_SDA_0
{
    const uint32_t address = 0x70000000 + 0x30C0;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
    
    /*
    DO NOT USE. LEAVE IT AT THE DEFAULT VALUE.
    const uint32_t E_OD_bit = 11;
    const uint32_t E_OD_bitWidth = 1;
    */

    const uint32_t E_IO_HV_bit = 10;
    const uint32_t E_IO_HV_bitWidth = 1;
 
    const uint32_t E_LPDR_bit = 8;
    const uint32_t E_LPDR_bitWidth = 1;
    
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;
};

// 9.15.47
struct PINMUX_AUX_GEN2_I2C_SCL_0
{
    const uint32_t address = 0x70000000 + 0x30C4;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
    
    /*
    DO NOT USE. LEAVE IT AT THE DEFAULT VALUE.
    const uint32_t E_OD_bit = 11;
    const uint32_t E_OD_bitWidth = 1;
    */

    const uint32_t E_IO_HV_bit = 10;
    const uint32_t E_IO_HV_bitWidth = 1;
 
    const uint32_t E_LPDR_bit = 8;
    const uint32_t E_LPDR_bitWidth = 1;
    
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;
};

// 9.15.48
struct PINMUX_AUX_GEN2_I2C_SDA_0
{
    const uint32_t address = 0x70000000 + 0x30C8;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
    
    /*
    DO NOT USE. LEAVE IT AT THE DEFAULT VALUE.
    const uint32_t E_OD_bit = 11;
    const uint32_t E_OD_bitWidth = 1;
    */

    const uint32_t E_IO_HV_bit = 10;
    const uint32_t E_IO_HV_bitWidth = 1;
 
    const uint32_t E_LPDR_bit = 8;
    const uint32_t E_LPDR_bitWidth = 1;
    
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;
};

// 9.15.49
struct PINMUX_AUX_GEN3_I2C_SCL_0
{
    const uint32_t address = 0x70000000 + 0x30CC;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
    
    /*
    DO NOT USE. LEAVE IT AT THE DEFAULT VALUE.
    const uint32_t E_OD_bit = 11;
    const uint32_t E_OD_bitWidth = 1;
    */

    const uint32_t E_IO_HV_bit = 10;
    const uint32_t E_IO_HV_bitWidth = 1;
 
    const uint32_t E_LPDR_bit = 8;
    const uint32_t E_LPDR_bitWidth = 1;
    
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;
};

// 9.15.50
struct PINMUX_AUX_GEN3_I2C_SDA_0
{
    const uint32_t address = 0x70000000 + 0x30D0;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
    
    /*
    DO NOT USE. LEAVE IT AT THE DEFAULT VALUE.
    const uint32_t E_OD_bit = 11;
    const uint32_t E_OD_bitWidth = 1;
    */

    const uint32_t E_IO_HV_bit = 10;
    const uint32_t E_IO_HV_bitWidth = 1;
 
    const uint32_t E_LPDR_bit = 8;
    const uint32_t E_LPDR_bitWidth = 1;
    
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;
};

// 9.15.51
struct PINMUX_AUX_CAM_I2C_SCL_0
{
    const uint32_t address = 0x70000000 + 0x30D4;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
    
    /*
    DO NOT USE. LEAVE IT AT THE DEFAULT VALUE.
    const uint32_t E_OD_bit = 11;
    const uint32_t E_OD_bitWidth = 1;
    */

    const uint32_t E_IO_HV_bit = 10;
    const uint32_t E_IO_HV_bitWidth = 1;
 
    const uint32_t E_LPDR_bit = 8;
    const uint32_t E_LPDR_bitWidth = 1;
    
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;
};

// 9.15.52
struct PINMUX_AUX_CAM_I2C_SDA_0
{
    const uint32_t address = 0x70000000 + 0x30D8;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
    
    /*
    DO NOT USE. LEAVE IT AT THE DEFAULT VALUE.
    const uint32_t E_OD_bit = 11;
    const uint32_t E_OD_bitWidth = 1;
    */

    const uint32_t E_IO_HV_bit = 10;
    const uint32_t E_IO_HV_bitWidth = 1;
 
    const uint32_t E_LPDR_bit = 8;
    const uint32_t E_LPDR_bitWidth = 1;
    
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;
};

// 9.15.53
struct PINMUX_AUX_PWR_I2C_SCL_0
{
    const uint32_t address = 0x70000000 + 0x30DC;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
    
    /*
    DO NOT USE. LEAVE IT AT THE DEFAULT VALUE.
    const uint32_t E_OD_bit = 11;
    const uint32_t E_OD_bitWidth = 1;
    */

    const uint32_t E_IO_HV_bit = 10;
    const uint32_t E_IO_HV_bitWidth = 1;
 
    const uint32_t E_LPDR_bit = 8;
    const uint32_t E_LPDR_bitWidth = 1;
    
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;
};

// 9.15.54
struct PINMUX_AUX_PWR_I2C_SDA_0
{
    const uint32_t address = 0x70000000 + 0x30E0;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
    
    /*
    DO NOT USE. LEAVE IT AT THE DEFAULT VALUE.
    const uint32_t E_OD_bit = 11;
    const uint32_t E_OD_bitWidth = 1;
    */

    const uint32_t E_IO_HV_bit = 10;
    const uint32_t E_IO_HV_bitWidth = 1;
 
    const uint32_t E_LPDR_bit = 8;
    const uint32_t E_LPDR_bitWidth = 1;
    
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;
};

// 9.15.55
struct PINMUX_AUX_UART1_TX_0
{
    const uint32_t address = 0x70000000 + 0x30E4;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
    
    /*
    DO NOT USE. LEAVE IT AT THE DEFAULT VALUE.
    const uint32_t E_OD_bit = 11;
    const uint32_t E_OD_bitWidth = 1;
    */

    const uint32_t E_LPDR_bit = 8;
    const uint32_t E_LPDR_bitWidth = 1;
    
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;
};

// 9.15.56
struct PINMUX_AUX_UART1_RX_0
{
    const uint32_t address = 0x70000000 + 0x30E48;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
    
    /*
    DO NOT USE. LEAVE IT AT THE DEFAULT VALUE.
    const uint32_t E_OD_bit = 11;
    const uint32_t E_OD_bitWidth = 1;
    */

    const uint32_t E_LPDR_bit = 8;
    const uint32_t E_LPDR_bitWidth = 1;
    
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;
};

// 9.15.57
struct PINMUX_AUX_UART1_RTS_0
{
    const uint32_t address = 0x70000000 + 0x30EC;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
    
    /*
    DO NOT USE. LEAVE IT AT THE DEFAULT VALUE.
    const uint32_t E_OD_bit = 11;
    const uint32_t E_OD_bitWidth = 1;
    */

    const uint32_t E_LPDR_bit = 8;
    const uint32_t E_LPDR_bitWidth = 1;
    
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;
};

// 9.15.58
struct PINMUX_AUX_UART1_CTS_0
{
    const uint32_t address = 0x70000000 + 0x30F0;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
    
    /*
    DO NOT USE. LEAVE IT AT THE DEFAULT VALUE.
    const uint32_t E_OD_bit = 11;
    const uint32_t E_OD_bitWidth = 1;
    */

    const uint32_t E_LPDR_bit = 8;
    const uint32_t E_LPDR_bitWidth = 1;
    
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;
};

// 9.15.59
struct PINMUX_AUX_UART2_TX_0
{
    const uint32_t address = 0x70000000 + 0x30F4;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
    
    /*
    DO NOT USE. LEAVE IT AT THE DEFAULT VALUE.
    const uint32_t E_OD_bit = 11;
    const uint32_t E_OD_bitWidth = 1;
    */

    const uint32_t E_LPDR_bit = 8;
    const uint32_t E_LPDR_bitWidth = 1;
    
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;
};

// 9.15.60
struct PINMUX_AUX_UART2_RX_0
{
    const uint32_t address = 0x70000000 + 0x30F8;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
    
    /*
    DO NOT USE. LEAVE IT AT THE DEFAULT VALUE.
    const uint32_t E_OD_bit = 11;
    const uint32_t E_OD_bitWidth = 1;
    */

    const uint32_t E_LPDR_bit = 8;
    const uint32_t E_LPDR_bitWidth = 1;
    
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;
};

// 9.15.61
struct PINMUX_AUX_UART2_RTS_0
{
    const uint32_t address = 0x70000000 + 0x30FC;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
    
    /*
    DO NOT USE. LEAVE IT AT THE DEFAULT VALUE.
    const uint32_t E_OD_bit = 11;
    const uint32_t E_OD_bitWidth = 1;
    */

    const uint32_t E_LPDR_bit = 8;
    const uint32_t E_LPDR_bitWidth = 1;
    
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;
};

// 9.15.62
struct PINMUX_AUX_UART2_CTS_0
{
    const uint32_t address = 0x70000000 + 0x3100;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
    
    /*
    DO NOT USE. LEAVE IT AT THE DEFAULT VALUE.
    const uint32_t E_OD_bit = 11;
    const uint32_t E_OD_bitWidth = 1;
    */

    const uint32_t E_LPDR_bit = 8;
    const uint32_t E_LPDR_bitWidth = 1;
    
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;
};

// 9.15.63
struct PINMUX_AUX_UART3_TX_0
{
    const uint32_t address = 0x70000000 + 0x3104;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
    
    /*
    DO NOT USE. LEAVE IT AT THE DEFAULT VALUE.
    const uint32_t E_OD_bit = 11;
    const uint32_t E_OD_bitWidth = 1;
    */

    const uint32_t E_LPDR_bit = 8;
    const uint32_t E_LPDR_bitWidth = 1;
    
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;
};

// 9.15.64
struct PINMUX_AUX_UART3_RX_0
{
    const uint32_t address = 0x70000000 + 0x3108;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
    
    /*
    DO NOT USE. LEAVE IT AT THE DEFAULT VALUE.
    const uint32_t E_OD_bit = 11;
    const uint32_t E_OD_bitWidth = 1;
    */

    const uint32_t E_LPDR_bit = 8;
    const uint32_t E_LPDR_bitWidth = 1;
    
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;
};

// 9.15.65
struct PINMUX_AUX_UART3_RTS_0
{
    const uint32_t address = 0x70000000 + 0x310C;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
    
    /*
    DO NOT USE. LEAVE IT AT THE DEFAULT VALUE.
    const uint32_t E_OD_bit = 11;
    const uint32_t E_OD_bitWidth = 1;
    */

    const uint32_t E_LPDR_bit = 8;
    const uint32_t E_LPDR_bitWidth = 1;
    
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;
};

// 9.15.66
struct PINMUX_AUX_UART3_CTS_0
{
    const uint32_t address = 0x70000000 + 0x3110;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
    
    /*
    DO NOT USE. LEAVE IT AT THE DEFAULT VALUE.
    const uint32_t E_OD_bit = 11;
    const uint32_t E_OD_bitWidth = 1;
    */

    const uint32_t E_LPDR_bit = 8;
    const uint32_t E_LPDR_bitWidth = 1;
    
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;
};

// 9.15.67
struct PINMUX_AUX_UART4_TX_0
{
    const uint32_t address = 0x70000000 + 0x3114;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
    
    /*
    DO NOT USE. LEAVE IT AT THE DEFAULT VALUE.
    const uint32_t E_OD_bit = 11;
    const uint32_t E_OD_bitWidth = 1;
    */

    const uint32_t E_LPDR_bit = 8;
    const uint32_t E_LPDR_bitWidth = 1;
    
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;
};

// 9.15.68
struct PINMUX_AUX_UART4_RX_0
{
    const uint32_t address = 0x70000000 + 0x3118;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
    
    /*
    DO NOT USE. LEAVE IT AT THE DEFAULT VALUE.
    const uint32_t E_OD_bit = 11;
    const uint32_t E_OD_bitWidth = 1;
    */

    const uint32_t E_LPDR_bit = 8;
    const uint32_t E_LPDR_bitWidth = 1;
    
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;
};

// 9.15.69
struct PINMUX_AUX_UART4_RTS_0
{
    const uint32_t address = 0x70000000 + 0x311C;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
    
    /*
    DO NOT USE. LEAVE IT AT THE DEFAULT VALUE.
    const uint32_t E_OD_bit = 11;
    const uint32_t E_OD_bitWidth = 1;
    */

    const uint32_t E_LPDR_bit = 8;
    const uint32_t E_LPDR_bitWidth = 1;
    
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;
};

// 9.15.70
struct PINMUX_AUX_UART4_CTS_0
{
    const uint32_t address = 0x70000000 + 0x3120;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
    
    /*
    DO NOT USE. LEAVE IT AT THE DEFAULT VALUE.
    const uint32_t E_OD_bit = 11;
    const uint32_t E_OD_bitWidth = 1;
    */

    const uint32_t E_LPDR_bit = 8;
    const uint32_t E_LPDR_bitWidth = 1;
    
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;
};

// 9.15.71
struct PINMUX_AUX_DAP1_FS_0
{
    const uint32_t address = 0x70000000 + 0x3124;

    const uint32_t DRV_TYPE_bit = 13;
    const uint32_t DRV_TYPE_bitWidth = 2;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
     
    const uint32_t E_HSM_bit = 9;
    const uint32_t E_HSM_bitWidth = 1;
 
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;
};

// 9.15.72
struct PINMUX_AUX_DAP1_DIN_0
{
    const uint32_t address = 0x70000000 + 0x3128;

    const uint32_t DRV_TYPE_bit = 13;
    const uint32_t DRV_TYPE_bitWidth = 2;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
     
    const uint32_t E_HSM_bit = 9;
    const uint32_t E_HSM_bitWidth = 1;
   
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;
};

// 9.15.73
struct PINMUX_AUX_DAP1_DOUT_0
{
    const uint32_t address = 0x70000000 + 0x312C;

    const uint32_t DRV_TYPE_bit = 13;
    const uint32_t DRV_TYPE_bitWidth = 2;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
     
    const uint32_t E_HSM_bit = 9;
    const uint32_t E_HSM_bitWidth = 1;
 
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;
};

// 9.15.74
struct PINMUX_AUX_DAP1_SCLK_0
{
    const uint32_t address = 0x70000000 + 0x3130;

    const uint32_t DRV_TYPE_bit = 13;
    const uint32_t DRV_TYPE_bitWidth = 2;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
     
    const uint32_t E_HSM_bit = 9;
    const uint32_t E_HSM_bitWidth = 1;
 
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;
};

// 9.15.75
struct PINMUX_AUX_DAP2_FS_0
{
    const uint32_t address = 0x70000000 + 0x3134;

    const uint32_t DRV_TYPE_bit = 13;
    const uint32_t DRV_TYPE_bitWidth = 2;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
     
    const uint32_t E_HSM_bit = 9;
    const uint32_t E_HSM_bitWidth = 1;
 
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;
};

// 9.15.76
struct PINMUX_AUX_DAP2_DIN_0
{
    const uint32_t address = 0x70000000 + 0x3138;

    const uint32_t DRV_TYPE_bit = 13;
    const uint32_t DRV_TYPE_bitWidth = 2;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
     
    const uint32_t E_HSM_bit = 9;
    const uint32_t E_HSM_bitWidth = 1;
   
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;
};

// 9.15.77
struct PINMUX_AUX_DAP2_DOUT_0
{
    const uint32_t address = 0x70000000 + 0x313C;

    const uint32_t DRV_TYPE_bit = 13;
    const uint32_t DRV_TYPE_bitWidth = 2;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
     
    const uint32_t E_HSM_bit = 9;
    const uint32_t E_HSM_bitWidth = 1;
 
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;
};

// 9.15.78
struct PINMUX_AUX_DAP2_SCLK_0
{
    const uint32_t address = 0x70000000 + 0x3140;

    const uint32_t DRV_TYPE_bit = 13;
    const uint32_t DRV_TYPE_bitWidth = 2;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
     
    const uint32_t E_HSM_bit = 9;
    const uint32_t E_HSM_bitWidth = 1;
 
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;
};

// 9.15.79
struct PINMUX_AUX_DAP4_FS_0
{
    const uint32_t address = 0x70000000 + 0x3144;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
    
    /*
    DO NOT USE. LEAVE IT AT THE DEFAULT VALUE.
    const uint32_t E_OD_bit = 11;
    const uint32_t E_OD_bitWidth = 1;
    */

    const uint32_t E_LPDR_bit = 8;
    const uint32_t E_LPDR_bitWidth = 1;
 
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;
};

// 9.15.80
struct PINMUX_AUX_DAP4_DIN_0
{
    const uint32_t address = 0x70000000 + 0x3148;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
    
    /*
    DO NOT USE. LEAVE IT AT THE DEFAULT VALUE.
    const uint32_t E_OD_bit = 11;
    const uint32_t E_OD_bitWidth = 1;
    */

    const uint32_t E_LPDR_bit = 8;
    const uint32_t E_LPDR_bitWidth = 1;
 
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;

};

// 9.15.81
struct PINMUX_AUX_DAP4_DOUT_0
{
    const uint32_t address = 0x70000000 + 0x314C;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
    
    /*
    DO NOT USE. LEAVE IT AT THE DEFAULT VALUE.
    const uint32_t E_OD_bit = 11;
    const uint32_t E_OD_bitWidth = 1;
    */

    const uint32_t E_LPDR_bit = 8;
    const uint32_t E_LPDR_bitWidth = 1;
 
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;

};

// 9.15.82
struct PINMUX_AUX_DAP4_SCLK_0
{
    static const uint32_t addressOffset = 0x3150;

    static const uint32_t E_SCHMT_bit = 12;
    static const uint32_t E_SCHMT_bitWidth = 1;
    
    /*
    DO NOT USE. LEAVE IT AT THE DEFAULT VALUE.
    static const uint32_t E_OD_bit = 11;
    static const uint32_t E_OD_bitWidth = 1;
    */

    static const uint32_t E_LPDR_bit = 8;
    static const uint32_t E_LPDR_bitWidth = 1;
 
    static const uint32_t LOCK_bit = 7;
    static const uint32_t LOCK_bitWidth = 1;

    static const uint32_t E_INPUT_bit = 6;
    static const uint32_t E_INPUT_bitWidth = 1;
 
    static const uint32_t PARK_bit = 5;
    static const uint32_t PARK_bitWidth = 1;

    static const uint32_t TRISTATE_bit = 4;
    static const uint32_t TRISTATE_bitWidth = 1;
    
    static const uint32_t PUPD_bit = 2;
    static const uint32_t PUPD_bitWidth = 2;

    static const uint32_t PM_bit = 0;
    static const uint32_t PM_bitWidth = 2;

};

// 9.15.83
struct PINMUX_AUX_CAM1_MCLK_0
{
    const uint32_t address = 0x70000000 + 0x3154;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
    
    /*
    DO NOT USE. LEAVE IT AT THE DEFAULT VALUE.
    const uint32_t E_OD_bit = 11;
    const uint32_t E_OD_bitWidth = 1;
    */

    const uint32_t E_LPDR_bit = 8;
    const uint32_t E_LPDR_bitWidth = 1;
 
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;

};

// 9.15.84
struct PINMUX_AUX_CAM2_MCLK_0
{
    const uint32_t address = 0x70000000 + 0x3158;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
    
    /*
    DO NOT USE. LEAVE IT AT THE DEFAULT VALUE.
    const uint32_t E_OD_bit = 11;
    const uint32_t E_OD_bitWidth = 1;
    */

    const uint32_t E_LPDR_bit = 8;
    const uint32_t E_LPDR_bitWidth = 1;
 
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;

};

// 9.15.85
struct PINMUX_AUX_JTAG_RTCK_0
{
    const uint32_t address = 0x70000000 + 0x315C;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
    
    /*
    DO NOT USE. LEAVE IT AT THE DEFAULT VALUE.
    const uint32_t E_OD_bit = 11;
    const uint32_t E_OD_bitWidth = 1;
    */

    const uint32_t E_LPDR_bit = 8;
    const uint32_t E_LPDR_bitWidth = 1;
 
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;

};

// 9.15.86
struct PINMUX_AUX_CLK_32K_IN_0
{
    const uint32_t address = 0x70000000 + 0x3160;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
    
    const uint32_t E_LPDR_bit = 8;
    const uint32_t E_LPDR_bitWidth = 1;
 
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

};

// 9.15.87
struct PINMUX_AUX_CLK_32K_OUT_0
{
    const uint32_t address = 0x70000000 + 0x3164;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
    
    /*
    DO NOT USE. LEAVE IT AT THE DEFAULT VALUE.
    const uint32_t E_OD_bit = 11;
    const uint32_t E_OD_bitWidth = 1;
    */

    const uint32_t E_LPDR_bit = 8;
    const uint32_t E_LPDR_bitWidth = 1;
 
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;

};

// 9.15.88
struct PINMUX_AUX_BATT_BCL_0
{
    const uint32_t address = 0x70000000 + 0x3168;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
    
    /*
    DO NOT USE. LEAVE IT AT THE DEFAULT VALUE.
    const uint32_t E_OD_bit = 11;
    const uint32_t E_OD_bitWidth = 1;
    */

    const uint32_t E_IO_HV_bit = 10;
    const uint32_t E_IO_HV_bitWidth = 1;
 
    const uint32_t E_LPDR_bit = 8;
    const uint32_t E_LPDR_bitWidth = 1;
 
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;

};

// 9.15.89
struct PINMUX_AUX_CLK_REQ_0
{
    const uint32_t address = 0x70000000 + 0x316C;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
    
    const uint32_t E_LPDR_bit = 8;
    const uint32_t E_LPDR_bitWidth = 1;
 
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

};

// 9.15.90
struct PINMUX_AUX_CPU_PWR_REQ_0
{
    const uint32_t address = 0x70000000 + 0x3170;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
    
    const uint32_t E_LPDR_bit = 8;
    const uint32_t E_LPDR_bitWidth = 1;
 
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

};

// 9.15.91
struct PINMUX_AUX_PWR_INT_N_0
{
    const uint32_t address = 0x70000000 + 0x3174;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
    
    const uint32_t E_LPDR_bit = 8;
    const uint32_t E_LPDR_bitWidth = 1;
 
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

};

// 9.15.92
struct PINMUX_AUX_SHUTDOWN_0
{
    const uint32_t address = 0x70000000 + 0x3178;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
    
    const uint32_t E_LPDR_bit = 8;
    const uint32_t E_LPDR_bitWidth = 1;
 
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

};

// 9.15.93
struct PINMUX_AUX_CORE_PWR_REQ_0
{
    const uint32_t address = 0x70000000 + 0x317C;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
    
    const uint32_t E_LPDR_bit = 8;
    const uint32_t E_LPDR_bitWidth = 1;
 
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

};

// 9.15.94
struct PINMUX_AUX_AUD_MCLK_0
{
    const uint32_t address = 0x70000000 + 0x3180;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
    
    /*
    DO NOT USE. LEAVE IT AT THE DEFAULT VALUE.
    const uint32_t E_OD_bit = 11;
    const uint32_t E_OD_bitWidth = 1;
    */

    const uint32_t E_LPDR_bit = 8;
    const uint32_t E_LPDR_bitWidth = 1;
 
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;

};

// 9.15.95
struct PINMUX_AUX_DVFS_PWM_0
{
    const uint32_t address = 0x70000000 + 0x3184;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
    
    /*
    DO NOT USE. LEAVE IT AT THE DEFAULT VALUE.
    const uint32_t E_OD_bit = 11;
    const uint32_t E_OD_bitWidth = 1;
    */

    const uint32_t E_LPDR_bit = 8;
    const uint32_t E_LPDR_bitWidth = 1;
 
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;

};

// 9.15.96
struct PINMUX_AUX_DVFS_CLK_0
{
    const uint32_t address = 0x70000000 + 0x3188;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
    
    /*
    DO NOT USE. LEAVE IT AT THE DEFAULT VALUE.
    const uint32_t E_OD_bit = 11;
    const uint32_t E_OD_bitWidth = 1;
    */

    const uint32_t E_LPDR_bit = 8;
    const uint32_t E_LPDR_bitWidth = 1;
 
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;

};

// 9.15.97
struct PINMUX_AUX_GPIO_X1_AUD_0
{
    const uint32_t address = 0x70000000 + 0x318C;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
    
    /*
    DO NOT USE. LEAVE IT AT THE DEFAULT VALUE.
    const uint32_t E_OD_bit = 11;
    const uint32_t E_OD_bitWidth = 1;
    */

    const uint32_t E_LPDR_bit = 8;
    const uint32_t E_LPDR_bitWidth = 1;
 
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;

};

// 9.15.98
struct PINMUX_AUX_GPIO_X3_AUD_0
{
    const uint32_t address = 0x70000000 + 0x3190;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
    
    /*
    DO NOT USE. LEAVE IT AT THE DEFAULT VALUE.
    const uint32_t E_OD_bit = 11;
    const uint32_t E_OD_bitWidth = 1;
    */

    const uint32_t E_LPDR_bit = 8;
    const uint32_t E_LPDR_bitWidth = 1;
 
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATEf_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;

};

// 9.15.99
struct PINMUX_AUX_GPIO_PCC7_0
{
    const uint32_t address = 0x70000000 + 0x3194;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
    
    /*
    DO NOT USE. LEAVE IT AT THE DEFAULT VALUE.
    const uint32_t E_OD_bit = 11;
    const uint32_t E_OD_bitWidth = 1;
    */

    const uint32_t E_IO_HV_bit = 10;
    const uint32_t E_IO_HV_bitWidth = 1;
 
    const uint32_t E_LPDR_bit = 8;
    const uint32_t E_LPDR_bitWidth = 1;
 
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;

};

// 9.15.100
struct PINMUX_AUX_HDMI_CEC_0
{
    const uint32_t address = 0x70000000 + 0x3198;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
    
    /*
    DO NOT USE. LEAVE IT AT THE DEFAULT VALUE.
    const uint32_t E_OD_bit = 11;
    const uint32_t E_OD_bitWidth = 1;
    */

    const uint32_t E_IO_HV_bit = 10;
    const uint32_t E_IO_HV_bitWidth = 1;
 
    const uint32_t E_LPDR_bit = 8;
    const uint32_t E_LPDR_bitWidth = 1;
 
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;

};

// 9.15.101
struct PINMUX_AUX_HDMI_INT_DP_HPD_0
{
    const uint32_t address = 0x70000000 + 0x319C;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
    
    /*
    DO NOT USE. LEAVE IT AT THE DEFAULT VALUE.
    const uint32_t E_OD_bit = 11;
    const uint32_t E_OD_bitWidth = 1;
    */

    const uint32_t E_IO_HV_bit = 10;
    const uint32_t E_IO_HV_bitWidth = 1;
 
    const uint32_t E_LPDR_bit = 8;
    const uint32_t E_LPDR_bitWidth = 1;
 
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;

};

// 9.15.102
struct PINMUX_AUX_SPDIF_OUT_0
{
    const uint32_t address = 0x70000000 + 0x31A0;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
    
    /*
    DO NOT USE. LEAVE IT AT THE DEFAULT VALUE.
    const uint32_t E_OD_bit = 11;
    const uint32_t E_OD_bitWidth = 1;
    */

    const uint32_t E_LPDR_bit = 8;
    const uint32_t E_LPDR_bitWidth = 1;
 
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;

};

// 9.15.103
struct PINMUX_AUX_SPDIF_IN_0
{
    const uint32_t address = 0x70000000 + 0x31A4;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
    
    /*
    DO NOT USE. LEAVE IT AT THE DEFAULT VALUE.
    const uint32_t E_OD_bit = 11;
    const uint32_t E_OD_bitWidth = 1;
    */

    const uint32_t E_LPDR_bit = 8;
    const uint32_t E_LPDR_bitWidth = 1;
 
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;

};

// 9.15.104
struct PINMUX_AUX_USB_VBUS_EN0_0
{
    const uint32_t address = 0x70000000 + 0x31A8;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
    
    /*
    DO NOT USE. LEAVE IT AT THE DEFAULT VALUE.
    const uint32_t E_OD_bit = 11;
    const uint32_t E_OD_bitWidth = 1;
    */

    const uint32_t E_IO_HV_bit = 10;
    const uint32_t E_IO_HV_bitWidth = 1;
 
    const uint32_t E_LPDR_bit = 8;
    const uint32_t E_LPDR_bitWidth = 1;
 
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;

};

// 9.15.105
struct PINMUX_AUX_USB_VBUS_EN1_0
{
    const uint32_t address = 0x70000000 + 0x31AC;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
    
    /*
    DO NOT USE. LEAVE IT AT THE DEFAULT VALUE.
    const uint32_t E_OD_bit = 11;
    const uint32_t E_OD_bitWidth = 1;
    */

    const uint32_t E_IO_HV_bit = 10;
    const uint32_t E_IO_HV_bitWidth = 1;
 
    const uint32_t E_LPDR_bit = 8;
    const uint32_t E_LPDR_bitWidth = 1;
 
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;

};

// 9.15.106
struct PINMUX_AUX_DP_HPD0_0
{
    const uint32_t address = 0x70000000 + 0x31B0;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
    
    /*
    DO NOT USE. LEAVE IT AT THE DEFAULT VALUE.
    const uint32_t E_OD_bit = 11;
    const uint32_t E_OD_bitWidth = 1;
    */

    const uint32_t E_LPDR_bit = 8;
    const uint32_t E_LPDR_bitWidth = 1;
 
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;

};

// 9.15.107
struct PINMUX_AUX_WIFI_EN_0
{
    const uint32_t address = 0x70000000 + 0x31B4;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
    
    /*
    DO NOT USE. LEAVE IT AT THE DEFAULT VALUE.
    const uint32_t E_OD_bit = 11;
    const uint32_t E_OD_bitWidth = 1;
    */

    const uint32_t E_LPDR_bit = 8;
    const uint32_t E_LPDR_bitWidth = 1;
 
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;

};

// 9.15.108
struct PINMUX_AUX_WIFI_RST_0
{
    const uint32_t address = 0x70000000 + 0x31B8;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
    
    /*
    DO NOT USE. LEAVE IT AT THE DEFAULT VALUE.
    const uint32_t E_OD_bit = 11;
    const uint32_t E_OD_bitWidth = 1;
    */

    const uint32_t E_LPDR_bit = 8;
    const uint32_t E_LPDR_bitWidth = 1;
 
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;

};

// 9.15.109
struct PINMUX_AUX_WIFI_WAKE_AP_0
{
    const uint32_t address = 0x70000000 + 0x31BC;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
    
    /*
    DO NOT USE. LEAVE IT AT THE DEFAULT VALUE.
    const uint32_t E_OD_bit = 11;
    const uint32_t E_OD_bitWidth = 1;
    */

    const uint32_t E_LPDR_bit = 8;
    const uint32_t E_LPDR_bitWidth = 1;
 
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;

};

// 9.15.110
struct PINMUX_AUX_AP_WAKE_BT_0
{
    const uint32_t address = 0x70000000 + 0x31C0;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
    
    /*
    DO NOT USE. LEAVE IT AT THE DEFAULT VALUE.
    const uint32_t E_OD_bit = 11;
    const uint32_t E_OD_bitWidth = 1;
    */

    const uint32_t E_LPDR_bit = 8;
    const uint32_t E_LPDR_bitWidth = 1;
 
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;

};

// 9.15.111
struct PINMUX_AUX_BT_RST_0
{
    const uint32_t address = 0x70000000 + 0x31C4;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
    
    /*
    DO NOT USE. LEAVE IT AT THE DEFAULT VALUE.
    const uint32_t E_OD_bit = 11;
    const uint32_t E_OD_bitWidth = 1;
    */

    const uint32_t E_LPDR_bit = 8;
    const uint32_t E_LPDR_bitWidth = 1;
 
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;

};

// 9.15.112
struct PINMUX_AUX_BT_WAKE_AP_0
{
    const uint32_t address = 0x70000000 + 0x31C8;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
    
    /*
    DO NOT USE. LEAVE IT AT THE DEFAULT VALUE.
    const uint32_t E_OD_bit = 11;
    const uint32_t E_OD_bitWidth = 1;
    */

    const uint32_t E_LPDR_bit = 8;
    const uint32_t E_LPDR_bitWidth = 1;
 
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;

};

// 9.15.113
struct PINMUX_AUX_AP_WAKE_NFC_0
{
    const uint32_t address = 0x70000000 + 0x31CC;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
    
    /*
    DO NOT USE. LEAVE IT AT THE DEFAULT VALUE.
    const uint32_t E_OD_bit = 11;
    const uint32_t E_OD_bitWidth = 1;
    */

    const uint32_t E_LPDR_bit = 8;
    const uint32_t E_LPDR_bitWidth = 1;
 
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;

};

// 9.15.114
struct PINMUX_AUX_NFC_EN_0
{
    const uint32_t address = 0x70000000 + 0x31D0;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
    
    /*
    DO NOT USE. LEAVE IT AT THE DEFAULT VALUE.
    const uint32_t E_OD_bit = 11;
    const uint32_t E_OD_bitWidth = 1;
    */

    const uint32_t E_LPDR_bit = 8;
    const uint32_t E_LPDR_bitWidth = 1;
 
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;

};

// 9.15.115
struct PINMUX_AUX_NFC_INT_0
{
    const uint32_t address = 0x70000000 + 0x31D4;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
    
    /*
    DO NOT USE. LEAVE IT AT THE DEFAULT VALUE.
    const uint32_t E_OD_bit = 11;
    const uint32_t E_OD_bitWidth = 1;
    */

    const uint32_t E_LPDR_bit = 8;
    const uint32_t E_LPDR_bitWidth = 1;
 
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;

};

// 9.15.116
struct PINMUX_AUX_GPS_EN_0
{
    const uint32_t address = 0x70000000 + 0x31D8;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
    
    /*
    DO NOT USE. LEAVE IT AT THE DEFAULT VALUE.
    const uint32_t E_OD_bit = 11;
    const uint32_t E_OD_bitWidth = 1;
    */

    const uint32_t E_LPDR_bit = 8;
    const uint32_t E_LPDR_bitWidth = 1;
 
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;

};

// 9.15.117
struct PINMUX_AUX_GPS_RST_0
{
    const uint32_t address = 0x70000000 + 0x31DC;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
    
    /*
    DO NOT USE. LEAVE IT AT THE DEFAULT VALUE.
    const uint32_t E_OD_bit = 11;
    const uint32_t E_OD_bitWidth = 1;
    */

    const uint32_t E_LPDR_bit = 8;
    const uint32_t E_LPDR_bitWidth = 1;
 
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;

};

// 9.15.118
struct PINMUX_AUX_CAM_RST_0
{
    const uint32_t address = 0x70000000 + 0x31E0;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
    
    /*
    DO NOT USE. LEAVE IT AT THE DEFAULT VALUE.
    const uint32_t E_OD_bit = 11;
    const uint32_t E_OD_bitWidth = 1;
    */

    const uint32_t E_LPDR_bit = 8;
    const uint32_t E_LPDR_bitWidth = 1;
 
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;

};

// 9.15.119
struct PINMUX_AUX_CAM_AF_EN_0
{
    const uint32_t address = 0x70000000 + 0x31E4;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
    
    /*
    DO NOT USE. LEAVE IT AT THE DEFAULT VALUE.
    const uint32_t E_OD_bit = 11;
    const uint32_t E_OD_bitWidth = 1;
    */

    const uint32_t E_LPDR_bit = 8;
    const uint32_t E_LPDR_bitWidth = 1;
 
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;

};

// 9.15.120
struct PINMUX_AUX_CAM_FLASH_EN_0
{
    const uint32_t address = 0x70000000 + 0x31E8;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
    
    /*
    DO NOT USE. LEAVE IT AT THE DEFAULT VALUE.
    const uint32_t E_OD_bit = 11;
    const uint32_t E_OD_bitWidth = 1;
    */

    const uint32_t E_LPDR_bit = 8;
    const uint32_t E_LPDR_bitWidth = 1;
 
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;

};

// 9.15.121
struct PINMUX_AUX_CAM1_PWDN_0
{
    const uint32_t address = 0x70000000 + 0x31EC;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
    
    /*
    DO NOT USE. LEAVE IT AT THE DEFAULT VALUE.
    const uint32_t E_OD_bit = 11;
    const uint32_t E_OD_bitWidth = 1;
    */

    const uint32_t E_LPDR_bit = 8;
    const uint32_t E_LPDR_bitWidth = 1;
 
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;

};

// 9.15.122
struct PINMUX_AUX_CAM2_PWDN_0
{
    const uint32_t address = 0x70000000 + 0x31F0;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
    
    /*
    DO NOT USE. LEAVE IT AT THE DEFAULT VALUE.
    const uint32_t E_OD_bit = 11;
    const uint32_t E_OD_bitWidth = 1;
    */

    const uint32_t E_LPDR_bit = 8;
    const uint32_t E_LPDR_bitWidth = 1;
 
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;

};

// 9.15.123
struct PINMUX_AUX_CAM1_STROBE_0
{
    const uint32_t address = 0x70000000 + 0x31F4;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
    
    /*
    DO NOT USE. LEAVE IT AT THE DEFAULT VALUE.
    const uint32_t E_OD_bit = 11;
    const uint32_t E_OD_bitWidth = 1;
    */

    const uint32_t E_LPDR_bit = 8;
    const uint32_t E_LPDR_bitWidth = 1;
 
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;

};

// 9.15.124
struct PINMUX_AUX_LCD_TE_0
{
    static const uint32_t addressOffset = 0x31F8;

    static const uint32_t E_SCHMT_bit = 12;
    static const uint32_t E_SCHMT_bitWidth = 1;
    
    /*
    DO NOT USE. LEAVE IT AT THE DEFAULT VALUE.
    static const uint32_t E_OD_bit = 11;
    static const uint32_t E_OD_bitWidth = 1;
    */

    static const uint32_t E_LPDR_bit = 8;
    static const uint32_t E_LPDR_bitWidth = 1;
 
    static const uint32_t LOCK_bit = 7;
    static const uint32_t LOCK_bitWidth = 1;

    static const uint32_t E_INPUT_bit = 6;
    static const uint32_t E_INPUT_bitWidth = 1;
 
    static const uint32_t PARK_bit = 5;
    static const uint32_t PARK_bitWidth = 1;

    static const uint32_t TRISTATE_bit = 4;
    static const uint32_t TRISTATE_bitWidth = 1;
    
    static const uint32_t PUPD_bit = 2;
    static const uint32_t PUPD_bitWidth = 2;

    static const uint32_t PM_bit = 0;
    static const uint32_t PM_bitWidth = 2;

};

// 9.15.125
struct PINMUX_AUX_LCD_BL_PWM_0
{
    const uint32_t address = 0x70000000 + 0x31FC;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
    
    /*
    DO NOT USE. LEAVE IT AT THE DEFAULT VALUE.
    const uint32_t E_OD_bit = 11;
    const uint32_t E_OD_bitWidth = 1;
    */

    const uint32_t E_LPDR_bit = 8;
    const uint32_t E_LPDR_bitWidth = 1;
 
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;

};

// 9.15.126
struct PINMUX_AUX_LCD_BL_EN_0
{
    const uint32_t address = 0x70000000 + 0x3200;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
    
    /*
    DO NOT USE. LEAVE IT AT THE DEFAULT VALUE.
    const uint32_t E_OD_bit = 11;
    const uint32_t E_OD_bitWidth = 1;
    */

    const uint32_t E_LPDR_bit = 8;
    const uint32_t E_LPDR_bitWidth = 1;
 
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;

};

// 9.15.127
struct PINMUX_AUX_LCD_RST_0
{
    const uint32_t address = 0x70000000 + 0x3204;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
    
    /*
    DO NOT USE. LEAVE IT AT THE DEFAULT VALUE.
    const uint32_t E_OD_bit = 11;
    const uint32_t E_OD_bitWidth = 1;
    */

    const uint32_t E_LPDR_bit = 8;
    const uint32_t E_LPDR_bitWidth = 1;
 
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;

};

// 9.15.128
struct PINMUX_AUX_LCD_GPIO1_0
{
    const uint32_t address = 0x70000000 + 0x3208;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
    
    /*
    DO NOT USE. LEAVE IT AT THE DEFAULT VALUE.
    const uint32_t E_OD_bit = 11;
    const uint32_t E_OD_bitWidth = 1;
    */

    const uint32_t E_LPDR_bit = 8;
    const uint32_t E_LPDR_bitWidth = 1;
 
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;

};

// 9.15.129
struct PINMUX_AUX_LCD_GPIO2_0
{
    const uint32_t address = 0x70000000 + 0x320C;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
    
    /*
    DO NOT USE. LEAVE IT AT THE DEFAULT VALUE.
    const uint32_t E_OD_bit = 11;
    const uint32_t E_OD_bitWidth = 1;
    */

    const uint32_t E_LPDR_bit = 8;
    const uint32_t E_LPDR_bitWidth = 1;
 
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;

};

// 9.15.130
struct PINMUX_AUX_AP_READY_0 
{
    const uint32_t address = 0x70000000 + 0x3210;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
    
    /*
    DO NOT USE. LEAVE IT AT THE DEFAULT VALUE.
    const uint32_t E_OD_bit = 11;
    const uint32_t E_OD_bitWidth = 1;
    */

    const uint32_t E_LPDR_bit = 8;
    const uint32_t E_LPDR_bitWidth = 1;
 
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;

};

// 9.15.131
struct PINMUX_AUX_TOUCH_RST_0
{
    const uint32_t address = 0x70000000 + 0x3214;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
    
    /*
    DO NOT USE. LEAVE IT AT THE DEFAULT VALUE.
    const uint32_t E_OD_bit = 11;
    const uint32_t E_OD_bitWidth = 1;
    */

    const uint32_t E_LPDR_bit = 8;
    const uint32_t E_LPDR_bitWidth = 1;
 
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;

};

// 9.15.132
struct PINMUX_AUX_TOUCH_CLK_0
{
    const uint32_t address = 0x70000000 + 0x3218;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
    
    /*
    DO NOT USE. LEAVE IT AT THE DEFAULT VALUE.
    const uint32_t E_OD_bit = 11;
    const uint32_t E_OD_bitWidth = 1;
    */

    const uint32_t E_LPDR_bit = 8;
    const uint32_t E_LPDR_bitWidth = 1;
 
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;

};

// 9.15.133
struct PINMUX_AUX_MODEM_WAKE_AP_0
{
    const uint32_t address = 0x70000000 + 0x321C;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
    
    /*
    DO NOT USE. LEAVE IT AT THE DEFAULT VALUE.
    const uint32_t E_OD_bit = 11;
    const uint32_t E_OD_bitWidth = 1;
    */

    const uint32_t E_LPDR_bit = 8;
    const uint32_t E_LPDR_bitWidth = 1;
 
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;

};

// 9.15.134
struct PINMUX_AUX_TOUCH_INT_0
{
    const uint32_t address = 0x70000000 + 0x3220;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
    
    /*
    DO NOT USE. LEAVE IT AT THE DEFAULT VALUE.
    const uint32_t E_OD_bit = 11;
    const uint32_t E_OD_bitWidth = 1;
    */

    const uint32_t E_LPDR_bit = 8;
    const uint32_t E_LPDR_bitWidth = 1;
 
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;

};

// 9.15.135
struct PINMUX_AUX_MOTION_INT_0
{
    const uint32_t address = 0x70000000 + 0x3224;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
    
    /*
    DO NOT USE. LEAVE IT AT THE DEFAULT VALUE.
    const uint32_t E_OD_bit = 11;
    const uint32_t E_OD_bitWidth = 1;
    */

    const uint32_t E_LPDR_bit = 8;
    const uint32_t E_LPDR_bitWidth = 1;
 
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;

};

// 9.15.136
struct PINMUX_AUX_ALS_PROX_INT_0
{
    const uint32_t address = 0x70000000 + 0x3228;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
    
    /*
    DO NOT USE. LEAVE IT AT THE DEFAULT VALUE.
    const uint32_t E_OD_bit = 11;
    const uint32_t E_OD_bitWidth = 1;
    */

    const uint32_t E_LPDR_bit = 8;
    const uint32_t E_LPDR_bitWidth = 1;
 
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;

};

// 9.15.137
struct PINMUX_AUX_TEMP_ALERT_0
{
    const uint32_t address = 0x70000000 + 0x322C;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
    
    /*
    DO NOT USE. LEAVE IT AT THE DEFAULT VALUE.
    const uint32_t E_OD_bit = 11;
    const uint32_t E_OD_bitWidth = 1;
    */

    const uint32_t E_LPDR_bit = 8;
    const uint32_t E_LPDR_bitWidth = 1;
 
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;

};

// 9.15.138
struct PINMUX_AUX_BUTTON_POWER_ON_0
{
    const uint32_t address = 0x70000000 + 0x3230;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
    
    /*
    DO NOT USE. LEAVE IT AT THE DEFAULT VALUE.
    const uint32_t E_OD_bit = 11;
    const uint32_t E_OD_bitWidth = 1;
    */

    const uint32_t E_LPDR_bit = 8;
    const uint32_t E_LPDR_bitWidth = 1;
 
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;

};

// 9.15.139
struct PINMUX_AUX_BUTTON_VOL_UP_0
{
    const uint32_t address = 0x70000000 + 0x3234;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
    
    /*
    DO NOT USE. LEAVE IT AT THE DEFAULT VALUE.
    const uint32_t E_OD_bit = 11;
    const uint32_t E_OD_bitWidth = 1;
    */

    const uint32_t E_LPDR_bit = 8;
    const uint32_t E_LPDR_bitWidth = 1;
 
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;

};

// 9.15.140
struct PINMUX_AUX_BUTTON_VOL_DOWN_0
{
    const uint32_t address = 0x70000000 + 0x3238;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
    
    /*
    DO NOT USE. LEAVE IT AT THE DEFAULT VALUE.
    const uint32_t E_OD_bit = 11;
    const uint32_t E_OD_bitWidth = 1;
    */

    const uint32_t E_LPDR_bit = 8;
    const uint32_t E_LPDR_bitWidth = 1;
 
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;

};

// 9.15.141
struct PINMUX_AUX_BUTTON_SLIDE_SW_0
{
    const uint32_t address = 0x70000000 + 0x323C;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
    
    /*
    DO NOT USE. LEAVE IT AT THE DEFAULT VALUE.
    const uint32_t E_OD_bit = 11;
    const uint32_t E_OD_bitWidth = 1;
    */

    const uint32_t E_LPDR_bit = 8;
    const uint32_t E_LPDR_bitWidth = 1;
 
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;

};

// 9.15.142
struct PINMUX_AUX_BUTTON_HOME_0
{
    const uint32_t address = 0x70000000 + 0x3240;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
    
    /*
    DO NOT USE. LEAVE IT AT THE DEFAULT VALUE.
    const uint32_t E_OD_bit = 11;
    const uint32_t E_OD_bitWidth = 1;
    */

    const uint32_t E_LPDR_bit = 8;
    const uint32_t E_LPDR_bitWidth = 1;
 
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;

};

// 9.15.143
struct PINMUX_AUX_GPIO_PA6_0
{
    const uint32_t address = 0x70000000 + 0x3244;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
    
    /*
    DO NOT USE. LEAVE IT AT THE DEFAULT VALUE.
    const uint32_t E_OD_bit = 11;
    const uint32_t E_OD_bitWidth = 1;
    */

    const uint32_t E_LPDR_bit = 8;
    const uint32_t E_LPDR_bitWidth = 1;
 
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;

};

// 9.15.144
struct PINMUX_AUX_GPIO_PE6_0
{
    const uint32_t address = 0x70000000 + 0x3248;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
    
    /*
    DO NOT USE. LEAVE IT AT THE DEFAULT VALUE.
    const uint32_t E_OD_bit = 11;
    const uint32_t E_OD_bitWidth = 1;
    */

    const uint32_t E_LPDR_bit = 8;
    const uint32_t E_LPDR_bitWidth = 1;
 
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;

};

// 9.15.145
struct PINMUX_AUX_GPIO_PE7_0
{
    const uint32_t address = 0x70000000 + 0x324C;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
    
    /*
    DO NOT USE. LEAVE IT AT THE DEFAULT VALUE.
    const uint32_t E_OD_bit = 11;
    const uint32_t E_OD_bitWidth = 1;
    */

    const uint32_t E_LPDR_bit = 8;
    const uint32_t E_LPDR_bitWidth = 1;
 
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;

};

// 9.15.146
struct PINMUX_AUX_GPIO_PH6_0
{
    const uint32_t address = 0x70000000 + 0x3250;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
    
    /*
    DO NOT USE. LEAVE IT AT THE DEFAULT VALUE.
    const uint32_t E_OD_bit = 11;
    const uint32_t E_OD_bitWidth = 1;
    */

    const uint32_t E_LPDR_bit = 8;
    const uint32_t E_LPDR_bitWidth = 1;
 
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;

};

// 9.15.147
struct PINMUX_AUX_GPIO_PK0_0
{
    const uint32_t address = 0x70000000 + 0x3254;

    const uint32_t DRV_TYPE_bit = 13;
    const uint32_t DRV_TYPE_bitWidth = 2;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
   
    const uint32_t E_HSM_bit = 9;
    const uint32_t E_HSM_bitWidth = 1;
 
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;

};

// 9.15.148
struct PINMUX_AUX_GPIO_PK1_0
{
    const uint32_t address = 0x70000000 + 0x3258;

    const uint32_t DRV_TYPE_bit = 13;
    const uint32_t DRV_TYPE_bitWidth = 2;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
    
    const uint32_t E_HSM_bit = 9;
    const uint32_t E_HSM_bitWidth = 1;
 
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;

};

// 9.15.149
struct PINMUX_AUX_GPIO_PK2_0
{
    const uint32_t address = 0x70000000 + 0x325C;

    const uint32_t DRV_TYPE_bit = 13;
    const uint32_t DRV_TYPE_bitWidth = 2;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
    
    const uint32_t E_HSM_bit = 9;
    const uint32_t E_HSM_bitWidth = 1;
 
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;

};

// 9.15.150
struct PINMUX_AUX_GPIO_PK3_0
{
    const uint32_t address = 0x70000000 + 0x3260;

    const uint32_t DRV_TYPE_bit = 13;
    const uint32_t DRV_TYPE_bitWidth = 2;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
    
    const uint32_t E_HSM_bit = 9;
    const uint32_t E_HSM_bitWidth = 1;
 
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;

};

// 9.15.151
struct PINMUX_AUX_GPIO_PK4_0
{
    const uint32_t address = 0x70000000 + 0x3264;

    const uint32_t DRV_TYPE_bit = 13;
    const uint32_t DRV_TYPE_bitWidth = 2;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
    
    const uint32_t E_HSM_bit = 9;
    const uint32_t E_HSM_bitWidth = 1;
 
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;

};

// 9.15.152
struct PINMUX_AUX_GPIO_PK5_0
{
    const uint32_t address = 0x70000000 + 0x3268;

    const uint32_t DRV_TYPE_bit = 13;
    const uint32_t DRV_TYPE_bitWidth = 2;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
    
    const uint32_t E_HSM_bit = 9;
    const uint32_t E_HSM_bitWidth = 1;
 
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;

};

// 9.15.153
struct PINMUX_AUX_GPIO_PK6_0
{
    const uint32_t address = 0x70000000 + 0x326C;

    const uint32_t DRV_TYPE_bit = 13;
    const uint32_t DRV_TYPE_bitWidth = 2;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
    
    const uint32_t E_HSM_bit = 9;
    const uint32_t E_HSM_bitWidth = 1;
 
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;

};

// 9.15.154
struct PINMUX_AUX_GPIO_PK7_0
{
    const uint32_t address = 0x70000000 + 0x3270;

    const uint32_t DRV_TYPE_bit = 13;
    const uint32_t DRV_TYPE_bitWidth = 2;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
    
    const uint32_t E_HSM_bit = 9;
    const uint32_t E_HSM_bitWidth = 1;
 
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;

};

// 9.15.155
struct PINMUX_AUX_GPIO_PL0_0
{
    const uint32_t address = 0x70000000 + 0x3274;

    const uint32_t DRV_TYPE_bit = 13;
    const uint32_t DRV_TYPE_bitWidth = 2;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
    
    const uint32_t E_HSM_bit = 9;
    const uint32_t E_HSM_bitWidth = 1;
 
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;

};

// 9.15.156
struct PINMUX_AUX_GPIO_PL1_0
{
    const uint32_t address = 0x70000000 + 0x3278;

    const uint32_t DRV_TYPE_bit = 13;
    const uint32_t DRV_TYPE_bitWidth = 2;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
    
    const uint32_t E_HSM_bit = 9;
    const uint32_t E_HSM_bitWidth = 1;
 
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;

};

// 9.15.157
struct PINMUX_AUX_GPIO_PZ0_0
{
    const uint32_t address = 0x70000000 + 0x327C;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
    
    /*
    DO NOT USE. LEAVE IT AT THE DEFAULT VALUE.
    const uint32_t E_OD_bit = 11;
    const uint32_t E_OD_bitWidth = 1;
    */

    const uint32_t E_LPDR_bit = 8;
    const uint32_t E_LPDR_bitWidth = 1;
    
    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;

};

// 9.15.158
struct PINMUX_AUX_GPIO_PZ1_0
{
    const uint32_t address = 0x70000000 + 0x3280;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
 
    /*
    DO NOT USE. LEAVE IT AT THE DEFAULT VALUE.
    const uint32_t E_OD_bit = 11;
    const uint32_t E_OD_bitWidth = 1;
    */

    const uint32_t E_LPDR_bit = 8;
    const uint32_t E_LPDR_bitWidth = 1;

    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;

};

// 9.15.159
struct PINMUX_AUX_GPIO_PZ2_0
{
    const uint32_t address = 0x70000000 + 0x3284;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
 
    /*
    DO NOT USE. LEAVE IT AT THE DEFAULT VALUE.
    const uint32_t E_OD_bit = 11;
    const uint32_t E_OD_bitWidth = 1;
    */

    const uint32_t E_LPDR_bit = 8;
    const uint32_t E_LPDR_bitWidth = 1;

    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;

};

// 9.15.160
struct PINMUX_AUX_GPIO_PZ3_0
{
    const uint32_t address = 0x70000000 + 0x3288;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
 
    /*
    DO NOT USE. LEAVE IT AT THE DEFAULT VALUE.
    const uint32_t E_OD_bit = 11;
    const uint32_t E_OD_bitWidth = 1;
    */

    const uint32_t E_LPDR_bit = 8;
    const uint32_t E_LPDR_bitWidth = 1;

    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;

};

// 9.15.161
struct PINMUX_AUX_GPIO_PZ4_0
{
    const uint32_t address = 0x70000000 + 0x328C;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
 
    /*
    DO NOT USE. LEAVE IT AT THE DEFAULT VALUE.
    const uint32_t E_OD_bit = 11;
    const uint32_t E_OD_bitWidth = 1;
    */

    const uint32_t E_LPDR_bit = 8;
    const uint32_t E_LPDR_bitWidth = 1;

    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;

};

// 9.15.162
struct PINMUX_AUX_GPIO_PZ5_0
{
    const uint32_t address = 0x70000000 + 0x3290;

    const uint32_t E_SCHMT_bit = 12;
    const uint32_t E_SCHMT_bitWidth = 1;
 
    /*
    DO NOT USE. LEAVE IT AT THE DEFAULT VALUE.
    const uint32_t E_OD_bit = 11;
    const uint32_t E_OD_bitWidth = 1;
    */

    const uint32_t E_LPDR_bit = 8;
    const uint32_t E_LPDR_bitWidth = 1;

    const uint32_t LOCK_bit = 7;
    const uint32_t LOCK_bitWidth = 1;

    const uint32_t E_INPUT_bit = 6;
    const uint32_t E_INPUT_bitWidth = 1;
 
    const uint32_t PARK_bit = 5;
    const uint32_t PARK_bitWidth = 1;

    const uint32_t TRISTATE_bit = 4;
    const uint32_t TRISTATE_bitWidth = 1;
    
    const uint32_t PUPD_bit = 2;
    const uint32_t PUPD_bitWidth = 2;

    const uint32_t PM_bit = 0;
    const uint32_t PM_bitWidth = 2;

};

#endif //PINMUX_CONTROLLER_H
