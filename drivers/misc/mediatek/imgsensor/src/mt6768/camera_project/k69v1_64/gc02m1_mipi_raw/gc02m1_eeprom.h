/*
 * Copyright (C) 2016 MediaTek Inc.
 * Copyright (C) 2021 XiaoMi, Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See http://www.gnu.org/licenses/gpl-2.0.html for more details.
 */

#ifndef __GC02M1_EEPROM_H__
#define __GC02M1_EEPROM_H__

#include "kd_camera_typedef.h"

/*
 * LRC
 *
 * @param data Buffer
 * @return size of data
 */
unsigned int read_gc02m1_LRC(BYTE *data);

<<<<<<< HEAD:drivers/misc/mediatek/imgsensor/src/mt6768/camera_project/k69v1_64/gc02m1_mipi_raw/gc02m1_eeprom.h
/*
 * DCC
 *
 * @param data Buffer
 * @return size of data
 */
unsigned int read_gc02m1_DCC(BYTE *data);
=======
#include <linux/platform_device.h>

enum vib_strength {
	VOL_1_2 = 0,
	VOL_1_3,
	VOL_1_5,
	VOL_1_8,
	VOL_2_5,
	VOL_2_8,
	VOL_3_0,
	VOL_3_3,
};

struct vibrator_hw {
	int	vib_timer;
#ifdef CUST_VIBR_LIMIT
	int	vib_limit;
#endif
#ifdef CUST_VIBR_VOL
	int	vib_vol;
#endif
};

struct platform_device;
void init_cust_vibrator_dtsi(struct platform_device *pdev);
void init_vibr_oc_handler(void (*vibr_oc_func)(void));
>>>>>>> bf0d4bad2bde (Added thunderquake vibrator control engine support):drivers/misc/mediatek/vibrator/mt6785/vibrator.h

#endif

