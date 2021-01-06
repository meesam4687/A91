/*
 * Copyright (c) 2015-2017 MICROTRUST Incorporated
 * All Rights Reserved.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 */

#ifndef TEEI_TA_DRV_TYPES_H
#define TEEI_TA_DRV_TYPES_H

/* TA to DRV Commands */
#define TA_CORE_API_CMD_MDRV_OPEN 0x3000
#define TA_CORE_API_CMD_MDRV_IOCTL 0x3001
#define TA_CORE_API_CMD_MDRV_CLOSE 0x3002
#define TA_CORE_API_CMD_MSEE_TA_PRINTF 0x3003
/* DRV Commands */
#define DRV_CORE_API_CMD_MSEE_CLEAN_DCACHE_ALL 0x3006
#define DRV_CORE_API_CMD_MSEE_CLEAN_INVALIDATE_DCACHE_ALL 0x3007
#define DRV_CORE_API_CMD_MSEE_CLEAN_DCACHE_RANGE 0x3008
#define DRV_CORE_API_CMD_MSEE_CLEAN_INVALIDATE_DCACHE_RANGE 0x3009
#define DRV_CORE_API_CMD_MSEE_MAP_USER 0x3010
#define DRV_CORE_API_CMD_MSEE_MALLOC 0x3012
#define DRV_CORE_API_CMD_MSEE_REALLOC 0x3013
#define DRV_CORE_API_CMD_MSEE_REQUEST_IRQ 0x3014
#define DRV_CORE_API_CMD_MSEE_PRINTF 0x3015
#define DRV_CORE_API_CMD_MSEE_GET_SYSTEM_TIME 0x3016
#define DRV_CORE_API_CMD_MSEE_STRNCPY 0x3017
#define DRV_CORE_API_CMD_MSEE_STRLEN 0x3018
#define DRV_CORE_API_CMD_MSEE_MEMCPY 0x3019
#define DRV_CORE_API_CMD_MSEE_MEMSET 0x3020
#define DRV_CORE_API_CMD_MSEE_GET_CHIP_HW_CODE 0x3021
#define DRV_CORE_API_CMD_MSEE_SET_EMI_MPU_PROTECTION 0x3022
#define DRV_CORE_API_CMD_MSEE_4G_ENABLED 0x3023
#define DRV_CORE_API_CMD_MSEE_MMAP_REGION_TEST1 0x3024
#define DRV_CORE_API_CMD_MSEE_MMAP_REGION_TEST2 0x3025
#define DRV_CORE_API_CMD_MSEE_MMAP_REGION_TEST3 0x3026
#define DRV_CORE_API_CMD_MSEE_MMAP_REGION_TEST4 0x3027
/* Shared Memory Commands */
#define CORE_API_CMD_REGISTER_SHARED_MEMORY_01 0x5000
#define CORE_API_CMD_REGISTER_SHARED_MEMORY_02 0x5001
#define CORE_API_CMD_REGISTER_SHARED_MEMORY_03 0x5002

/* Shared Memory Test Data */
#define SHARE_MEMORY_TEST_DATA_0 0x111
#define SHARE_MEMORY_TEST_DATA_1 0x222
#define SHARE_MEMORY_TEST_DATA_2 0x333
#define SHARE_MEMORY_TEST_DATA_3 0x444
#define SHARE_MEMORY_TEST_DATA_4 0x555
#define SHARE_MEMORY_TEST_DATA_5 0x666
#define SHARE_MEMORY_TEST_DATA_6 0x777
#define SHARE_MEMORY_TEST_DATA_7 0x888
#define SHARE_MEMORY_TEST_DATA_10 0xAAA
#define SHARE_MEMORY_TEST_DATA_11 0xBBB
#define SHARE_MEMORY_TEST_DATA_12 0xCCC
#define SHARE_MEMORY_TEST_DATA_13 0xDDD
#define SHARE_MEMORY_TEST_DATA_14 0xEEE
#define SHARE_MEMORY_TEST_DATA_15 0xFFF
#define SHARE_MEMORY_TEST_DATA_16 0x000
#define SHARE_MEMORY_TEST_DATA_17 0x999
#define SHARE_MEMORY_TEST_DATA_20 0x888
#define SHARE_MEMORY_TEST_DATA_21 0x777
#define SHARE_MEMORY_TEST_DATA_22 0x666
#define SHARE_MEMORY_TEST_DATA_23 0x555
#define SHARE_MEMORY_TEST_DATA_24 0x444
#define SHARE_MEMORY_TEST_DATA_25 0x333
#define SHARE_MEMORY_TEST_DATA_26 0x222
#define SHARE_MEMORY_TEST_DATA_27 0x111

/* MTK Commands */
#define MTK_TEST_CRYPTO_AES_ECB_PERFORMANCE1 0x8000
#define MTK_TEST_CRYPTO_AES_ECB_PERFORMANCE2 0x8001
#define MTK_TEST_CRYPTO_AES_ECB_PERFORMANCE3 0x8002
#define MTK_TEST_CRYPTO_AES_ECB_PERFORMANCE4 0x8003

#define DRV_CORE_API_UNSUPPORTED_CMD 0xFFFFFFF2

/* Error Code */
#define DRV_CORE_API_SPECIFIC_RET_VALUE 0x34578900

#define DRV_SUCCESS 0x0

#define MEMSET_UINT32(buffer, pattern, size_in_byte) \
	{ \
		unsigned char *buffer_ptr = (unsigned char *)buffer; \
		unsigned int test_pattern = (unsigned int)pattern; \
		unsigned char *pattern_ptr = (unsigned char *)&test_pattern; \
		unsigned int j = 0; \
		for (j = 0; j < size_in_byte; j += 4) { \
			buffer_ptr[j] = pattern_ptr[0]; \
			buffer_ptr[j + 1] = pattern_ptr[1]; \
			buffer_ptr[j + 2] = pattern_ptr[2]; \
			buffer_ptr[j + 3] = pattern_ptr[3]; \
		} \
	}

#endif
