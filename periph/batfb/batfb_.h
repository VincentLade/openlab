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
 * Copyright (C) 2012 HiKoB.
 */

/*
 * batfb_.h
 *
 *  Created on: Jun 19, 2012
 *      Author: burindes
 */

#ifndef BATFB__H_
#define BATFB__H_

#include "batfb.h"

typedef struct
{
    /** the gpio of the enable pin */
    gpio_t enable_gpio;
    gpio_pin_t enable_pin;
    /** the ADC used for sampling*/
    adc_t adc;
    /** the ADC channel */
    uint8_t adc_channel;
} batfb_config_t;

/**
 * Initialize the battery feedback driver, by giving a configuration structure.
 * \param config a pointer to the configuration structure.
 */
void batfb_config(const batfb_config_t *config);

#endif /* BATFB__H_ */
