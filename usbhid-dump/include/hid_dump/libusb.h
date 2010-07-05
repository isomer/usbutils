/** @file
 * @brief hid-dump - libusb API extensions
 *
 * Copyright (C) 2010 Nikolai Kondrashov
 *
 * This file is part of hid-dump.
 *
 * Hid-dump is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * Hid-dump is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with hid-dump; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 *
 * @author Nikolai Kondrashov <spbnick@gmail.com>
 *
 * @(#) $Id$
 */

#ifndef __HID_DUMP_LIBUSB_H__
#define __HID_DUMP_LIBUSB_H__

#include <libusb-1.0/libusb.h>

#ifdef __cplusplus
extern "C" {
#endif

extern const char *libusb_strerror(enum libusb_error err);

extern enum libusb_error libusb_open_device_with_bus_dev(
                                        libusb_context         *ctx,
                                        uint8_t                 bus_num,
                                        uint8_t                 dev_addr,
                                        libusb_device_handle  **phandle);

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* __HID_DUMP_LIBUSB_H__ */
