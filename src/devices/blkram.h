/*****************************************************************************
 * pce                                                                       *
 *****************************************************************************/

/*****************************************************************************
 * File name:     src/devices/blkram.h                                       *
 * Created:       2004-09-17 by Hampa Hug <hampa@hampa.ch>                   *
 * Last modified: 2004-09-17 by Hampa Hug <hampa@hampa.ch>                   *
 * Copyright:     (C) 2004 Hampa Hug <hampa@hampa.ch>                        *
 *****************************************************************************/

/*****************************************************************************
 * This program is free software. You can redistribute it and / or modify it *
 * under the terms of the GNU General Public License version 2 as  published *
 * by the Free Software Foundation.                                          *
 *                                                                           *
 * This program is distributed in the hope  that  it  will  be  useful,  but *
 * WITHOUT  ANY   WARRANTY,   without   even   the   implied   warranty   of *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU  General *
 * Public License for more details.                                          *
 *****************************************************************************/

/* $Id$ */


#ifndef PCE_DEVICES_BLKRAM_H
#define PCE_DEVICES_BLKRAM_H 1


#include <config.h>

#include <devices/disk.h>

#include <stdio.h>


/*!***************************************************************************
 * @short The ram disk structure
 *****************************************************************************/
typedef struct {
  disk_t        dsk;

  unsigned char *data;
} disk_ram_t;


disk_t *dsk_ram_new (unsigned d,
  unsigned c, unsigned h, unsigned s,
  const char *fname, int ro
);


#endif