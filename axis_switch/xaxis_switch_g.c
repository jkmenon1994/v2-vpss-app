/******************************************************************************
* Copyright (C) 2015 - 2020 Xilinx, Inc.  All rights reserved.
* SPDX-License-Identifier: MIT
******************************************************************************/

/*****************************************************************************/
/**
*
* @file xaxis_switch_g.c
* @addtogroup axis_switch_v1_3
* @{
*
* This file gets generated automatically by HSI.
*
* <pre>
* MODIFICATION HISTORY:
*
* Ver  Who Date     Changes
* ---- --- -------- -----------------------------------------------------
* 1.00 sha 07/15/15 Added XPAR_XAXIS_SWITCH_NUM_INSTANCES macro to control
*                   config table parameters. Modified copyright header.
*                   Added doxygen tag and modification history.
* </pre>
*
******************************************************************************/

/***************************** Include Files *********************************/

#include "vprocss_hw_config.h"
#include "xaxis_switch.h"

/************************** Constant Definitions *****************************/

/*
* The configuration table for devices
*/

XAxis_Switch_Config XAxis_Switch_ConfigTable[] =
{
	{
#ifdef XPAR_XAXIS_SWITCH_NUM_INSTANCES
		XPAR_HDMI_PATH_V_PROC_SS_0_AXIS_SWITCH_0_DEVICE_ID,
		XPAR_HDMI_PATH_V_PROC_SS_0_AXIS_SWITCH_0_BASEADDR,
		XPAR_HDMI_PATH_V_PROC_SS_0_AXIS_SWITCH_0_NUM_SI,
		XPAR_HDMI_PATH_V_PROC_SS_0_AXIS_SWITCH_0_NUM_MI
#endif
	}
};
/** @} */
