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
 *   mmi_rp_menu_misc_data.c
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   Resource populate function generated by XML resgen
 *
 * Author:
 * -------
 *   MTK resgenerator XML parser
 *
 *******************************************************************************/
#include "MMIDataType.h"
#include "CustMenuRes.h"
#include "mmi_rp_menu_misc_def.h"

/* Application specified header files for MainMenu/Image IDs declared elsewhere. */

/* Count of all main menu IDs */
const U32 mmi_rg_menu_mainmenuid_total = 14;

/* Array of Image IDs for main menu IDs */
/* 1) Main menu ID */
/* 2) List image ID */
/* 3) Matrix image ID */
/* 4) Page image ID */
/* 5) Venus1 image ID */
/* 6) Venus2 image ID */
/* 7) Matrix highlight image ID */
/* 8) Matrix controlled area image ID */
/* 9) Venus1 highlight image ID */
/* 10) Title image ID */
const mmi_rg_menu_mainmenu_img_id_struct mmi_rg_menu_mainmenu_img_id_array[] = {
    { 46019, 0, 0, 0, 0, 0, 0, 0, 0, 46047},
    { 46020, 0, 0, 0, 0, 0, 0, 0, 0, 46035},
    { 46021, 0, 0, 0, 0, 0, 0, 0, 0, 46037},
    { 46022, 0, 0, 0, 0, 0, 0, 0, 0, 46048},
    { 46023, 0, 0, 0, 0, 0, 0, 0, 0, 46045},
    { 46024, 0, 0, 0, 0, 0, 0, 0, 0, 46046},
    { 46025, 0, 0, 0, 0, 0, 0, 0, 0, 46044},
    { 46026, 0, 0, 0, 0, 0, 0, 0, 0, 46039},
    { 46028, 0, 0, 0, 0, 0, 0, 0, 0, 46040},
    { 41182, 0, 0, 0, 0, 0, 0, 0, 0, 46043},
    { 46031, 0, 0, 0, 0, 0, 0, 0, 0, 46049},
    { 46030, 0, 0, 0, 0, 0, 0, 0, 0, 46045},
    { 45466, 0, 0, 0, 0, 0, 0, 0, 0, 46036},
    { 38132, 0, 0, 0, 0, 0, 0, 0, 0, 46041},
};

/* Default menu ID associated parent with menu IDs */
/* Pair of 'parent menu ID', 'default menu ID' */
const mmi_rg_menu_default_struct mmi_rg_menu_default_menu_array[] = {
   {NULL, NULL}
};

/* Arrays of menu IDs for Group IDs */
const U16 menu_group_editor[] = {25843, 0xFFFF};
const U16 menu_group_editor_cui_options[] = {25845, 25846, 0xFFFF};

/* Menu group array associated with Group ID enum */
const U16 *mmi_rg_menu_group[] = {
    menu_group_editor,
    menu_group_editor_cui_options,
    NULL
};

/* Application's notify handlers */
const mmi_rg_notify_hdlr_struct mmi_frm_const_notify_handler_table[] = {
   {0, NULL}
};
