/*
 * This file is part of the Micro Python project, http://micropython.org/
 *
 * The MIT License (MIT)
 *
 * Copyright (c) 2013, 2014 Damien P. George
 * Copyright (c) 2015 Daniel Campora
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#ifndef MPERROR_H_
#define MPERROR_H_

#ifndef BOOTLOADER
extern const mp_obj_base_t pyb_heartbeat_obj;
#endif

extern void NORETURN __fatal_error(const char *msg);

void mperror_init0 (void);
void mperror_check_reset_cause (void);
void mperror_deinit_sfe_pin (void);
void mperror_signal_error (void);
void mperror_request_safe_boot (void);
void mperror_clear_safe_boot (void);
bool mperror_safe_boot_requested (void);
void mperror_enable_heartbeat (void);
void mperror_disable_heartbeat (void);
void mperror_heartbeat_signal (void);
void mperror_heartbeat_off (void);

#endif // MPERROR_H_
