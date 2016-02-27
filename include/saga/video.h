/*
 * Copyright (C) 2016, Netronome Systems, Inc.
 * All rights reserved.
 *
 */

#ifndef SAGA_VIDEO_H
#define SAGA_VIDEO_H

#define SAGA_VIDEO_FORMAT_OFF        0
#define SAGA_VIDEO_FORMAT_CLUT8      1
#define SAGA_VIDEO_FORMAT_RGB15      2       /* -|R5|G5|B5 */
#define SAGA_VIDEO_FORMAT_RGB16      3       /* R5|G6|B5 */
#define SAGA_VIDEO_FORMAT_RGB24      4       /* R8|G8|B8 */
#define SAGA_VIDEO_FORMAT_RGB32      5       /* -|R8|G8|B8 */

#define SAGA_VIDEO_DBLSCAN_OFF       0
#define SAGA_VIDEO_DBLSCAN_X         1
#define SAGA_VIDEO_DBLSCAN_Y         2
#define SAGA_VIDEO_DBLSCAN_XY        3

#define SAGA_VIDEO_MEMBASE   0x0FB00000    /* Default video ram */

#define SAGA_VIDEO_PLANEPTR  0x00DFF1EC    /* 32-bit pointer to video ram */
#define SAGA_VIDEO_WIDTH     0x00DFF1F0    /* 16-bit width */
#define SAGA_VIDEO_HEIGHT    0x00DFF1F2    /* 16-bit height */
#define SAGA_VIDEO_MODE      0x00DFF1F4    /* 16-bit mode */
#define   SAGA_VIDEO_MODE_FORMAT(x)  (((x) & 0xff) << 0)
#define   SAGA_VIDEO_MODE_DBLSCN(x)  (((x) & 0xff) << 8)

#define SAGA_VIDEO_CLUT(x)   (0x00DFF400 + (((x) & 0xFF) << 2))

#endif /* SAGA_VIDEO_H */
/* vim: set shiftwidth=4 expandtab:  */