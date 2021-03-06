/*
 * This file is part of HiKoB Openlab.
 *
 * HiKoB Openlab is free software: you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public License
 * as published by the Free Software Foundation, version 3.
 *
 * HiKoB Openlab is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with HiKoB Openlab. If not, see
 * <http://www.gnu.org/licenses/>.
 *
 * Copyright (C) 2011,2012 HiKoB.
 */

/*
 * exti.h
 *
 *  Created on: Jul 7, 2011
 *      Author: Clément Burin des Roziers <clement.burin-des-roziers.at.hikob.com>
 */

#ifndef EXTI_H_
#define EXTI_H_

#include "handler.h"

typedef enum
{
    EXTI_LINE_Px0           = 0,
    EXTI_LINE_Px1           = 1,
    EXTI_LINE_Px2           = 2,
    EXTI_LINE_Px3           = 3,
    EXTI_LINE_Px4           = 4,
    EXTI_LINE_Px5           = 5,
    EXTI_LINE_Px6           = 6,
    EXTI_LINE_Px7           = 7,
    EXTI_LINE_Px8           = 8,
    EXTI_LINE_Px9           = 9,
    EXTI_LINE_Px10          = 10,
    EXTI_LINE_Px11          = 11,
    EXTI_LINE_Px12          = 12,
    EXTI_LINE_Px13          = 13,
    EXTI_LINE_Px14          = 14,
    EXTI_LINE_Px15          = 15,
    EXTI_LINE_PVD           = 16,
    EXTI_LINE_RTC_ALARM     = 17,
    EXTI_LINE_USB_WAKEUP    = 18,
    EXTI_LINE_RTC_TIMESTAMP = 19,
    EXTI_LINE_RTC_WAKEUP    = 20,
    EXTI_LINE_COMP1         = 21,
    EXTI_LINE_COMP2         = 22
} exti_line_t;

typedef enum
{
    EXTI_TRIGGER_RISING  = 0x1,
    EXTI_TRIGGER_FALLING = 0x2,
    EXTI_TRIGGER_BOTH    = 0x3
} exti_trigger_t;

void exti_set_handler(exti_line_t line, handler_t handler, handler_arg_t arg);
void exti_enable_interrupt_line(exti_line_t line, exti_trigger_t trigger);
void exti_disable_interrupt_line(exti_line_t line);


#endif /* EXTI_H_ */
