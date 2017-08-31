/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2005
*
*  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
*  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
*  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
*  AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
*  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
*  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
*  NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
*  SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
*  SUPPLIED WITH THE MEDIATEK SOFTWARE, AND BUYER AGREES TO LOOK ONLY TO SUCH
*  THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. MEDIATEK SHALL ALSO
*  NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE RELEASES MADE TO BUYER'S
*  SPECIFICATION OR TO CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM.
*
*  BUYER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE
*  LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
*  AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
*  OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY BUYER TO
*  MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE. 
*
*  THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN ACCORDANCE
*  WITH THE LAWS OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF
*  LAWS PRINCIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
*  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
*  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
*
*****************************************************************************/

/*******************************************************************************
 * Filename:
 * ---------
 *   mmi_rp_callback_mgr_table.c
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   Callback manager config table, it is generated by XML resgen
 *
 * Author:
 * -------
 *   03 13 2011 yan.liang
 *
 *******************************************************************************/
#define MMI_CB_MGR_C

#include "MMIDataType.h"
#include "mdi_datatype.h"
#include "mmi_rp_callback_mgr_header_file.h"

/*****************************************************************************
* Typedef
 *****************************************************************************/
typedef struct _mmi_cb_dynamic_node
{ 
    mmi_proc_func cb;
    void *user_data;
    struct _mmi_cb_dynamic_node *next;
} mmi_cb_dynamic_node;

typedef struct
{
    U16 evt_id;
    mmi_proc_func *static_table;
    mmi_cb_dynamic_node *header;
} mmi_cb_map_struct;

/**************************************************************************************
 * Parse information from mmi_cb_mgr_cfg.h into three contents for callback manager
 * 1. extern mmi_ret callback_function(mmi_event_struct *arg);
 * 2. const mmi_proc_func mmi_cb_table_EVT_APP_XXX[];
 * 3. static mmi_cb_tbl_struct mmi_cb_table_map[];
 **************************************************************************************/

/******************************************************************
 * extern mmi_ret callback_function(mmi_event_struct *arg); 
 ******************************************************************/
#define MMI_FRM_CB_REG_BEGIN(_evt)
#define MMI_FRM_CB_REG(_cb) extern mmi_ret _cb(mmi_event_struct *arg);
#define MMI_FRM_CB_REG_END(_evt)
#include "mmi_rp_callback_mgr_config.h"

/******************************************************************
 * const mmi_proc_func mmi_cb_table_EVT_APP_XXX[] = 
 * {
 *     mmi_cb_xxx,
 *     mmi_cb_yyy,
 *     NULL
 * };
 ******************************************************************/
#undef MMI_FRM_CB_REG_BEGIN
#undef MMI_FRM_CB_REG
#undef MMI_FRM_CB_REG_END

#define MMI_FRM_CB_REG_BEGIN(_evt) static const mmi_proc_func mmi_cb_table_##_evt[] = {
#define MMI_FRM_CB_REG(_cb) _cb,
#define MMI_FRM_CB_REG_END(_evt) NULL \
                                     };

#include "mmi_rp_callback_mgr_config.h"

/******************************************************************
 * 
 * static mmi_cb_tbl_struct mmi_cb_table_map[] = 
 * {
 *    {EVT_APP_XXX, mmi_cb_table_EVT_APP_XXX, NULL},
 *    {EVT_APP_YYY, mmi_cb_table_EVT_APP_YYY, NULL},
 * };
 ******************************************************************/
#undef MMI_FRM_CB_REG_BEGIN
#undef MMI_FRM_CB_REG
#undef MMI_FRM_CB_REG_END

#define MMI_FRM_CB_REG_BEGIN(_evt) {(U16)(_evt), (mmi_proc_func *)mmi_cb_table_##_evt, NULL},
#define MMI_FRM_CB_REG(_cb)
#define MMI_FRM_CB_REG_END(_evt)

mmi_cb_map_struct mmi_cb_table_map[] =
{
    #include "mmi_rp_callback_mgr_config.h"
    {0, NULL, NULL}
};

/* 2017/08/29 14:44:43 */

