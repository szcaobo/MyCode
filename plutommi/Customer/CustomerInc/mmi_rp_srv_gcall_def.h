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
 *   mmi_rp_srv_gcall_def.h
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


#ifndef _MMI_RP_SRV_GCALL_DEF_H
#define _MMI_RP_SRV_GCALL_DEF_H




/******************** String resource IDs - begin ********************/
typedef enum
{
    STR_ID_GCALL_UNKNOWN_CALLER = 9754 + 1, /* BASE_ID + 1 */
    STR_ID_GCALL_RESTRICTED,
    STR_ID_GCALL_UNAVAILABLE,
    STR_ID_GCALL_UNABLE_TO_CONNECT,
    STR_ID_GCALL_OP_FAIL,
    STR_ID_GCALL_FDN_FAIL,
    STR_ID_GCALL_CALL_ENDED,
    STR_ID_GCALL_CALL_ABORTED,
    STR_ID_GCALL_REDIAL,
    STR_ID_GCALL_REDIAL_TIMES,
    STR_ID_GCALL_REDIAL_NEXT_ATTEMPT,
    STR_ID_GCALL_REDIAL_SEC,
    STR_ID_GCALL_REDIAL_MIN,
    STR_ID_GCALL_DTMF_CONFIRMATION,
    STR_ID_GCALL_SS_NFY_CF_ON,
    STR_ID_GCALL_SS_NFY_ALL_BARRED,
    STR_ID_GCALL_SS_NFY_ALL_OUTGOING_BARRED,
    STR_ID_GCALL_SS_NFY_ALL_INCOMING_BARRED,
    STR_ID_GCALL_SS_NFY_WTG,
    STR_ID_GCALL_SS_NFY_HLD,
    STR_ID_GCALL_SS_NFY_RTVD,
    STR_ID_GCALL_SS_NFY_CONF,
    STR_ID_GCALL_SS_NFY_CUG,
    STR_ID_GCALL_SS_NFY_CLIR_REJECTED,
    STR_ID_GCALL_SS_NFY_CTFAC,
    MMI_RP_SRV_GCALL_STR_MAX
}mmi_rp_srv_gcall_str_enum;
/******************** String resource IDs - finish ********************/


/******************** Timer resource IDs - begin ********************/
typedef enum
{
    SS_NOTIFY_TIMER = 9754 + 1, /* BASE_ID + 1 */
    MMI_RP_SRV_GCALL_TIMER_MAX
}mmi_rp_srv_gcall_timer_enum;
/******************** Timer resource IDs - finish ********************/


/******************** Events resource IDs - begin ********************/
typedef enum
{
    EVT_ID_SRV_GCALL_ACT = 9754 + 1, /* BASE_ID + 1 */
    EVT_ID_SRV_GCALL_CNF,
    MMI_RP_SRV_GCALL_EVENT_MAX
}mmi_rp_srv_gcall_event_enum;
/******************** Events resource IDs - begin ********************/
/******************** Template resource IDs - Begin ********************/
/******************** Template resource IDs - End ********************/

/******************** Venus XML resource IDs - Begin ********************/
typedef enum 
{

    MMI_RP_SRV_GCALL_VXML_LAYOUT_MAX
} mmi_rp_srv_gcall_vxml_layout_enum;
/******************** Venus XML resource IDs - End ********************/



/******************** Image resource IDs - begin ********************/
typedef enum
{
    IMG_ID_GCALL_LINE1 = 9754 + 1, /* BASE_ID + 1 */
    IMG_ID_GCALL_LINE2,
    IMG_ID_GCALL_OUTGOING,
    IMG_ID_GCALL_CALL_ENDED,
    MMI_RP_SRV_GCALL_IMG_MAX
}mmi_rp_srv_gcall_img_enum;
/******************** Image resource IDs - finish ********************/


#endif /* _MMI_RP_SRV_GCALL_DEF_H */
