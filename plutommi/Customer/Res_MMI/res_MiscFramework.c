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
/**
 *	Copyright Notice
 *	?2002 - 2003, Pixtel Communications, Inc., 1489 43rd Ave. W.,
 *	Vancouver, B.C. V6M 4K8 Canada. All Rights Reserved.
 *  (It is illegal to remove this copyright notice from this software or any
 *  portion of it)
 */

/**************************************************************

	FILENAME	: Res_MiscFramework.c

  	PURPOSE		: Populate Resource for MiscFramework

	REMARKS		: nil

	AUTHOR		: Yogesh

	DATE		: August-15-2003

**************************************************************/
#include "mmi_features.h"
#include "CustomCfg.h"


#ifdef FIRST_PASS
#include "BuildCfg.h"
#endif

#include "MMIDataType.h"

#include "PowerOnChargerResDef.h"

//micha0406
#include "CustResDef.h"
#include "PlmnEnum.h"

#ifdef DEVELOPER_BUILD_FIRST_PASS
#include "PopulateRes.h"



/**************************************************************


	FUNCTION NAME		: PopulateSimDetectionMenuRes()

  	PURPOSE				: To Initialize the resources for the 
						  idle app 

	INPUT PARAMETERS	: nil

	OUTPUT PARAMETERS	: nil

	RETURNS				: void

	REMARKS				: 

**************************************************************/

void PopulatePLMNList(void);

void PopulateSimDetectionMenuRes(void)
{
	PopulatePLMNList();
}


