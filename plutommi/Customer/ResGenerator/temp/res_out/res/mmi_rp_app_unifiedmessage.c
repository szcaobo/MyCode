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
 *   mmi_rp_app_unifiedmessage.c
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
#include "CustDataProts.h"
#include "mmi_rp_app_unifiedmessage_def.h"

/* Application specified header files for using old res IDs */
#include "MMI_features.h"
#include "MMIDataType.h"    /* for resource base */

#include "CustResDef.h"         /* for image/audio path */
#include "GlobalMenuItems.h"    /* for menu resource */

#include "GlobalResDef.h"
#include "mmi_rp_app_sms_def.h"
#include "MainMenuDef.h"
#include "mmi_rp_app_mainmenu_def.h"
#include "WapResDef.h"


/*****************************************************************************
* FUNCTION
*  mmi_rp_app_unifiedmessage_populate
* DESCRIPTION
*  Automatically generated populate function for mmi_rp_app_unifiedmessage_populate
* PARAMETERS
*  void
* RETURNS
*  void
*****************************************************************************/
void mmi_rp_app_unifiedmessage_populate(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

/******************** Menu resource IDs - begin ********************/
    ADD_APPLICATION_MENUITEM5((
        MAIN_MENU_MESSAGES_MENUID,
        0,
        7,
        MENU_ID_UM_WRITE_MSG,
        MENU_ID_UM_INBOX,
        MENU_ID_UM_DRAFT,
        MENU_ID_UM_UNSENT,
        MENU_ID_UM_SENT,
        MENU_ID_UM_CB_MAIN,
        MENU_ID_UM_SETTING_SMS_ONLY,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_APP_MAIN,
        MAIN_MENU_MESSAGES_TEXT,
        MAIN_MENU_MESSAGES_ICON));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_UM_WRITE_MSG,
        0,
        1,
        MENU_ID_UM_WRITE_MSG_SMS,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_APP_SUB,
        STR_UM_WRITE_MSG_ID,
        IMG_UM_WRITE_MSG_ID));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_UM_INBOX,
        0,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_GLOBAL_INBOX,
        IMG_UM_INBOX_ID));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_UM_DRAFT,
        0,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_GLOBAL_DRAFTS,
        IMG_UM_DRAFT_ID));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_UM_UNSENT,
        0,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_GLOBAL_OUTBOX,
        IMG_UM_UNSENT_ID));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_UM_SENT,
        0,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_UM_SENT_ID,
        IMG_UM_SENT_ID));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_UM_DEL_ALL_OPT,
        MENU_ID_UM_OPT,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_OPTION,
        STR_GLOBAL_DELETE_ALL,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_UM_CB_MAIN,
        0,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_UM_CB,
        IMG_SMS_CB_MENUENTRY));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_UM_SETTING,
        0,
        1,
        MENU_ID_UM_SETTING_SMS,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_APP_SUB,
        STR_UM_SETTING_ID,
        IMG_UM_SETTING_ID));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_UM_SETTING_SMS_ONLY,
        0,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_ID_SMS_MESSAGESETUP_MENUENTRY,
        IMG_ID_SMS_MSG_SETTINGS_MENUENTRY));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_UM_WRITE_MSG_SMS,
        0,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_GLOBAL_TEXT_MESSAGE,
        IMG_MESSAGE_UNREAD));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_UM_SETTING_SMS,
        0,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_GLOBAL_TEXT_MESSAGE,
        IMG_MESSAGE_SMS_MENUENTRY));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_UM_OPT,
        0,
        1,
        MENU_ID_UM_DEL_ALL_OPT,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_OPTION,
        STR_GLOBAL_OPTIONS,
        0));

/******************** Menu resource IDs - finish ********************/

/******************** Menu Hilite/Hint Handlers - begin ********************/
    ADD_APPLICATION_MENUITEM_HILITE_HANDLER(MAIN_MENU_MESSAGES_MENUID, highlight_mainmenu_messages);
    ADD_APPLICATION_MENUITEM_HILITE_HANDLER(MENU_ID_UM_WRITE_MSG, mmi_um_highlight_write_msg);
    ADD_APPLICATION_MENUITEM_HILITE_HANDLER(MENU_ID_UM_INBOX, mmi_um_highlight_inbox);
    ADD_APPLICATION_MENUITEM_HILITE_HANDLER(MENU_ID_UM_DRAFT, mmi_um_highlight_draft);
    ADD_APPLICATION_MENUITEM_HILITE_HANDLER(MENU_ID_UM_UNSENT, mmi_um_highlight_unsent);
    ADD_APPLICATION_MENUITEM_HILITE_HANDLER(MENU_ID_UM_SENT, mmi_um_highlight_sent);
    ADD_APPLICATION_MENUITEM_HILITE_HANDLER(MENU_ID_UM_SETTING, mmi_um_highlight_setting);
/******************** Menu Hilite/Hint Handlers - finish ********************/
}
