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
 * lsm303dlhc_.h
 *
 *  Created on: Jul 31, 2011
 *      Author: Christophe Braillon <christophe.braillon.at.hikob.com>
 */

#ifndef LSM303DLHC__H_
#define LSM303DLHC__H_

#include "lsm303dlhc.h"
#include "i2c.h"
#include "exti.h"

/* Configuration */
void lsm303dlhc_config(i2c_t i2c, exti_line_t mag_data_ready_line,
                       exti_line_t acc_int1_line, exti_line_t acc_int2_line);

#endif /* LSM303DLHC__H_ */
