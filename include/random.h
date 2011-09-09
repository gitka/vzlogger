/**
 * Generate pseudo random data series by a random walk
 *
 * @package vzlogger
 * @copyright Copyright (c) 2011, The volkszaehler.org project
 * @license http://www.gnu.org/licenses/gpl.txt GNU Public License
 * @author Steffen Vogel <info@steffenvogel.de>
 */
/*
 * This file is part of volkzaehler.org
 *
 * volkzaehler.org is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * any later version.
 *
 * volkzaehler.org is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with volkszaehler.org. If not, see <http://www.gnu.org/licenses/>.
 */
 
#ifndef _RANDOM_H_
#define _RANDOM_H_

#include "reading.h"

typedef struct {
	double min, max, last;
} meter_handle_random_t;

double ltqnorm(double p); /* forward declaration */

int meter_random_open(meter_handle_random_t *handle, char *options);
void meter_random_close(meter_handle_random_t *handle);
meter_reading_t meter_random_read(meter_handle_random_t *handle);

#endif /* _RANDOM_H_ */
