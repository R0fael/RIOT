/*
 * Copyright (C) 2014 Freie Universität Berlin, Hinnerk van Bruinehsen
 *               2016 Laurent Navet <laurent.navet@gmail.com>
 *               2019 Otto-von-Guericke-Universität Magdeburg
 *               2023 Hugues Larrive
 *
 * This file is subject to the terms and conditions of the GNU Lesser
 * General Public License v2.1. See the file LICENSE in the top level
 * directory for more details.
 */

/**
 * @ingroup     boards_atmega8
 * @{
 *
 * @file
 * @brief       Board specific definitions for the standalone ATmega8 "board"
 *
 * @author      Marian Buschsieweke <marian.buschsieweke@ovgu.de>
 * @author      Hinnerk van Bruinehsen <h.v.bruinehsen@fu-berlin.de>
 * @author      Laurent Navet <laurent.navet@gmail.com>
 * @author      Hugues Larrive <hugues.larrive@pm.me>
 */

#ifndef BOARD_H
#define BOARD_H

#include "cpu.h"
#include "periph_conf.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @name    STDIO configuration
 *
 * As the CPU is too slow to handle 115200 baud, we set the default
 * baudrate to 9600 for this board
 * @{
 */
#define STDIO_UART_BAUDRATE (9600U)
/** @} */

/**
 * @name    xtimer configuration values
 * @{
 */
#define XTIMER_WIDTH                (16)
#if CLOCK_CORECLOCK > 4000000UL
#define XTIMER_HZ                   (CLOCK_CORECLOCK / 64)
#else
#define XTIMER_HZ                   (CLOCK_CORECLOCK / 8)
#endif
#define XTIMER_BACKOFF              (40)
/** @} */

#ifdef __cplusplus
}
#endif

#endif /* BOARD_H */
/** @} */