void PopulatePLMNList(void)
{
/* Do NOT modify the following line. It is a keyword for the PLMN automatic create tool */
/* plmncreate.exe: populate PLMN strings */
/* DONE */
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_1,"China Mobile","PLMN Name 46000, 46002, 46007.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_2,"China Unicom","PLMN Name 46001.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_3,"FarEasTone","PLMN Name 46601.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_4,"KG Telecom","PLMN Name 46688.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_5,"VIBO","PLMN Name 46689.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_6,"ChungHwa","PLMN Name 46692.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_7,"MobiTai","PLMN Name 46693.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_8,"Taiwan Mobile","PLMN Name 46697.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_9,"TransAsia","PLMN Name 46699.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_10,"CSL","PLMN Name 45400, 45402, 45418.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_11,"3 HK","PLMN Name 45403, 45404.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_12,"SmarToneVodafone","PLMN Name 45406.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_13,"New World","PLMN Name 45410.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_14,"CMCC","PLMN Name 45412.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_15,"SmarToneVodafone","PLMN Name 45415.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_16,"PCCW","PLMN Name 45416, 45419.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_17,"SmarToneVodafone","PLMN Name 45500.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_18,"CTM","PLMN Name 45501, 45504.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_19,"3 Macau","PLMN Name 45503, 45505.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_20,"Vodafone","PLMN Name 40401.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_21,"Airtel","PLMN Name 40402.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_22,"IDEA","PLMN Name 40404.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_23,"Spice","PLMN Name 40414.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_24,"Aircel","PLMN Name 40417.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_25,"Reliance","PLMN Name 40418.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_26,"BPL MOBILE","PLMN Name 40421.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_27,"CellOne","PLMN Name 40434.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_28,"Dolphin","PLMN Name 40468.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_29,"Oasis","PLMN Name 40470.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_30,"IND TATA","PLMN Name 405025.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_31,"Etisalat","PLMN Name 405913.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_32,"AWCC","PLMN Name 41201.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_33,"Roshan","PLMN Name 41220.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_34,"Areeba","PLMN Name 41240.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_35,"Etisalat Af","PLMN Name 41250.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_36,"GramenPhone","PLMN Name 47001.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_37,"AKTel","PLMN Name 47002.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_38,"Banglalink","PLMN Name 47003.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_39,"Teletalk","PLMN Name 47004.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_40,"Warid Telecom","PLMN Name 47007.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_41,"BATELCO","PLMN Name 42601.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_42,"zain BH","PLMN Name 42602.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_43,"B-Mobile","PLMN Name 40211.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_44,"TashiCell","PLMN Name 40277.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_45,"DSTCom","PLMN Name 52811.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_46,"MOBITEL - KHM","PLMN Name 45601.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_47,"hello","PLMN Name 45602.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_48,"CADCOMMS","PLMN Name 45604.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_49,"STARCELL","PLMN Name 45605.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_50,"CAMSHIN","PLMN Name 45618.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_51,"TLS-TT","PLMN Name 51402.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_52,"INDOSAT","PLMN Name 51001.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_53,"axis","PLMN Name 51008.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_54,"Telkomsel","PLMN Name 51010.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_55,"XL","PLMN Name 51011.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_56,"3","PLMN Name 51089.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_57,"MCI","PLMN Name 43211.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_58,"KISH","PLMN Name 43214.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_59,"MTCE","PLMN Name 43219.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_60,"Taliya","PLMN Name 43232.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_61,"IranCell","PLMN Name 43235.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_62,"ASIACELL","PLMN Name 41805.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_63,"zain IQ","PLMN Name 41820.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_64,"Orange","PLMN Name 42501.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_65,"Cellcom","PLMN Name 42502.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_66,"Pelephone","PLMN Name 42503.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_67,"eMobile","PLMN Name 44000.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_68,"NTT DoCoMo","PLMN Name 44010.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_69,"Softbank","PLMN Name 44020.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_70,"zain JO","PLMN Name 41601.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_71,"Umniah","PLMN Name 41603.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_72,"Orange JO","PLMN Name 41677.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_73,"KTF","PLMN Name 45002, 45008.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_74,"SK Telecom","PLMN Name 45005.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_75,"zain KW","PLMN Name 41902.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_76,"Wataniya","PLMN Name 41903.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_77,"BITEL","PLMN Name 43701.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_78,"MEGACOM","PLMN Name 43705.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_79,"LAO GSM","PLMN Name 45701.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_80,"ETL","PLMN Name 45702.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_81,"LAO-ASIA","PLMN Name 45703.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_82,"TANGO LAO","PLMN Name 45708.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_83,"Alfa","PLMN Name 41501.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_84,"MY MAXIS","PLMN Name 50212.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_85,"MY CELCOM 3G","PLMN Name 50213.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_86,"DiGi","PLMN Name 50216.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_87,"U MOBILE","PLMN Name 50218.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_88,"MY CELCOM","PLMN Name 50219.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_89,"Dhiraagu","PLMN Name 47201.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_90,"WMOBILE","PLMN Name 47202.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_91,"Unitel","PLMN Name 42888.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_92,"MobiCom","PLMN Name 42899.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_93,"MPT","PLMN Name 41401.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_94,"NTC","PLMN Name 42901.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_95,"Mero Mobile","PLMN Name 42902.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_96,"OMAN MOBILE","PLMN Name 42202.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_97,"nawras","PLMN Name 42203.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_98,"Mobilink","PLMN Name 41001.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_99,"PK-UFONE","PLMN Name 41003.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_100,"ZONG","PLMN Name 41004.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_101,"Telenor PK","PLMN Name 41006.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_102,"WaridTel","PLMN Name 41007.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_103,"ISLACOM","PLMN Name 51501.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_104,"Globe Telecom","PLMN Name 51502.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_105,"SMART","PLMN Name 51503.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_106,"Sun Cellular","PLMN Name 51505.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_107,"Red Mobile","PLMN Name 51518.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_108,"Qat-Qtel","PLMN Name 42701.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_109,"STC","PLMN Name 42001.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_110,"mobily","PLMN Name 42003.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_111,"SingTel","PLMN Name 52501, 52502.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_112,"M1","PLMN Name 52503.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_113,"SSTARHUB","PLMN Name 52505.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_114,"Mobitel","PLMN Name 41301.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_115,"SRI DIALOG","PLMN Name 41302.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_116,"SRI - Tigo","PLMN Name 41303.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_117,"SIR AIRTEL","PLMN Name 41305.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_118,"Hutch","PLMN Name 41308.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_119,"SyriaTel","PLMN Name 41701.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_120,"Somoncom","PLMN Name 43601.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_121,"INDIGO-T","PLMN Name 43602, 43612.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_122,"MLT","PLMN Name 43603.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_123,"Babilon","PLMN Name 43604.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_124,"Beeline","PLMN Name 43605.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_125,"AIS GSM","PLMN Name 52001.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_126,"TRUE","PLMN Name 52010, 52099.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_127,"TOT","PLMN Name 52015.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_128,"DTAC","PLMN Name 52018.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_129,"TH GSM 1800","PLMN Name 52023.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_130,"Turkcell","PLMN Name 28601.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_131,"VODAFONE TR","PLMN Name 28602.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_132,"AVEA","PLMN Name 28603.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_133,"du","PLMN Name 42403.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_134,"Mobifone","PLMN Name 45201.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_135,"VINAPHONE","PLMN Name 45202.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_136,"Viettel","PLMN Name 45204.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_137,"SabaFon","PLMN Name 42101.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_138,"MTN","PLMN Name 42102.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_139,"AMC - AL","PLMN Name 27601.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_140,"vodafone AL","PLMN Name 27602.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_141,"EAGLE AL","PLMN Name 27603.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_142,"MOBILAND","PLMN Name 21303.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_143,"Beeline AM","PLMN Name 28301.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_144,"ARM MTS","PLMN Name 28305.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_145,"A1","PLMN Name 23201.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_146,"T-Mobile A","PLMN Name 23203.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_147,"Orange AT","PLMN Name 23205.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_148,"telering","PLMN Name 23207.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_149,"3 AT","PLMN Name 23210.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_150,"AZE ACELL","PLMN Name 40001.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_151,"AZE BKCELL","PLMN Name 40002.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_152,"Nar","PLMN Name 40004.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_153,"Velcom","PLMN Name 25701.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_154,"MTS","PLMN Name 25702.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_155,"Best","PLMN Name 25704.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_156,"Proximus","PLMN Name 20601.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_157,"Mobistar","PLMN Name 20610.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_158,"BASE","PLMN Name 20620.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_159,"Eronet","PLMN Name 21803.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_160,"m:tel","PLMN Name 21805.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_161,"BH Mobile","PLMN Name 21890.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_162,"M-Tel BG","PLMN Name 28401.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_163,"vivatel","PLMN Name 28403.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_164,"BG GLOBUL","PLMN Name 28405.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_165,"T-Mobile","PLMN Name 21901.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_166,"TELE2","PLMN Name 21902.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_167,"VIPnet","PLMN Name 21910.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_168,"CYTAVODA","PLMN Name 28001.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_169,"T-Mobile CZ","PLMN Name 23001.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_170,"O2 CZ","PLMN Name 23002.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_171,"Vodafone CZ","PLMN Name 23003.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_172,"TDC MOBIL","PLMN Name 23801.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_173,"Sonofon","PLMN Name 23802.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_174,"3 DK","PLMN Name 23806.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_175,"TELIA DK","PLMN Name 23820.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_176,"EE EMT","PLMN Name 24801.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_177,"EE elisa","PLMN Name 24802.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_178,"F�roya Tele","PLMN Name 28801.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_179,"KALL","PLMN Name 28802.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_180,"DNA","PLMN Name 24403.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_181,"FI Elisa","PLMN Name 24405.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_182,"FI AMT","PLMN Name 24414.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_183,"FI SONERA","PLMN Name 24491.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_184,"Orange F","PLMN Name 20801.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_185,"SFR FR","PLMN Name 20810.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_186,"Bouygues FR","PLMN Name 20820.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_187,"GCELL","PLMN Name 28201.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_188,"MAGTI","PLMN Name 28202.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_189,"T-Mobile D","PLMN Name 26201.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_190,"Vodafone.de","PLMN Name 26202.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_191,"E-Plus","PLMN Name 26203.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_192,"O2-de","PLMN Name 26207, 26208.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_193,"GIBTEL","PLMN Name 26601.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_194,"COSMOTE GR","PLMN Name 20201.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_195,"vodafone GR","PLMN Name 20205.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_196,"WIND GR","PLMN Name 20210.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_197,"TELE GRL","PLMN Name 29001.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_198,"H pannon","PLMN Name 21601.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_199,"T-Mobile H","PLMN Name 21630.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_200,"vodafone HU","PLMN Name 21670.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_201,"Siminn","PLMN Name 27401.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_202,"Viking","PLMN Name 27404.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_203,"IceCell","PLMN Name 27407.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_204,"On-waves","PLMN Name 27408.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_205,"NOVA","PLMN Name 27411.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_206,"vodafone IRL","PLMN Name 27201.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_207,"O2 IRL","PLMN Name 27202.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_208,"METEOR IRL","PLMN Name 27203.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_209,"3 IRL","PLMN Name 27205.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_210,"TIM IT","PLMN Name 22201.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_211,"vodafone IT","PLMN Name 22210.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_212,"WIND IT","PLMN Name 22288.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_213,"3 IT","PLMN Name 22299.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_214,"Beeline KZ","PLMN Name 40101.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_215,"KCELL KZ","PLMN Name 40102.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_216,"NEO KZ","PLMN Name 40177.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_217,"LMT LV","PLMN Name 24701.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_218,"TELE2 LV","PLMN Name 24702.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_219,"BITE LV","PLMN Name 24705.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_220,"SwisscomFL","PLMN Name 29501.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_221,"Orange FL","PLMN Name 29502.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_222,"FL1","PLMN Name 29505.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_223,"LI TANGO","PLMN Name 29577.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_224,"OMNITEL LT","PLMN Name 24601.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_225,"LT BITE GSM","PLMN Name 24602.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_226,"L LUXGSM","PLMN Name 27001.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_227,"L TANGO","PLMN Name 27077.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_228,"L VOX","PLMN Name 27099.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_229,"T-Mobile MK","PLMN Name 29401.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_230,"COSMOFON MKD","PLMN Name 29402.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_231,"Vip MKD","PLMN Name 29403.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_232,"vodafone MT","PLMN Name 27801.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_233,"go mobile","PLMN Name 27821.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_234,"3GT MT","PLMN Name 27877.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_235,"Orange MD","PLMN Name 25901.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_236,"MOLDCELL MD","PLMN Name 25902.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_237,"EVENTIS MD","PLMN Name 25904.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_238,"Vodafone NL","PLMN Name 20404.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_239,"KPN NL","PLMN Name 20408.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_240,"Telfort NL","PLMN Name 20412.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_241,"T-Mobile NL","PLMN Name 20416.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_242,"Orange NL","PLMN Name 20420.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_243,"N Telenor","PLMN Name 24201.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_244,"N NetCom","PLMN Name 24202.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_245,"MTU","PLMN Name 24203.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_246,"Mobile Norway","PLMN Name 24205.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_247,"Plus","PLMN Name 26001.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_248,"Era","PLMN Name 26002.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_249,"Orange PL","PLMN Name 26003.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_250,"Play","PLMN Name 26006.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_251,"Aero 2 Sp. z o.o.","PLMN Name 26017.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_252,"vodafone P","PLMN Name 26801.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_253,"Optimus P","PLMN Name 26803.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_254,"TMN P","PLMN Name 26806.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_255,"RO Vodafone","PLMN Name 22601.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_256,"RO COSMOTE","PLMN Name 22603.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_257,"RO DigiMobil","PLMN Name 22605.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_258,"RO ORANGE","PLMN Name 22610.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_259,"MTS RUS","PLMN Name 25001.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_260,"MegaFon RUS","PLMN Name 25002.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_261,"SCN RUS","PLMN Name 25004.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_262,"STC RUS","PLMN Name 25005.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_263,"BMT RUS","PLMN Name 25007.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_264,"DTC RUS","PLMN Name 25010.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_265,"AKOS RUS","PLMN Name 25012.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_266,"Kuban RUS","PLMN Name 25013.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_267,"SMARTS RUS","PLMN Name 25015.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_268,"NTC RUS","PLMN Name 25016.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_269,"Utel RUS","PLMN Name 25017.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_270,"INDIGO RUS","PLMN Name 25019.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_271,"TELE2 RUS","PLMN Name 25020.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_272,"Beeline RUS","PLMN Name 25028.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_273,"MOTIV RUS","PLMN Name 25035.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_274,"Telenor","PLMN Name 22001.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_275,"ProMonte","PLMN Name 22002.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_276,"mt:s","PLMN Name 22003.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_277,"T-Mobile CG","PLMN Name 22004.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_278,"VIP Mobile","PLMN Name 22005.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_279,"Orange SK","PLMN Name 23101.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_280,"T-Mobile SK","PLMN Name 23102.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_281,"O2 SK","PLMN Name 23106.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_282,"Si.mobil","PLMN Name 29340.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_283,"T-2","PLMN Name 29364.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_284,"Tuamobil","PLMN Name 29370.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_285,"vodafone ES","PLMN Name 21401.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_286,"Yoigo","PLMN Name 21404.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_287,"movistar","PLMN Name 21407.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_288,"TELIA SE","PLMN Name 24001.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_289,"3 SE","PLMN Name 24002.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_290,"Sweden","PLMN Name 24004.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_291,"Sweden 3G","PLMN Name 24005.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_292,"COMVIQ SE","PLMN Name 24007.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_293,"Telenor SE","PLMN Name 24008.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_294,"SpringMobil SE","PLMN Name 24010.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_295,"Swisscom","PLMN Name 22801.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_296,"Sunrise","PLMN Name 22802.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_297,"In&Phone","PLMN Name 22807.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_298,"UMC","PLMN Name 25501.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_299,"Kyivstar","PLMN Name 25503.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_300,"Uni","PLMN Name 25505.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_301,"life:)","PLMN Name 25506.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_302,"Utel","PLMN Name 25507.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_303,"UK01","PLMN Name 23401.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_304,"O2 UK","PLMN Name 23410.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_305,"Vodafone UK","PLMN Name 23415.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_306,"3 UK","PLMN Name 23420.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_307,"T-Mobile UK","PLMN Name 23430, 23431, 23432.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_308,"Beeline UZ","PLMN Name 43404.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_309,"UZB Ucell","PLMN Name 43405.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_310,"UZB MTS","PLMN Name 43407.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_311,"MTS TM","PLMN Name 43801.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_312,"APUA","PLMN Name 344030.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_313,"bMobile","PLMN Name 344920.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_314,"Digicel","PLMN Name 344930.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_315,"Personal","PLMN Name 72234.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_316,"Claro","PLMN Name 722310.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_317,"SETAR GSM","PLMN Name 36301.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_318,"BTL","PLMN Name 70267.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_319,"M3","PLMN Name 35002.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_320,"VIVA","PLMN Name 73601.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_321,"EMOVIL","PLMN Name 73602.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_322,"Telecel","PLMN Name 73603.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_323,"TIM BRASIL","PLMN Name 72402, 72403, 72404.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_324,"VIVO","PLMN Name 72406, 72410, 72411, 72423.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_325,"Sercomtel","PLMN Name 72415.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_326,"Brasil Telecom","PLMN Name 72416.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_327,"AMAZONIA","PLMN Name 72424.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_328,"Oi","PLMN Name 72431.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_329,"CTBC","PLMN Name 72432, 72433, 72434.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_330,"FIRST","PLMN Name 302350.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_331,"Fido","PLMN Name 302370.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_332,"DMTS","PLMN Name 302380.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_333,"ROGERS","PLMN Name 302720.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_334,"ENTEL","PLMN Name 73001.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_335,"CLARO CHL","PLMN Name 73003.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_336,"Tigo","PLMN Name 732103.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_337,"Comcel","PLMN Name 732123.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_338,"I.C.E.","PLMN Name 71201.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_339,"Cubacel","PLMN Name 36801.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_340,"CLARO DOM","PLMN Name 37002.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_341,"PORTA GSM","PLMN Name 74001.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_342,"CLARO SLV","PLMN Name 70601.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_343,"TELEMOVIL","PLMN Name 70603.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_344,"CLARO HND","PLMN Name 708001.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_345,"CELTELHND","PLMN Name 70802.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_346,"F-Orange","PLMN Name 34001.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_347,"ONLY","PLMN Name 34002.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_348,"TELCEL","PLMN Name 334020.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_349,"ClaroGTM","PLMN Name 70401.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_350,"TELCELL GSM","PLMN Name 36251.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_351,"CT GSM","PLMN Name 36269.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_352,"ANT","PLMN Name 362951.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_353,"ClaroNIC","PLMN Name 71021.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_354,"M�vil","PLMN Name 71401.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_355,"VOX","PLMN Name 74401.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_356,"CLARO PER","PLMN Name 71610.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_357,"AMERIS","PLMN Name 30801.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_358,"Telesur","PLMN Name 74602.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_359,"AT&T","PLMN Name 310150, 310170, 310380, 310410.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_360,"Centennial","PLMN Name 310030.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_361,"Cell One","PLMN Name 310130.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_362,"UNICEL","PLMN Name 310890.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_363,"CLARO UY","PLMN Name 74810.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_364,"Digitel","PLMN Name 73402.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_365,"Lusacell","PLMN Name 334050.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_366,"Telstra Mobile","PLMN Name 50501.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_367,"Optus","PLMN Name 50502.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_368,"vodafone AU","PLMN Name 50503.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_369,"Telecom","PLMN Name 54801.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_370,"VODAFONE FJ","PLMN Name 54201.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_371,"VINI","PLMN Name 54720.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_372,"TSKL","PLMN Name 54509.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_373,"FSM Telecom","PLMN Name 55001.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_374,"Mobilis","PLMN Name 54601.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_375,"vodafone NZ","PLMN Name 53001.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_376,"Telecom NZ","PLMN Name 53005.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_377,"Palau Mobile","PLMN Name 55280.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_378,"SamoaTel","PLMN Name 54927.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_379,"BREEZE","PLMN Name 54001.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_380,"U-CALL","PLMN Name 53901.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_381,"VUT SMILE","PLMN Name 54101.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_382,"Djezzy","PLMN Name 60302.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_383,"TLCL-BEN","PLMN Name 61602.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_384,"BBCOM","PLMN Name 61604.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_385,"GloBenin","PLMN Name 61605.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_386,"MASCOM","PLMN Name 65201.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_387,"Zain","PLMN Name 61302.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_388,"Spacetel","PLMN Name 64201.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_389,"Safaris","PLMN Name 64202.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_390,"ONATEL","PLMN Name 64203.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_391,"MTN CAM","PLMN Name 62401.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_392,"Orange CAM","PLMN Name 62402.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_393,"CPV MOVEL","PLMN Name 62501.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_394,"NationLink","PLMN Name 62304.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_395,"HURI","PLMN Name 654001.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_396,"Libertis","PLMN Name 62910.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_397,"Vodacom CD","PLMN Name 63001.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_398,"SCELL CD","PLMN Name 63005.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_399,"EVATIS","PLMN Name 63801.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_400,"MobiNiL","PLMN Name 60201.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_401,"Vodafone EG","PLMN Name 60202.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_402,"ETHMTN","PLMN Name 63601.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_403,"Orange GQ","PLMN Name 62701.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_404,"Gamcel","PLMN Name 60701.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_405,"Africell","PLMN Name 60702.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_406,"Onetouch","PLMN Name 62002.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_407,"Sotelgui Guinea","PLMN Name 61102.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_408,"ACELL-CI","PLMN Name 61202.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_409,"MTN CI","PLMN Name 61205.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_410,"Safaricom","PLMN Name 63902.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_411,"Vodacom-LS","PLMN Name 65101.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_412,"Econet","PLMN Name 65102.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_413,"Al Madar","PLMN Name 60601.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_414,"Orange MG","PLMN Name 64602.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_415,"TNL","PLMN Name 65001.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_416,"MALITEL ML","PLMN Name 61001.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_417,"ORANGE ML","PLMN Name 61002.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_418,"MATTEL","PLMN Name 60901.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_419,"Mauritel","PLMN Name 60910.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_420,"Cellplus","PLMN Name 61701.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_421,"EMTEL","PLMN Name 61710.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_422,"MEDITEL","PLMN Name 60400.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_423,"IAM","PLMN Name 60401.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_424,"mCel","PLMN Name 64301.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_425,"VodaCom","PLMN Name 64304.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_426,"MTC","PLMN Name 64901.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_427,"Sonitel","PLMN Name 61401.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_428,"Moov","PLMN Name 61403.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_429,"Zain NG","PLMN Name 62120.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_430,"MTN NG","PLMN Name 62130.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_431,"Mtel","PLMN Name 62140.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_432,"glo","PLMN Name 62150.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_433,"OUTREMER","PLMN Name 64702.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_434,"SFR","PLMN Name 64710.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_435,"CSTmovel","PLMN Name 62601.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_436,"ALIZE","PLMN Name 60801.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_437,"SENTEL","PLMN Name 60802.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_438,"C&W SEY","PLMN Name 63301.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_439,"MILLICOM","PLMN Name 61902.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_440,"Telesom","PLMN Name 63701.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_441,"SOMAFONE","PLMN Name 63704.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_442,"Golis","PLMN Name 63730.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_443,"Telsom","PLMN Name 63782.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_444,"VodaCom-SA","PLMN Name 65501.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_445,"Cell C","PLMN Name 65507.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_446,"MTN-SA","PLMN Name 65510.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_447,"ZANTEL","PLMN Name 64003.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_448,"TOGO CELL","PLMN Name 61501.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_449,"Telecel Togo","PLMN Name 61503.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_450,"TUNTEL","PLMN Name 60502.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_451,"TUNISIANA","PLMN Name 60503.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_452,"UT Mobile","PLMN Name 64111.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_453,"NetOne","PLMN Name 64801.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_454,"TIGO","PLMN Name 74404.");
   ADD_APPLICATION_STRING2(STR_PLMN_NAME_455,"VO","PLMN Name 74401.");
}

#endif


