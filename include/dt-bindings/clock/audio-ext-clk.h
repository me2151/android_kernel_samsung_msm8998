/* Copyright (c) 2016, The Linux Foundation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef __AUDIO_EXT_CLK_H
#define __AUDIO_EXT_CLK_H

/* Audio External Clocks */
#ifdef CONFIG_COMMON_CLK_QCOM
#define AUDIO_PMI_CLK		0
#define AUDIO_PMIC_LNBB_CLK	1
#define AUDIO_AP_CLK		2
#define AUDIO_AP_CLK2		3
#define AUDIO_LPASS_MCLK	4
#define AUDIO_LPASS_MCLK2	5
#else
#define clk_audio_ap_clk        0x9b5727cb
#define clk_audio_pmi_clk       0xcbfe416d
#define clk_audio_ap_clk2       0x454d1e91
#define clk_audio_lpass_mclk    0xf0f2a284
#define clk_audio_pmi_lnbb_clk   0x57312343
#endif

#endif
