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

/*****************************************************************************
 * Filename:
 * ---------
 *  Kannada.h
 *
 * Project:
 * --------
 *  Indic Language Development
 *
 * Description:
 * ------------
 *  Header file for Kannada font rule 
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifndef MMI_KANNADA_H
#define MMI_KANNADA_H

#include "MMI_features.h"
#include "MMIDataType.h"

#if defined (__MMI_LANG_KANNADA__)

#define IRE_KANNADA_LANG_START_RANGE        0x0C81
#define IRE_KANNADA_LANG_END_RANGE			0x0CF2

#define IRE_KANNADA_PROPRIETRY_START_RANGE  0xA000
#define IRE_KANNADA_PROPRIETRY_END_RANGE    0xA0DE

typedef enum
{   
	/* DEVANAGARI SIGNS */
	KANNADA_DEVANAGARI_S_DANDA			= 0x0964,
	KANNADA_DEVANAGARI_S_DOUBLE_DANDA		= 0x0965,

	/* VARIOUS SIGNS */
    KANNADA_S_ANUSVARA			= 0x0C82,
	KANNADA_S_VISARGA			= 0x0C83,

	/* BLANK */
	//N_BLANK1					= 0x0C84,

	/* INDEPENDENT VOWELS */
	KANNADA_IV_A				= 0x0C85,
	KANNADA_IV_AA				= 0x0C86,
	KANNADA_IV_I				= 0x0C87,
	KANNADA_IV_II				= 0x0C88,
	KANNADA_IV_U				= 0x0C89,
	KANNADA_IV_UU				= 0x0C8A,
	KANNADA_IV_VR				= 0x0C8B,
	KANNADA_IV_VL				= 0x0C8C,
	//NIV_RESERVED1				= 0x0C8D,/* RESERVED */
	KANNADA_IV_E				= 0x0C8E,
	KANNADA_IV_EE				= 0x0C8F,
	KANNADA_IV_AI				= 0x0C90,
	//NIV_RESERVED2				= 0x0C91,/* RESERVED */
	KANNADA_IV_O				= 0x0C92,
	KANNADA_IV_OO				= 0x0C93,
	KANNADA_IV_AU				= 0x0C94,

    /* CONSONANTS */
    KANNADA_C_KA				= 0x0C95,
    KANNADA_C_KHA				= 0x0C96,
    KANNADA_C_GA				= 0x0C97,
    KANNADA_C_GHA				= 0x0C98,
    KANNADA_C_NGA				= 0x0C99,
    KANNADA_C_CA				= 0x0C9A,
    KANNADA_C_CHA				= 0x0C9B,
    KANNADA_C_JA				= 0x0C9C,
    KANNADA_C_JHA				= 0x0C9D,
    KANNADA_C_NYA				= 0x0C9E,
    KANNADA_C_TTA				= 0x0C9F,
    KANNADA_C_TTHA				= 0x0CA0,
    KANNADA_C_DDA				= 0x0CA1,
    KANNADA_C_DDHA				= 0x0CA2,
    KANNADA_C_NNA				= 0x0CA3,
    KANNADA_C_TA				= 0x0CA4,
    KANNADA_C_THA				= 0x0CA5,
    KANNADA_C_DA				= 0x0CA6,
    KANNADA_C_DHA				= 0x0CA7,
    KANNADA_C_NA				= 0x0CA8,
	//NC_RESERVED1				= 0x0CA9,/* RESERVED */
    KANNADA_C_PA				= 0x0CAA,
    KANNADA_C_PHA				= 0x0CAB,
    KANNADA_C_BA				= 0x0CAC,
    KANNADA_C_BHA				= 0x0CAD,
    KANNADA_C_MA				= 0x0CAE,
    KANNADA_C_YA				= 0x0CAF,
    KANNADA_C_RA				= 0x0CB0,
    KANNADA_C_RRA				= 0x0CB1,
    KANNADA_C_LA				= 0x0CB2,
    KANNADA_C_LLA				= 0x0CB3,
	//NC_RESERVED2				= 0x0CB4,/* RESERVED */
    KANNADA_C_VA				= 0x0CB5,
    KANNADA_C_SHA				= 0x0CB6,
    KANNADA_C_SSA				= 0x0CB7,
    KANNADA_C_SA				= 0x0CB8,
    KANNADA_C_HA				= 0x0CB9,
    
    /* BLANK */
	//N_BLANK2					= 0x0CBA,
	//N_BLANK3					= 0x0CBB,
	
	/* VARIOUS SIGNS */
    KANNADA_S_NUKTA				= 0x0CBC,
    KANNADA_S_AVAGRAHA			= 0x0CBD,

    /* DEPENDENT VOWELS */
    KANNADA_DV_AA				= 0x0CBE,
    KANNADA_DV_I				= 0x0CBF,
    KANNADA_DV_II				= 0x0CC0,
    KANNADA_DV_U				= 0x0CC1,
    KANNADA_DV_UU				= 0x0CC2,
    KANNADA_DV_VR				= 0x0CC3,
    KANNADA_DV_VRR				= 0x0CC4,
	//NDV_RESERVED1				= 0x0CC5,/* RESERVED */
    KANNADA_DV_E				= 0x0CC6,
    KANNADA_DV_EE				= 0x0CC7,
    KANNADA_DV_AI				= 0x0CC8,
	//NDV_RESERVED2				= 0x0CC9,/* RESERVED */
    KANNADA_DV_O				= 0x0CCA,
	KANNADA_DV_OO				= 0x0CCB,
    KANNADA_DV_AU				= 0x0CCC,

	/* SIGNS */
    KANNADA_S_HALANT			= 0x0CCD,

	/* BLANK */
    //N_BLANK4					= 0x0CCE,
	//N_BLANK5					= 0x0CCF,
	//N_BLANK6					= 0x0CD0,
	//N_BLANK7					= 0x0CD1,
	//N_BLANK8					= 0x0CD2,
	//N_BLANK9					= 0x0CD3,
	//N_BLANK10					= 0x0CD4,
	
	/* VARIOUS SIGNS */
	KANNADA_S_LENGTH_MARK		= 0x0CD5,
	KANNADA_S_AI_LENGTH_MARK	= 0x0CD6,

	/* BLANK */
   // N_BLANK11					= 0x0CD7,
	//N_BLANK12					= 0x0CD8,
	//N_BLANK13					= 0x0CD9,
	//N_BLANK14					= 0x0CDA,
	//N_BLANK15					= 0x0CDB,
	//N_BLANK16					= 0x0CDC,
	//N_BLANK17					= 0x0CDD,

	/* ADDITIONAL CONSONANT */
    KANNADA_AC_FA				= 0x0CDE,/*obslete historic letter */

	/* BLANK */
    //N_BLANK18					= 0x0CDF,
   

    /* GENERIC ADDITION */
    KANNADA_IV_VRR				= 0x0CE0, 
    KANNADA_IV_VLL				= 0x0CE1, 
	KANNADA_IV_VVL				= 0x0CE2, 
	KANNADA_IV_VVLL				= 0x0CE3, 

	/* BLANK */
    KANNADA_S_DANDA				= 0x0CE4,
	KANNADA_S_DOUBLE_DANDA		= 0x0CE5,
    
    /* DIGITS */
    KANNADA_D_ZERO				= 0x0CE6,
    KANNADA_D_ONE				= 0x0CE7,
    KANNADA_D_TWO				= 0x0CE8,
    KANNADA_D_THREE				= 0x0CE9,
    KANNADA_D_FOUR				= 0x0CEA,
    KANNADA_D_FIVE				= 0x0CEB,
    KANNADA_D_SIX				= 0x0CEC,
    KANNADA_D_SEVEN				= 0x0CED,
    KANNADA_D_EIGHT				= 0x0CEE,
    KANNADA_D_NINE				= 0x0CEF,
    
	/* BLANK */
    //N_BLANK21					= 0x0CF0,

	/* VARIOUS SIGNS */
	KANNADA_S_JIHVAMULIYA		= 0x0CF1,
	KANNADA_S_UPADHMANIYA		= 0x0CF2,

	/* END OF ENUM */
    KANNADA_DUMMY_END
} kannada_characters_enum;

