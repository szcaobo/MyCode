#include "mmi_features.h"

#include "ResCompressConfig.h"
#if !defined(__MMI_RESOURCE_STR_THIRD_ROM__)
#if defined(__MMI_RESOURCE_STR_LZMA_COMPRESS__)
#include "CustDataRes.h"
#include "FontDCl.h"
#if (!defined (__MTK_TARGET__))
    #define __align(x)
#endif


#ifdef __MTK_TARGET__
#ifdef __CAT_SUPPORT__
#if defined(_NAND_FLASH_BOOTING_) || !defined(__ZIMAGE_SUPPORT__) 
#pragma arm section rodata = "CAT_RODATA_STR"
#else //_NAND_FLASH_BOOTING_ || !__ZIMAGE_SUPPORT__ 
#pragma arm section rodata = "CAT_RODATA_STR_NO_ZIMAGE"
#endif //_NAND_FLASH_BOOTING_ || !__ZIMAGE_SUPPORT__ 
#endif // __CAT_SUPPORT__
#endif // __MTK_TARGET__

__align(4) const U8 StrMap_zip_1[] = {
0x5C, 0x00, 0x00, 0x40, 0x00, 0x74, 0x0B, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 
0xFF, 0x6D, 0xEE, 0x52, 0x7E, 0xF4, 0xDC, 0xAE, 0x2A, 0x9C, 0xBA, 0x96, 0x33, 0xC2, 0x74, 0x24, 
0x81, 0x91, 0x6C, 0x72, 0x82, 0x20, 0x36, 0x52, 0x57, 0x02, 0xE8, 0xC6, 0x6F, 0x42, 0x3D, 0x19, 
0x4D, 0x2F, 0x91, 0xB7, 0x20, 0xE5, 0x1E, 0xCD, 0xCA, 0x0A, 0x60, 0x88, 0xFC, 0x3F, 0x32, 0x02, 
0x5E, 0x4E, 0x49, 0x12, 0x00, 0xD5, 0x73, 0x9C, 0x7B, 0x34, 0xE6, 0x95, 0xF8, 0xD0, 0xF1, 0xD0, 
0xB1, 0x94, 0x71, 0xAE, 0x2F, 0x44, 0x53, 0x20, 0x21, 0x71, 0xEC, 0xE0, 0x20, 0x49, 0xBA, 0x48, 
0x94, 0x4F, 0xFE, 0x8C, 0x03, 0xF8, 0x20, 0x7E, 0x75, 0xB4, 0x53, 0xA9, 0x74, 0x8E, 0xB1, 0x25, 
0x78, 0x73, 0x00, 0x5F, 0xB4, 0x95, 0x7D, 0x97, 0x2F, 0x94, 0x07, 0x95, 0xF8, 0x39, 0xE6, 0xB5, 
0xDD, 0xB8, 0x37, 0xCB, 0xDF, 0x02, 0x80, 0x07, 0xBB, 0x6D, 0x65, 0x72, 0xC3, 0x59, 0xB9, 0x0C, 
0xC6, 0xE3, 0x61, 0x85, 0x43, 0x41, 0x19, 0x8B, 0x3F, 0xE1, 0xF8, 0x4C, 0x79, 0x2E, 0x44, 0x8F, 
0x32, 0xFF, 0x9B, 0x75, 0xAA, 0xD8, 0xCC, 0x5B, 0x70, 0xCD, 0x80, 0x23, 0x86, 0xB8, 0xB6, 0x5F, 
0xCD, 0x9E, 0x7E, 0xA7, 0xED, 0xE4, 0x4E, 0x80, 0x3E, 0x2C, 0x00, 0xE7, 0xD4, 0xAB, 0x82, 0xA1, 
0x3F, 0xD9, 0x24, 0x17, 0xCE, 0xF3, 0xC4, 0xDD, 0x90, 0xD8, 0x62, 0x68, 0x4D, 0x53, 0x8C, 0x47, 
0xE1, 0xB1, 0x03, 0x3B, 0x62, 0x6C, 0xEE, 0xB4, 0x19, 0xA2, 0x5E, 0xB3, 0x37, 0x48, 0xDA, 0xDD, 
0xFE, 0x1F, 0xD3, 0x9F, 0x5C, 0xFB, 0x73, 0x99, 0x4F, 0x5C, 0x34, 0x10, 0xAF, 0xD5, 0x06, 0x42, 
0xAB, 0x26, 0xDF, 0x75, 0x6F, 0x8D, 0x5D, 0xE7, 0xA9, 0xCE, 0x7D, 0xD7, 0x91, 0x21, 0x5B, 0x15, 
0x0A, 0xC5, 0xC6, 0x4C, 0xEA, 0x66, 0x5F, 0x7C, 0x67, 0x07, 0x74, 0x45, 0x5E, 0x84, 0x18, 0x86, 
0xB8, 0x2F, 0x89, 0xFC, 0x10, 0x3D, 0x3A, 0x76, 0xDF, 0x37, 0x9A, 0x02, 0x3C, 0x18, 0xB6, 0x53, 
0x1F, 0x66, 0x38, 0x14, 0xF8, 0xC4, 0xB1, 0xEE, 0xAF, 0x79, 0xAA, 0xD9, 0xDD, 0x77, 0x4C, 0x34, 
0xFC, 0x3C, 0x94, 0x66, 0x95, 0x32, 0x53, 0x55, 0x1A, 0xE3, 0xD6, 0x67, 0x7E, 0x1B, 0x40, 0x38, 
0x1B, 0xB5, 0x70, 0xC3, 0xC4, 0x13, 0x84, 0xFF, 0xA5, 0x6F, 0x52, 0xA7, 0xA1, 0x79, 0x3C, 0xF7, 
0x6B, 0x4A, 0xC9, 0x1E, 0x9D, 0x0B, 0x99, 0x5C, 0xFC, 0xA4, 0xA1, 0xE1, 0xE8, 0x20, 0xA4, 0x9F, 
0xE0, 0xB0, 0x61, 0xAC, 0x14, 0x74, 0xC9, 0xD1, 0x8A, 0xAE, 0x0F, 0xDE, 0xC9, 0xFB, 0x4F, 0x7D, 
0xE8, 0x1D, 0xCD, 0x12, 0x00, 0xAE, 0x21, 0xE8, 0x4F, 0x76, 0x3B, 0x73, 0xCD, 0x9B, 0x5D, 0x5A, 
0x5F, 0xEB, 0x23, 0x17, 0x15, 0xA3, 0xCE, 0xE5, 0x4F, 0xD8, 0x75, 0xC9, 0x1C, 0x94, 0xF4, 0xEC, 
0xE1, 0xCF, 0xDD, 0xA0, 0x27, 0x3E, 0x76, 0x41, 0x50, 0x52, 0x45, 0x01, 0x84, 0xE1, 0xFF, 0x38, 
0x79, 0xB1, 0x88, 0x08, 0xCB, 0xC7, 0x78, 0x55, 0xF6, 0xD9, 0x0D, 0xDF, 0xFF, 0x5B, 0x02, 0x76, 
0xA7, 0xB6, 0x35, 0x22, 0xE1, 0x79, 0x49, 0x11, 0x99, 0x25, 0x82, 0xE1, 0x55, 0x95, 0xA1, 0x5B, 
0x30, 0x28, 0x9D, 0xA1, 0xAA, 0xC1, 0x6F, 0x42, 0xF2, 0x47, 0x1E, 0x28, 0xFA, 0x48, 0xCE, 0x9B, 
0x87, 0x71, 0x91, 0xA8, 0x73, 0x29, 0x1B, 0xD7, 0xB0, 0x38, 0x3D, 0xBE, 0x50, 0x8B, 0x58, 0x10, 
0x9C, 0xA6, 0xA8, 0xB3, 0xD3, 0xA8, 0x91, 0xA3, 0xCB, 0x81, 0x47, 0xEC, 0xE3, 0xA9, 0x41, 0x79, 
0x29, 0xC3, 0x1E, 0x25, 0x87, 0x9A, 0x66, 0x25, 0x97, 0x18, 0xDE, 0x4C, 0x93, 0x94, 0x68, 0xCF, 
0x69, 0xDE, 0x49, 0xFF, 0x2A, 0xC2, 0x95, 0x00, 0x80, 0x71, 0x07, 0x07, 0x50, 0x3D, 0xB3, 0xF6, 
0x7E, 0x98, 0x4F, 0xB3, 0xA0, 0xBC, 0x6B, 0xCA, 0x30, 0x0F, 0x52, 0x4F, 0xE1, 0xA3, 0xB1, 0x41, 
0xF5, 0x26, 0x7A, 0x08, 0x9B, 0x88, 0x9E, 0x22, 0x0D, 0x78, 0x57, 0x2B, 0x80, 0x19, 0x26, 0x5B, 
0x72, 0x3E, 0xDD, 0xF2, 0x20, 0x28, 0x14, 0xD3, 0x63, 0xB3, 0x97, 0xAC, 0x4B, 0xAE, 0xA2, 0x2D, 
0x38, 0x00, 0xB4, 0xD5, 0xED, 0xB8, 0x4E, 0x50, 0x64, 0x77, 0x2A, 0xC2, 0xCA, 0x87, 0x6A, 0xED, 
0x3F, 0x0A, 0x74, 0xE1, 0x4F, 0xFD, 0x5E, 0x2E, 0x23, 0xD6, 0x53, 0xAB, 0xD1, 0xC4, 0x0C, 0x73, 
0xA1, 0x8E, 0xBE, 0xBD, 0x40, 0x1C, 0x36, 0x18, 0xB8, 0x95, 0x56, 0x00, 0x8B, 0xB6, 0xF6, 0xC5, 
0x02, 0x4A, 0xA5, 0xAA, 0xA3, 0x5A, 0x91, 0x51, 0x1E, 0x75, 0xF9, 0x99, 0xEF, 0xC1, 0x94, 0xFF, 
0x4E, 0x37, 0x59, 0x85, 0x7D, 0x1D, 0x9E, 0x1A, 0xAF, 0x10, 0xF8, 0xD6, 0x8A, 0x39, 0x8D, 0x4C, 
0x65, 0x74, 0xEB, 0x6D, 0x85, 0x8F, 0x17, 0xE2, 0x29, 0x32, 0x76, 0x80, 0xB7, 0x41, 0xBD, 0x34, 
0xD6, 0x2F, 0xD3, 0xAB, 0xCE, 0x63, 0xDD, 0x2B, 0xF8, 0xB0, 0xBC, 0xCB, 0x55, 0x0B, 0x47, 0xA5, 
0x39, 0x20, 0x7E, 0xC9, 0xB1, 0x49, 0xCF, 0xBB, 0x1A, 0xF8, 0x8B, 0xC3, 0xAB, 0xD2, 0x9D, 0xC8, 
0xF2, 0x67, 0x05, 0x96, 0x01, 0xDA, 0xC6, 0xC3, 0xE8, 0xDA, 0x2E, 0xCB, 0x72, 0x11, 0xD4, 0x8C, 
0x9D, 0xFC, 0x85, 0x88, 0x78, 0xFE, 0xDD, 0x4C, 0x28, 0xF7, 0x8B, 0xDA, 0x75, 0x26, 0xEA, 0x1E, 
0x0A, 0x39, 0x94, 0xCA, 0x7D, 0x46, 0xE1, 0x61, 0x55, 0xB5, 0xAC, 0x76, 0x0C, 0xD9, 0x2C, 0x55, 
0x6C, 0x01, 0xDD, 0x4A, 0xF3, 0x20, 0x0C, 0xE6, 0xD0, 0x33, 0xAA, 0xF6, 0x76, 0xC7, 0x99, 0x26, 
0xD2, 0x93, 0x1D, 0xDA, 0x07, 0x39, 0xA9, 0x45, 0x21, 0x0D, 0x82, 0xAD, 0x61, 0xD9, 0x74, 0x97, 
0xD4, 0x13, 0x8E, 0x0A, 0xCE, 0xD0, 0x10, 0x4B, 0x52, 0xCA, 0x00, 0x0D, 0x75, 0x0F, 0x86, 0x8A, 
0x8E, 0x16, 0xE4, 0x2E, 0x8B, 0x84, 0xF4, 0x89, 0x5F, 0x23, 0x94, 0xC2, 0xC4, 0x2C, 0x08, 0xEF, 
0x09, 0x49, 0x84, 0xDC, 0xB6, 0x6A, 0xFD, 0xFA, 0xFD, 0xD8, 0xA3, 0xDC, 0x7B, 0xED, 0x63, 0x73, 
0x36, 0x0F, 0x5C, 0x91, 0x8D, 0x69, 0x2E, 0xDA, 0xCE, 0x35, 0xC3, 0x14, 0xEA, 0xEB, 0xAE, 0xFB, 
0xB9, 0x09, 0x61, 0xDE, 0x41, 0x43, 0x2E, 0x43, 0x34, 0xE1, 0xBC, 0xC1, 0x5A, 0x48, 0x7F, 0x2F, 
0x95, 0x39, 0xE2, 0x12, 0xCA, 0xE6, 0x0C, 0x7E, 0x08, 0xC8, 0x5A, 0x6B, 0x16, 0x57, 0x59, 0x2E, 
0x4D, 0xB0, 0x5B, 0x17, 0xC7, 0x2F, 0x66, 0x2B, 0x93, 0x2A, 0x8F, 0x88, 0x39, 0xBB, 0x84, 0x9F, 
0xF7, 0xD3, 0x9A, 0x3A, 0x20, 0x2E, 0x97, 0xEF, 0x87, 0x74, 0x7C, 0xC5, 0x94, 0xC3, 0x64, 0xB1, 
0x54, 0x23, 0x3D, 0xBA, 0x1D, 0x6C, 0xFA, 0x75, 0x1D, 0x0D, 0xC6, 0x56, 0x81, 0x80, 0x73, 0xD1, 
0xD6, 0x02, 0x0B, 0xCD, 0x81, 0x39, 0xF4, 0x21, 0xCF, 0xE8, 0xB5, 0xF6, 0x32, 0x67, 0xDE, 0xE1, 
0xDF, 0x49, 0xDB, 0x9B, 0xCE, 0x0D, 0x9F, 0xAC, 0xEF, 0x1B, 0xBA, 0xEB, 0x48, 0x14, 0x4E, 0x13, 
0x44, 0x41, 0x3D, 0x0F, 0x1C, 0x82, 0xB1, 0x18, 0xF2, 0x74, 0x84, 0x4A, 0x43, 0xE6, 0x42, 0x1A, 
0x41, 0xDA, 0xE3, 0x7F, 0x05, 0x51, 0xCE, 0xAD, 0x49, 0x13, 0xFD, 0x57, 0xDC, 0xF9, 0xA8, 0x9F, 
0xC1, 0x5F, 0x17, 0x07, 0x45, 0xF6, 0x08, 0xF6, 0x53, 0xAD, 0xEF, 0x2F, 0x26, 0x89, 0x01, 0xEC, 
0xB6, 0xB2, 0x9E, 0xBC, 0xDE, 0xA6, 0xB0, 0x5A, 0x55, 0x85, 0x93, 0xA3, 0x77, 0xA3, 0x57, 0x88, 
0x28, 0x54, 0x82, 0x01, 0xB2, 0x9E, 0x0E, 0x8D, 0xCF, 0x52, 0xFB, 0xAF, 0x07, 0x2D, 0xC6, 0x5C, 
0xC7, 0x47, 0xED, 0x1E, 0x4B, 0x16, 0x3F, 0x78, 0x2F, 0x96, 0x76, 0x93, 0x4B, 0xAC, 0xDF, 0x72, 
0x74, 0x87, 0x2D, 0x41, 0xC3, 0x05, 0xF7, 0xB8, 0x02, 0x62, 0x5E, 0xEB, 0x96, 0x66, 0x78, 0x39, 
0x93, 0xE1, 0x1A, 0x89, 0xB0, 0xEB, 0x2D, 0x40, 0xF8, 0xDB, 0x43, 0x94, 0xBC, 0x0E, 0x1F, 0xFD, 
0x68, 0x59, 0x90, 0x8F, 0x11, 0x0E, 0xBD, 0x21, 0x32, 0x0D, 0x55, 0x90, 0x86, 0x03, 0xE1, 0x6C, 
0xE4, 0xB3, 0x9C, 0xA7, 0x44, 0xE9, 0x83, 0x4E, 0x74, 0x87, 0x86, 0x45, 0x4E, 0xCB, 0x35, 0xFB, 
0x17, 0x18, 0x4A, 0x9D, 0xC0, 0xAC, 0x53, 0xCA, 0x79, 0x79, 0x85, 0x92, 0x1A, 0xBF, 0xC7, 0xC8, 
0x6A, 0x26, 0x1C, 0x08, 0xD6, 0xE9, 0x7C, 0x02, 0x07, 0x3E, 0x3F, 0x5A, 0x8A, 0x3D, 0x0B, 0x10, 
0x22, 0xE9, 0xF0, 0xE5, 0x06, 0xEF, 0xEF, 0xC0, 0x78, 0x98, 0x09, 0xEC, 0x97, 0x20, 0x7E, 0x59, 
0x2B, 0x14, 0xCA, 0xD1, 0xC5, 0x33, 0x38, 0xEA, 0x1F, 0x22, 0x47, 0xE2, 0xBF, 0x44, 0x82, 0x2F, 
0x1A, 0x73, 0xD4, 0xBC, 0x5A, 0x90, 0xF9, 0xAE, 0xAA, 0xA0, 0x78, 0xBB, 0x9B, 0x6E, 0x82, 0x15, 
0x1F, 0x1C, 0xA8, 0x7C, 0x82, 0xD2, 0xDE, 0xB5, 0xE9, 0xC7, 0x5C, 0xD4, 0xD4, 0x60, 0x13, 0xB7, 
0xC3, 0x5B, 0xB1, 0xB0, 0xA0, 0x80, 0xA6, 0xFD, 0x3B, 0x97, 0x0A, 0x92, 0x29, 0x1E, 0x1B, 0xA0, 
0x7D, 0xAC, 0x34, 0x20, 0xD5, 0xBC, 0x6E, 0x6B, 0x1F, 0x02, 0xB6, 0x50, 0xF7, 0x58, 0x8F, 0xD5, 
0x56, 0x03, 0x2A, 0xBD, 0xFA, 0x2A, 0x53, 0x38, 0x60, 0xD9, 0x18, 0xE0, 0x8E, 0x05, 0x96, 0x3B, 
0x7A, 0x1F, 0x7D, 0x38, 0x96, 0x2C, 0x19, 0xE2, 0x24, 0x16, 0x87, 0xC5, 0x90, 0x86, 0x29, 0x24, 
0x33, 0x0F, 0x1B, 0x0E, 0x60, 0x99, 0xA0, 0x7F, 0x82, 0xF2, 0x80, 0x0A, 0xFB, 0x68, 0x93, 0x03, 
0x25, 0xEC, 0xCE, 0x68, 0x81, 0x25, 0x6C, 0x8B, 0xAE, 0x9C, 0x7E, 0xFD, 0xCC, 0x65, 0x55, 0xD2, 
0x6B, 0x06, 0xF2, 0xBC, 0xB3, 0xAC, 0xF8, 0x57, 0x6E, 0xDA, 0x4B, 0x5B, 0x3B, 0xE1, 0x49, 0xA1, 
0x5B, 0xE9, 0x1B, 0x50, 0x9F, 0x7F, 0x9F, 0xDE, 0x29, 0x5B, 0xC2, 0xCA, 0x97, 0xEF, 0x2F, 0x69, 
0xFC, 0x36, 0x05, 0x4A, 0x4A, 0xA4, 0xCA, 0x75, 0x99, 0x86, 0xC8, 0xFE, 0x17, 0x19, 0x96, 0x6E, 
0xF3, 0x52, 0x04, 0xE1, 0xB9, 0x7A, 0x08, 0x44, 0x06, 0xB1, 0xA9, 0xB4, 0xCB, 0xBD, 0xCA, 0x5E, 
0xE8, 0xB4, 0xAF, 0x85, 0x09, 0xCA, 0x93, 0xD2, 0x72, 0xCE, 0x19, 0x6A, 0xE6, 0x0F, 0xF1, 0xBE, 
0x00, 0xDE, 0x79, 0xC0, 0x83, 0xFE, 0x1B, 0xD4, 0x56, 0x76, 0x39, 0x96, 0x93, 0x07, 0xF3, 0x9F, 
0xF7, 0x23, 0xCB, 0xA8, 0x64, 0x82, 0x6F, 0x38, 0x1B, 0x36, 0xC7, 0x51, 0x17, 0xCC, 0x02, 0x1E, 
0x34, 0x3F, 0xD0, 0x14, 0xC3, 0xED, 0x79, 0x50, 0xD0, 0x29, 0x26, 0xD5, 0x1D, 0x5F, 0xEB, 0xD5, 
0xFA, 0xE7, 0xBF, 0x69, 0xB2, 0x07, 0xB2, 0xC5, 0x08, 0x98, 0x0C, 0x57, 0x03, 0xB0, 0xDA, 0x77, 
0xA7, 0xC7, 0xBB, 0xC7, 0x04, 0xEE, 0xC7, 0xAC, 0x32, 0x32, 0x10, 0x80, 0xAC, 0x40, 0x93, 0x4E, 
0xCF, 0x03, 0x4D, 0x25, 0xCD, 0x42, 0x25, 0xAE, 0x78, 0x88, 0xEA, 0x6A, 0x6D, 0x25, 0x6E, 0xB2, 
0x6C, 0x32, 0xF6, 0xEB, 0x85, 0x2F, 0x57, 0x5B, 0xC1, 0x6E, 0x60, 0x13, 0xE8, 0x7B, 0xD8, 0xFE, 
0x13, 0xB7, 0x6D, 0x60, 0xE4, 0xB2, 0xC6, 0x80, 0xD0, 0x66, 0xF7, 0x08, 0xC0, 0xD6, 0x94, 0xDF, 
0x0F, 0xA7, 0x98, 0x1E, 0xDD, 0xD2, 0xD7, 0x49, 0xD2, 0x31, 0x1F, 0x4E, 0x3C, 0x87, 0x94, 0x07, 
0x30, 0x7C, 0xD7, 0x1B, 0x6B, 0x1D, 0x14, 0x27, 0xD5, 0xDD, 0xDD, 0x44, 0x4E, 0xEF, 0xCF, 0x4E, 
0xEF, 0x75, 0xFC, 0x9E, 0xBB, 0xD5, 0xE3, 0x14, 0xB6, 0xFE, 0xB8, 0xD3, 0x3A, 0xAF, 0x6F, 0xFA, 
0x08, 0x52, 0x26, 0x69, 0x1E, 0xFD, 0xA6, 0xA6, 0x56, 0xFB, 0xE3, 0x23, 0x7F, 0xE5, 0xC3, 0xEE, 
0x02, 0xFC, 0x1F, 0xA0, 0x1E, 0xE3, 0x01, 0xFD, 0x48, 0xE8, 0x69, 0xA2, 0xE4, 0x0B, 0x36, 0xAD, 
0xD2, 0x1D, 0xDE, 0x03, 0x0D, 0xF5, 0x04, 0x41, 0x6F, 0x1D, 0xAB, 0x5C, 0x41, 0xC2, 0x62, 0x41, 
0x09, 0x7E, 0xA1, 0x30, 0x9E, 0x7D, 0x35, 0xB7, 0xA5, 0x0D, 0xE8, 0xB0, 0xA3, 0xC7, 0x8B, 0xFA, 
0xAF, 0x08, 0xE5, 0x49, 0xD3, 0x43, 0x44, 0xFE, 0x7F, 0x13, 0x22, 0x19, 0xEB, 0xBF, 0x2C, 0xAC, 
0x0A, 0xA3, 0x44, 0x4E, 0xA7, 0x52, 0xFB, 0x92, 0x7E, 0x3B, 0xA0, 0x0B, 0xC8, 0x4E, 0x0E, 0x40, 
0x59, 0xA3, 0xE0, 0x79, 0xE5, 0xC9, 0x45, 0x95, 0x29, 0x3E, 0x75, 0x31, 0xA5, 0x6B, 0x14, 0xA2, 
0xE9, 0x35, 0x68, 0x00, 0xE5, 0xC4, 0x97, 0x6F, 0x8C, 0x4F, 0x74, 0x82, 0xC0, 0x4A, 0x11, 0x6A, 
0x05, 0xB4, 0x0F, 0xEE, 0x98, 0xE7, 0xDC, 0x91, 0x9D, 0x90, 0x82, 0xD7, 0xAC, 0xB9, 0xF9, 0x00, 
0x34, 0x80, 0xCB, 0xFE, 0x8F, 0xDD, 0x5E, 0xEE, 0xC8, 0xEC, 0xF1, 0xDF, 0x4D, 0xFE, 0x23, 0x53, 
0x73, 0x85, 0x2A, 0xDB, 0x43, 0x9E, 0x75, 0xC2, 0xCC, 0x4F, 0xBA, 0x40, 0x8F, 0xCB, 0xF6, 0x0D, 
0x39, 0x70, 0x89, 0xB6, 0x4F, 0xAA, 0x1E, 0x7C, 0xDE, 0xA7, 0x3D, 0xF5, 0xD0, 0x3C, 0xC9, 0xCA, 
0xF1, 0x53, 0xB1, 0x1F, 0xCF, 0x73, 0x67, 0xC4, 0xC0, 0x3C, 0x95, 0xE2, 0x24, 0x50, 0x50, 0x0C, 
0xB7, 0x29, 0x15, 0xCA, 0x94, 0x04, 0x75, 0x86, 0xE4, 0x6E, 0xB7, 0xAA, 0xDE, 0xA5, 0x24, 0x82, 
0x39, 0xDB, 0xBC, 0x34, 0x15, 0xAD, 0xC7, 0xC7, 0xA1, 0xCA, 0xF6, 0xA1, 0x91, 0x02, 0x5A, 0x7A, 
0xD1, 0x34, 0x66, 0xF8, 0x78, 0x84, 0xDD, 0xCB, 0x68, 0xB9, 0xC7, 0x7B, 0x2A, 0xF6, 0x30, 0xD2, 
0x7E, 0x8E, 0x78, 0xA5, 0x72, 0xA7, 0x87, 0x36, 0xB4, 0x24, 0x58, 0x04, 0xDA, 0xAD, 0x57, 0xC3, 
0xC9, 0x70, 0xA6, 0x30, 0xDC, 0xC4, 0xE7, 0x94, 0xF8, 0xCD, 0xA5, 0x5C, 0x9D, 0x4C, 0x0E, 0x0A, 
0xD0, 0xC0, 0x44, 0x30, 0x28, 0x94, 0x9B, 0x69, 0x4B, 0xC2, 0x37, 0x45, 0xFF, 0x0A, 0x60, 0xF6, 
0x3F, 0x4D, 0xCC, 0x18, 0x9F, 0x36, 0x06, 0xDD, 0x9B, 0x36, 0x81, 0x76, 0x08, 0x1B, 0x51, 0x55, 
0x22, 0xE6, 0xBE, 0x9C, 0x74, 0x2F, 0x07, 0x41, 0x10, 0x01, 0x45, 0x43, 0x62, 0x58, 0xF6, 0xB4, 
0x09, 0x11, 0x76, 0xD9, 0xE9, 0xA4, 0xD0, 0x0B, 0xDA, 0x56, 0x16, 0x27, 0x07, 0xCC, 0x4A, 0x0B, 
0x8F, 0x8E, 0x9F, 0x97, 0x6B, 0x4E, 0x4B, 0xF8, 0x4C, 0x33, 0x50, 0xC7, 0x8C, 0x39, 0xED, 0x5D, 
0x98, 0x82, 0xDA, 0x8B, 0xFA, 0x7F, 0xFF, 0xFF, 0x12, 0x0B, 0xFF, 0x66, 0x6F, 0xA1, 0xE8, 0x14, 
0x29, 0x99, 0xAD, 0xC5, 0xF1, 0x55, 0x68, 0x43, 0xF5, 0x2F, 0x64, 0xF6, 0x54, 0x90, 0x84, 0x84, 
0xE7, 0x96, 0x83, 0x5B, 0xB3, 0x5F, 0xDE, 0x61, 0xBE, 0x8E, 0x1F, 0x62, 0x92, 0x96, 0x3F, 0x9E, 
0x1B, 0x93, 0x52, 0x04, 0x09, 0xF2, 0xD4, 0x6C, 0xE1, 0x97, 0xEF, 0xD5, 0x81, 0xC0, 0x39, 0x25, 
0x20, 0x48, 0xD2, 0xC3, 0x4A, 0x6B, 0x15, 0xDC, 0x30, 0x7A, 0xD9, 0x4F, 0x75, 0x26, 0x37, 0x2C, 
0x0A, 0x8E, 0xE0, 0xBE, 0xF9, 0x69, 0x2D, 0x55, 0x39, 0xCF, 0xB8, 0x62, 0x42, 0x29, 0xD9, 0x3D, 
0xE4, 0xBC, 0xBF, 0xA1, 0x12, 0x73, 0x5D, 0x19, 0x35, 0x4F, 0xD1, 0xCC, 0x32, 0x5B, 0x46, 0x4D, 
0xB1, 0x7C, 0x4F, 0xB6, 0x82, 0x9A, 0x39, 0x08, 0x1B, 0xB7, 0xE0, 0x85, 0xA7, 0xAE, 0x89, 0x31, 
0x76, 0x7C, 0x21, 0x98, 0x35, 0x4F, 0xD4, 0x9F, 0xFC, 0xCA, 0xED, 0x51, 0x9E, 0x3B, 0x20, 0xA2, 
0xD9, 0x72, 0x0B, 0xCB, 0xE8, 0x85, 0x81, 0xB9, 0xFC, 0xB4, 0x36, 0x6B, 0x7B, 0xF6, 0xBF, 0xFD, 
0xC2, 0x13, 0xBC, 0x93, 0x67, 0x2E, 0x82, 0x84, 0xB3, 0x8C, 0x30, 0x93, 0x8A, 0xA3, 0x2F, 0x05, 
0xE0, 0x64, 0x40, 0xAC, 0xB8, 0x97, 0xAC, 0xBE, 0xD1, 0x1C, 0x2A, 0x3D, 0x8D, 0xB7, 0x39, 0x8B, 
0xCB, 0xDD, 0xAF, 0xF4, 0xAA, 0x1D, 0x65, 0xA5, 0xF4, 0xC0, 0x88, 0xE1, 0xD0, 0x5A, 0x0A, 0x73, 
0x29, 0x6B, 0x12, 0x29, 0x20, 0x33, 0xC5, 0xCF, 0x81, 0x28, 0x71, 0xD3, 0xD4, 0xEC, 0x42, 0xC7, 
0xFC, 0x9E, 0xD9, 0x51, 0xB9, 0xB0, 0x9A, 0x82, 0x4A, 0x27, 0x7A, 0x72, 0x27, 0x53, 0x11, 0x16, 
0x3F, 0x1F, 0xE2, 0x41, 0x96, 0xAB, 0xD9, 0xD2, 0x12, 0x98, 0xDC, 0x48, 0xC9, 0x52, 0x75, 0xC8, 
0x3B, 0x6C, 0x35, 0xB4, 0x7F, 0xF1, 0x77, 0x04, 0xE0, 0xFA, 0x92, 0xF4, 0x79, 0x01, 0xF9, 0x11, 
0xE0, 0xD8, 0x76, 0xEC, 0xB3, 0x7D, 0x1A, 0xC6, 0xAA, 0x09, 0x79, 0xEB, 0xF5, 0x6D, 0xDF, 0xC7, 
0x64, 0xBA, 0x85, 0xD8, 0xE7, 0xCF, 0xF0, 0x22, 0x8F, 0x78, 0x1C, 0xFE, 0x51, 0x47, 0xFC, 0x3A, 
0x20, 0x5D, 0xAA, 0x02, 0x2C, 0xA1, 0xFF, 0xB3, 0xC0, 0xBC, 0xFD, 0x1E, 0x59, 0x8B, 0xB1, 0xCF, 
0xC8, 0xA6, 0xAE, 0x30, 0x1A, 0x75, 0xE0, 0x69, 0x92, 0xB2, 0xE5, 0xDA, 0x01, 0x28, 0x49, 0x40, 
0x2C, 0x3A, 0x85, 0x43, 0xF2, 0x0C, 0x7F, 0x19, 0x76, 0x44, 0x40, 0x77, 0x1C, 0x8A, 0x48, 0x5E, 
0x0F, 0xCB, 0x6D, 0xFF, 0x6F, 0x52, 0x77, 0x0C, 0xC6, 0x8F, 0xA6, 0xDF, 0xBE, 0x10, 0x4C, 0x1F, 
0x9E, 0x5E, 0x70, 0x16, 0xED, 0x54, 0x73, 0x39, 0x4F, 0x17, 0x68, 0x29, 0x26, 0x65, 0x60, 0x0F, 
0x9A, 0xA6, 0x06, 0xAD, 0x97, 0xF1, 0x3E, 0x53, 0xDD, 0xAB, 0xF9, 0x1F, 0x77, 0xE0, 0x78, 0x9C, 
0x27, 0x26, 0x93, 0x7B, 0x39, 0xA8, 0x13, 0x6B, 0xFD, 0xDD, 0xBA, 0x9E, 0xF1, 0xE0, 0x1A, 0xAE, 
0x3B, 0xA0, 0x90, 0x2F, 0xFE, 0xCD, 0xCC, 0x28, 0x4B, 0xC3, 0xAE, 0x76, 0x8C, 0x0E, 0x00

 };
