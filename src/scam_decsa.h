/* 
 * MuMuDVB - Stream a DVB transport stream.
 * Header file for software descrambling libdvbcsa part
 * 
 * (C) 2004-2010 Brice DUBOST
 *
 * The latest version can be found at http://mumudvb.net/
 *
 * Code inspired by TSDECRYPT
 * Copyright (C) 2011,2012 Georgi Chorbadzhiyski <georgi@unixsol.org>
 * 
 * Copyright notice:
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */


#ifndef _SCAM_DECSA_H
#define _SCAM_DECSA_H

#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <errno.h>
#include <sys/ioctl.h>
#include <linux/dvb/ca.h>
#include <stdlib.h>
#include <netinet/in.h>
#include <sys/time.h>

/**@file
 * @brief scam support
 * 
 * Header file for code concerning software descrambling
 */

int scam_decsa_start(mumudvb_channel_t *);
void scam_decsa_stop(mumudvb_channel_t *);

#endif