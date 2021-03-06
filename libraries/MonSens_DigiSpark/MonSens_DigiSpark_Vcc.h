/*
 * Copyright © 2017 Simon Rupf
 *
 * This file is part of MonSens.
 *
 * MonSens is free software: you can redistribute it and/or modify it under the
 * terms of the GNU Lesser General Public License as published by the Free
 * Software Foundation, either version 3 of the License, or (at your option)
 * any later version.
 *
 * MonSens is distributed in the hope that it will be useful, but WITHOUT ANY
 * WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License for
 * more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with MonSens. If not, see <http://www.gnu.org/licenses/>.
 */

/**
 * @file
 * @author Simon Rupf <simon@rupf.net>
 * @brief MonSens implementation of the ATtiny's internal voltage sensor.
 *
 * The DigiSpark can measure its internal voltage (around 5 V).
 */

#ifndef MONSENS_DIGISPARK_VCC_H
#define MONSENS_DIGISPARK_VCC_H

#include <MonSens.h>

const char MonSens_DigiSpark_Vcc_Usage[] PROGMEM = {
  "V   - voltage at the ATtiny85 MCU\r\n"
};

/**
 * MonSens implementation of the DigiSpark internal voltage sensor.
 */
class MonSens_DigiSpark_Vcc: public IMonSens_Sensor {
  public:
    /**
     * After it is registered in the communicator, the sensor gets initialized.
     */
    void init();

    /**
     * Take a sensor reading, to be returned by the communicator.
     */
    bool measure(const char* input);

    /**
     * If no sensor supports the input value, usage instructions are collected.
     */
    const char* getUsage();
};

#endif