typedef enum
{
    /* SMALL CONSONANTS */
    KANNADA_L_SMALL_KA		= 0xA001,
    KANNADA_L_SMALL_KHA		= 0xA002,
    KANNADA_L_SMALL_GA		= 0xA003,
    KANNADA_L_SMALL_GHA		= 0xA004,
    KANNADA_L_SMALL_NGA		= 0xA005,
    KANNADA_L_SMALL_CA		= 0xA006,
    KANNADA_L_SMALL_CHA		= 0xA007,
    KANNADA_L_SMALL_JA		= 0xA008,
    KANNADA_L_SMALL_JHA		= 0xA009,
    KANNADA_L_SMALL_NYA		= 0xA00A,
    KANNADA_L_SMALL_TTA		= 0xA00B,
    KANNADA_L_SMALL_TTHA	= 0xA00C,
    KANNADA_L_SMALL_DDA		= 0xA00D,
    KANNADA_L_SMALL_DDHA	= 0xA00E,
    KANNADA_L_SMALL_NNA		= 0xA00F,
    KANNADA_L_SMALL_TA		= 0xA010,
    KANNADA_L_SMALL_THA		= 0xA011,
    KANNADA_L_SMALL_DA		= 0xA012,
    KANNADA_L_SMALL_DHA		= 0xA013,
    KANNADA_L_SMALL_NA		= 0xA014,
    KANNADA_L_SMALL_PA		= 0xA015,
    KANNADA_L_SMALL_PHA		= 0xA016,
    KANNADA_L_SMALL_BA		= 0xA017,
    KANNADA_L_SMALL_BHA		= 0xA018,
    KANNADA_L_SMALL_MA		= 0xA019,
    KANNADA_L_SMALL_YA		= 0xA01A,
    KANNADA_L_SMALL_RA		= 0xA01B,
    KANNADA_L_SMALL_RRA		= 0xA01C,
    KANNADA_L_SMALL_LA		= 0xA01D,
    KANNADA_L_SMALL_LLA		= 0xA01E,
    KANNADA_L_SMALL_VA		= 0xA01F,
    KANNADA_L_SMALL_SHA		= 0xA020,
    KANNADA_L_SMALL_SSA		= 0xA021,
    KANNADA_L_SMALL_SA		= 0xA022,
    KANNADA_L_SMALL_HA		= 0xA023,
    
    /* CONSONANT + HALANT */
	KANNADA_L_KA_HALANT		=0xA024,
	KANNADA_L_KHA_HALANT	=0xA025,
	KANNADA_L_GA_HALANT		=0xA026,
	KANNADA_L_GHA_HALANT	=0xA027,
	KANNADA_L_NGA_HALANT	=0xA028,
	KANNADA_L_CA_HALANT		=0xA029,
	KANNADA_L_CHA_HALANT	=0xA02A,
	KANNADA_L_JA_HALANT		=0xA02B,
	KANNADA_L_JHA_HALANT	=0xA02C,
	KANNADA_L_NYA_HALANT	=0xA02D,
	KANNADA_L_TTA_HALANT	=0xA02E,
	KANNADA_L_TTHA_HALANT	=0xA02F,
	KANNADA_L_DDA_HALANT	=0xA030,
	KANNADA_L_DDHA_HALANT	=0xA031,
	KANNADA_L_NNA_HALANT	=0xA032,
	KANNADA_L_TA_HALANT		=0xA033,
	KANNADA_L_THA_HALANT	=0xA034,
	KANNADA_L_DA_HALANT		=0xA035,
	KANNADA_L_DHA_HALANT	=0xA036,
	KANNADA_L_NA_HALANT		=0xA037,
	KANNADA_L_PA_HALANT		=0xA038,
	KANNADA_L_PHA_HALANT	=0xA039,
	KANNADA_L_BA_HALANT		=0xA03A,
	KANNADA_L_BHA_HALANT	=0xA03B,
	KANNADA_L_MA_HALANT		=0xA03C,
	KANNADA_L_YA_HALANT		=0xA03D,
	KANNADA_L_RA_HALANT		=0xA03E,
	KANNADA_L_RRA_HALANT	=0xA03F,
	KANNADA_L_LA_HALANT		=0xA040,
	KANNADA_L_LLA_HALANT	=0xA041,
	KANNADA_L_VA_HALANT		=0xA042,
	KANNADA_L_SHA_HALANT	=0xA043,
	KANNADA_L_SSA_HALANT	=0xA044,
	KANNADA_L_SA_HALANT		=0xA045,
	KANNADA_L_HA_HALANT		=0xA046,

	/* RA + HALANT + CONSONANT */
	KANNADA_L_RA_HALANT_CON	=0xA047,

	/* CONSONANT + DV_E */
	KANNADA_L_KE			=0xA048,
	KANNADA_L_KHE			=0xA049,
	KANNADA_L_GE			=0xA04A,
	KANNADA_L_GHE			=0xA04B,
	KANNADA_L_NGE			=0xA04C,
	KANNADA_L_CE			=0xA04D,
	KANNADA_L_CHE			=0xA04E,
	KANNADA_L_JE			=0xA04F,
	KANNADA_L_JHE			=0xA050,
	KANNADA_L_NYE			=0xA051,
	KANNADA_L_TTE			=0xA052,
	KANNADA_L_TTHE			=0xA053,
	KANNADA_L_DDE			=0xA054,
	KANNADA_L_DDHE			=0xA055,
	KANNADA_L_NNE			=0xA056,
	KANNADA_L_TE			=0xA057,
	KANNADA_L_THE			=0xA058,
	KANNADA_L_DE			=0xA059,
	KANNADA_L_DHE			=0xA05A,
	KANNADA_L_NE			=0xA05B,
	KANNADA_L_PE			=0xA05C,
	KANNADA_L_PHE			=0xA05D,
	KANNADA_L_BE			=0xA05E,
	KANNADA_L_BHE			=0xA05F,
	KANNADA_L_ME			=0xA060,
	KANNADA_L_YE			=0xA061,
	KANNADA_L_RE			=0xA062,
	KANNADA_L_RRE			=0xA063,
	KANNADA_L_LE			=0xA064,
	KANNADA_L_LLE			=0xA065,
	KANNADA_L_VE			=0xA066,
	KANNADA_L_SHE			=0xA067,
	KANNADA_L_SSE			=0xA068,
	KANNADA_L_SE			=0xA069,
	KANNADA_L_HE			=0xA06A,

	/* CONSONANT +DV_O */
	KANNADA_L_MO			=0xA06B,
	KANNADA_L_YO			=0xA06C,
	KANNADA_L_VO			=0xA06D,

	/* CONSONANT +DV_U */
	KANNADA_L_PU			=0xA06E,
	KANNADA_L_PHU			=0xA06F,
	KANNADA_L_VU			=0xA070,
	
	/* CONSONANT +DV_UU */
	KANNADA_L_PUU			=0xA071,
	KANNADA_L_PHUU			=0xA072,
	KANNADA_L_VUU			=0xA073,

	/* CONSONANT + DV_I */
	KANNADA_L_KI			=0xA074,
	KANNADA_L_KHI			=0xA075,
	KANNADA_L_GI			=0xA076,
	KANNADA_L_GHI			=0xA077,
	KANNADA_L_NGI			=0xA078,
	KANNADA_L_CI			=0xA079,
	KANNADA_L_CHI			=0xA07A,
	KANNADA_L_JI			=0xA07B,
	KANNADA_L_JHI			=0xA07C,
	KANNADA_L_NYI			=0xA07D,
	KANNADA_L_TTI			=0xA07E,
	KANNADA_L_TTHI			=0xA07F,
	KANNADA_L_DDI			=0xA080,
	KANNADA_L_DDHI			=0xA081,
	KANNADA_L_NNI			=0xA082,
	KANNADA_L_TI			=0xA083,
	KANNADA_L_THI			=0xA084,
	KANNADA_L_DI			=0xA085,
	KANNADA_L_DHI			=0xA086,
	KANNADA_L_NI			=0xA087,
	KANNADA_L_PI			=0xA088,
	KANNADA_L_PHI			=0xA089,
	KANNADA_L_BI			=0xA08A,
	KANNADA_L_BHI			=0xA08B,
	KANNADA_L_MI			=0xA08C,
	KANNADA_L_YI			=0xA08D,
	KANNADA_L_RI			=0xA08E,
	KANNADA_L_RRI			=0xA08F,
	KANNADA_L_LI			=0xA090,
	KANNADA_L_LLI			=0xA091,
	KANNADA_L_VI			=0xA092,
	KANNADA_L_SHI			=0xA093,
	KANNADA_L_SSI			=0xA094,
	KANNADA_L_SI			=0xA095,
	KANNADA_L_HI			=0xA096,

	/* CONSONANT + DV_AU */
	KANNADA_L_KAU			=0xA097,
	KANNADA_L_KHAU			=0xA098,
	KANNADA_L_GAU			=0xA099,
	KANNADA_L_GHAU			=0xA09A,
	KANNADA_L_NGAU			=0xA09B,
	KANNADA_L_CAU			=0xA09C,
	KANNADA_L_CHAU			=0xA09D,
	KANNADA_L_JAU			=0xA09E,
	KANNADA_L_JHAU			=0xA09F,
	KANNADA_L_NYAU			=0xA0A0,
	KANNADA_L_TTAU			=0xA0A1,
	KANNADA_L_TTHAU			=0xA0A2,
	KANNADA_L_DDAU			=0xA0A3,
	KANNADA_L_DDHAU			=0xA0A4,
	KANNADA_L_NNAU			=0xA0A5,
	KANNADA_L_TAU			=0xA0A6,
	KANNADA_L_THAU			=0xA0A7,
	KANNADA_L_DAU			=0xA0A8,
	KANNADA_L_DHAU			=0xA0A9,
	KANNADA_L_NAU			=0xA0AA,
	KANNADA_L_PAU			=0xA0AB,
	KANNADA_L_PHAU			=0xA0AC,
	KANNADA_L_BAU			=0xA0AD,
	KANNADA_L_BHAU			=0xA0AE,
	KANNADA_L_MAU			=0xA0AF,
	KANNADA_L_YAU			=0xA0B0,
	KANNADA_L_RAU			=0xA0B1,
	KANNADA_L_RRAU			=0xA0B2,
	KANNADA_L_LAU			=0xA0B3,
	KANNADA_L_LLAU			=0xA0B4,
	KANNADA_L_VAU			=0xA0B5,
	KANNADA_L_SHAU			=0xA0B6,
	KANNADA_L_SSAU			=0xA0B7,
	KANNADA_L_SAU			=0xA0B8,
	KANNADA_L_HAU			=0xA0B9,

	/* CONSONANT + DV_AA */
	KANNADA_L_KAA			=0xA0BA,
	KANNADA_L_KHAA			=0xA0BB,
	KANNADA_L_GAA			=0xA0BC,
	KANNADA_L_GHAA			=0xA0BD,
	KANNADA_L_NGAA			=0xA0BE,
	KANNADA_L_CAA			=0xA0BF,
	KANNADA_L_CHAA			=0xA0C0,
	KANNADA_L_JAA			=0xA0C1,
	KANNADA_L_JHAA			=0xA0C2,
	KANNADA_L_NYAA			=0xA0C3,
	KANNADA_L_TTAA			=0xA0C4,
	KANNADA_L_TTHAA			=0xA0C5,
	KANNADA_L_DDAA			=0xA0C6,
	KANNADA_L_DDHAA			=0xA0C7,
	KANNADA_L_NNAA			=0xA0C8,
	KANNADA_L_TAA			=0xA0C9,
	KANNADA_L_THAA			=0xA0CA,
	KANNADA_L_DAA			=0xA0CB,
	KANNADA_L_DHAA			=0xA0CC,
	KANNADA_L_NAA			=0xA0CD,
	KANNADA_L_PAA			=0xA0CE,
	KANNADA_L_PHAA			=0xA0CF,
	KANNADA_L_BAA			=0xA0D0,
	KANNADA_L_BHAA			=0xA0D1,
	KANNADA_L_MAA			=0xA0D2,
	KANNADA_L_YAA			=0xA0D3,
	KANNADA_L_RAA			=0xA0D4,
	KANNADA_L_RRAA			=0xA0D5,
	KANNADA_L_LAA			=0xA0D6,	
	KANNADA_L_LLAA			=0xA0D7,
	KANNADA_L_VAA			=0xA0D8,
	KANNADA_L_SHAA			=0xA0D9,
	KANNADA_L_SSAA			=0xA0DA,
	KANNADA_L_SAA			=0xA0DB,
	KANNADA_L_HAA			=0xA0DC,
	KANNADA_L_PO			=0xA0DD,
	KANNADA_L_PHO			=0xA0DE,
	
	/* END OF ENUM */
    KANNADA_L_DUMMY_END

} kannada_ligatures_enum;

#if defined (__MMI_MULTITAP_KANNADA__)
/* Following Arrays are use to insert character according kannada grammar rules  */
extern const UI_character_type default_kannada_multitap_strings[MAX_MULTITAPS][32];
extern const UI_character_type default_kannadamatra_multitap_strings[MAX_MULTITAPS][32];
extern const UI_character_type default_kannadamatra1_multitap_strings[MAX_MULTITAPS][32];

extern UI_string_type get_kannada_multitap_string(S32 index);
extern UI_string_type get_kannada_single_line_multitap_string(S32);
extern UI_character_type *get_kannada_multitap_string_for_vk(S32 i);
#endif /* defined (__MMI_MULTITAP_KANNADA__) */ 
#endif /* defined (__MMI_LANG_KANNADA__) */ 
#endif /* MMI_KANNADA_H */ 