__align(4) const U8 StrMap_zip_fixed[] = {
0x5C, 0x00, 0x00, 0x40, 0x00, 0x58, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 
0xFE, 0xA8, 0x66, 0x7B, 0xEF, 0x95, 0x64, 0xBE, 0xB6, 0x15, 0x62, 0x1E, 0x85, 0xCA, 0x31, 0x42, 
0x6A, 0x12, 0xBA, 0x3E, 0xE8, 0x62, 0x6D, 0x7D, 0xA4, 0xBD, 0xDA, 0x85, 0xDF, 0xE9, 0xAC, 0xF7, 
0x07, 0x1A, 0xC0, 0xA8, 0x9B, 0xEE, 0x83, 0xAE, 0xF5, 0xEE, 0x34, 0xCE, 0xCE, 0x4D, 0x0C, 0x1D, 
0x47, 0x18, 0x26, 0x14, 0x69, 0x9F, 0xEC, 0x1F, 0x91, 0x29, 0x82, 0xAE, 0xE2, 0xD5, 0x44, 0x98, 
0xA4, 0x7A, 0xF1, 0x34, 0x9E, 0xC9, 0x99, 0xBF, 0x11, 0x59, 0xCD, 0x81, 0x6B, 0xA2, 0x0A, 0xE5, 
0xC4, 0x73, 0x5E, 0xD8, 0xE4, 0x2C, 0x64, 0x27, 0xA1, 0x17, 0x58, 0xD5, 0xEB, 0x21, 0xA1, 0x22, 
0x36, 0xE1, 0xFB, 0x31, 0x2E, 0xEC, 0x84, 0x96, 0x5F, 0x7E, 0x71, 0x4C, 0x1C, 0x6B, 0x34, 0x79, 
0x9C, 0x6C, 0x64, 0xB8, 0x04, 0xA6, 0x82, 0x2B, 0xA9, 0xCC, 0xF5, 0xE3, 0x6A, 0x07, 0x5F, 0x37, 
0x76, 0x91, 0x45, 0x83, 0x2B, 0x22, 0x62, 0xB2, 0xF2, 0x67, 0x70, 0x32, 0x8F, 0x82, 0x4A, 0x23, 
0xF7, 0xDC, 0x1B, 0x84, 0x6A, 0x17, 0xA5, 0x59, 0xC0, 0xC9, 0x1C, 0xCD, 0x28, 0x49, 0x9B, 0xA6, 
0x95, 0x20, 0xBD, 0xF6, 0x4D, 0x1A, 0xD7, 0xAA, 0xEE, 0xD1, 0x2D, 0x3C, 0x8D, 0x87, 0xA3, 0x04, 
0x9C, 0x26, 0x3C, 0xF4, 0x64, 0xC6, 0x7E, 0x80, 0x03, 0x00, 0x61, 0xE3, 0x44, 0x1D, 0xD8, 0xBB, 
0x44, 0xB8, 0x1D, 0xC5, 0x82, 0xFB, 0x01, 0x58, 0xDA, 0xB9, 0xF8, 0xBA, 0x3F, 0x4E, 0x98, 0xA7, 
0x84, 0xD6, 0xC3, 0x6D, 0x47, 0x52, 0x8D, 0x4E, 0x8A, 0x88, 0x3E, 0xE7, 0x98, 0x0A, 0x0D, 0xA2, 
0x54, 0x99, 0xFA, 0x5F, 0xB1, 0xE2, 0xFD, 0x6C, 0x8A, 0xAC, 0x41, 0xEE, 0xA6, 0x5A, 0xE3, 0x9D, 
0xCD, 0xB7, 0x8C, 0xC3, 0x2B, 0xA4, 0x45, 0x42, 0x8F, 0xD7, 0x1A, 0x7B, 0x66, 0x0F, 0x19, 0x2A, 
0x26, 0x1F, 0x5C, 0xE8, 0xA5, 0x5F, 0xB9, 0x35, 0x8C, 0x3D, 0x7F, 0x49, 0x0A, 0x59, 0xA2, 0x82, 
0xD8, 0x4D, 0xA1, 0x9A, 0x3A, 0x73, 0xBB, 0x86, 0xA6, 0x36, 0x84, 0x7F, 0x58, 0x15, 0x9E, 0x37, 
0x75, 0x1A, 0xE4, 0x08, 0x8D, 0xE1, 0xAF, 0x5C, 0xF2, 0x08, 0x85, 0x39, 0x02, 0xC5, 0xD7, 0x71, 
0xAA, 0x77, 0x42, 0x76, 0x05, 0x71, 0xFC, 0x76, 0x4C, 0xD5, 0x43, 0xC0, 0x2D, 0xB0, 0xCC, 0x1F, 
0x18, 0xE4, 0xBC, 0x2F, 0x6F, 0x57, 0xE6, 0xBE, 0x90, 0x48, 0x68, 0x39, 0xCD, 0x53, 0x35, 0x2C, 
0x2B, 0x58, 0x02, 0x97, 0x2E, 0x5B, 0xEE, 0xAF, 0xC4, 0x13, 0xCE, 0x29, 0x18, 0x4B, 0xC1, 0xAD, 
0xB7, 0x65, 0x14, 0x48, 0xA5, 0x5B, 0x1D, 0xB6, 0x96, 0x87, 0x38, 0x7F, 0xF8, 0x6C, 0xC6, 0xF8, 
0xB2, 0xE8, 0x3D, 0x21, 0x22, 0xBE, 0x0F, 0x75, 0x74, 0x03, 0x1A, 0xAE, 0x92, 0x78, 0x73, 0xDF, 
0x9C, 0x01, 0xC0, 0xB9, 0xDF, 0xF1, 0xE3, 0x5D, 0x5D, 0x04, 0x47, 0xBF, 0x8C, 0x7C, 0xE1, 0x91, 
0xE1, 0x20, 0xCD, 0x82, 0x28, 0x13, 0x26, 0xD3, 0x53, 0xC7, 0xAA, 0x43, 0xAA, 0xC0, 0x81, 0x0E, 
0xDC, 0xF9, 0x94, 0x28, 0x55, 0x0A, 0x56, 0x3C, 0x11, 0xCF, 0x2F, 0x0A, 0x49, 0xFA, 0xD1, 0x56, 
0xAC, 0xF2, 0xE0, 0x36, 0xB8, 0x43, 0x72, 0xCA, 0x01, 0xEB, 0xC1, 0x8E, 0xB0, 0x0B, 0x47, 0x07, 
0xC0, 0x88, 0xCE, 0x90, 0x53, 0xB0, 0x42, 0xD0, 0x36, 0xE8, 0x44, 0x08, 0x0E, 0x6B, 0x72, 0x41, 
0xDD, 0x7B, 0xFA, 0xBB, 0xBB, 0xA0, 0x8E, 0x27, 0x07, 0xE8, 0xB2, 0x11, 0x56, 0x00, 0xCA, 0x88, 
0x88, 0xDB, 0xB0, 0x52, 0x3E, 0xAC, 0x73, 0xFF, 0xFA, 0xD4, 0xB9, 0xF9, 0x92, 0x53, 0xC3, 0xF0, 
0x31, 0xC3, 0x7D, 0xDA, 0x78, 0x4D, 0xE9, 0x90, 0x66, 0x4F, 0x41, 0xAE, 0x4D, 0x9D, 0x04, 0xAB, 
0x9D, 0x0C, 0x52, 0xDD, 0xF2, 0x0C, 0xEE, 0xBE, 0x0D, 0x68, 0x79, 0xFF, 0xF6, 0x5C, 0x59, 0xE0, 
0xDC, 0x9A, 0xD5, 0xC5, 0xA6, 0x5E, 0x5C, 0x09, 0x40, 0x7E, 0xB0, 0xC4, 0x0D, 0x39, 0xC5, 0xA2, 
0xD0, 0x12, 0x23, 0x45, 0xCC, 0x4B, 0x42, 0x5A, 0x11, 0x85, 0x20, 0x0A, 0xAE, 0x62, 0x45, 0xDF, 
0x35, 0x5A, 0xD6, 0x2F, 0xFA, 0x6A, 0x71, 0x05, 0x68, 0x77, 0xA0, 0xAF, 0x02, 0x47, 0x2A, 0x6A, 
0x59, 0x1C, 0x6A, 0x31, 0xED, 0x89, 0x8F, 0xB1, 0xBF, 0x3F, 0xDA, 0xD6, 0xC7, 0xC1, 0x99, 0x11, 
0x06, 0xA0, 0x73, 0x56, 0x75, 0xC0, 0x00

 };

#ifdef __MTK_TARGET__
#ifdef __CAT_SUPPORT__
#pragma arm section rodata
#endif // __CAT_SUPPORT__
#endif // __MTK_TARGET__

#endif //__MMI_RESOURCE_STR_LZMA_COMPRESS__

#endif //__MMI_RESOURCE_STR_THIRD_ROM__
