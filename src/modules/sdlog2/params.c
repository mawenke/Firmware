/****************************************************************************
 *
 *   Copyright (c) 2012-2015 PX4 Development Team. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 * 3. Neither the name PX4 nor the names of its contributors may be
 *    used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 ****************************************************************************/

/**
 * Logging rate.
 *
 * A value of -1 indicates the commandline argument
 * should be obeyed. A value of 0 sets the minimum rate,
 * any other value is interpreted as rate in Hertz. This
 * parameter is only read out before logging starts (which
 * commonly is before arming).
 *
 * @min -1
 * @max  100
 * @group SD Logging
 */
PARAM_DEFINE_INT32(SDLOG_RATE, -1);

/**
 * Enable extended logging mode.
 *
 * A value of -1 indicates the commandline argument
 * should be obeyed. A value of 0 disables extended
 * logging mode, a value of 1 enables it. This
 * parameter is only read out before logging starts
 * (which commonly is before arming).
 *
 * @min -1
 * @max  1
 * @group SD Logging
 */
PARAM_DEFINE_INT32(SDLOG_EXT, -1);

/**
 * Use timestamps only if GPS 3D fix is available
 *
 * A value of 1 constrains the log folder creation
 * to only use the time stamp if a 3D GPS lock is
 * present.
 *
 * @min 0
 * @max  1
 * @group SD Logging
 */
PARAM_DEFINE_INT32(SDLOG_GPSTIME, 1);

/**
 * UTC offset (unit: min)
 *
 * the difference in hours and minutes from Coordinated 
 * Universal Time (UTC) for a your place and date.
 *
 * for example, In case of South Korea(UTC+09:00), 
 * UTC offset is 540 min (9*60)
 *
 * refer to https://en.wikipedia.org/wiki/List_of_UTC_time_offsets
 *
 * @min -1000
 * @max  1000
 * @group SD Logging
 */
PARAM_DEFINE_INT32(SDLOG_UTC_OFFSET, 0);

