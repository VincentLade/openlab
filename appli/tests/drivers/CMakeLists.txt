#
# This file is part of HiKoB Openlab. 
# 
# HiKoB Openlab is free software: you can redistribute it and/or
# modify it under the terms of the GNU Lesser General Public License
# as published by the Free Software Foundation, version 3.
# 
# HiKoB Openlab is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
# Lesser General Public License for more details.
#
# You should have received a copy of the GNU Lesser General Public
# License along with HiKoB Openlab. If not, see
# <http://www.gnu.org/licenses/>.
#
# Copyright (C) 2011 HiKoB.
#

# Add the executables
add_executable(test_leds leds)
target_link_libraries(test_leds platform)

add_executable(test_uart uart)
target_link_libraries(test_uart platform)

if(${PLATFORM_HAS_BUTTON})
    add_executable(test_buttons buttons)
    target_link_libraries(test_buttons platform)
endif(${PLATFORM_HAS_BUTTON})

if(${PLATFORM_HAS_SYSTICK})
	add_executable(test_systick systick)
	target_link_libraries(test_systick platform)
endif(${PLATFORM_HAS_SYSTICK})

if(${PLATFORM_HAS_SD})
	add_executable(test_sdio sdio)
	target_link_libraries(test_sdio platform)
endif(${PLATFORM_HAS_SD})


