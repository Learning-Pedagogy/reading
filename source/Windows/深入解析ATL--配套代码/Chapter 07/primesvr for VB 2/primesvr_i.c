/* this file contains the actual definitions of */
/* the IIDs and CLSIDs */

/* link this file in with the server and any clients */


/* File created by MIDL compiler version 5.01.0164 */
/* at Sat Aug 15 22:56:35 1998
 */
/* Compiler settings for D:\ATLBook\src\Chapter 08\primesvr for VB\primesvr.idl:
    Oicf (OptLev=i2), W1, Zp8, env=Win32, ms_ext, c_ext
    error checks: allocation ref bounds_check enum stub_data 
*/
//@@MIDL_FILE_HEADING(  )
#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

const IID IID_IPrimeNumbers = {0xE64EDDDD,0x2B2C,0x11D2,{0x98,0x3C,0x00,0x60,0x08,0x23,0xCF,0xFB}};


const IID IID_IPrimeNumberWords = {0x56CD9686,0x3398,0x11D2,{0x98,0x48,0x00,0x60,0x08,0x23,0xCF,0xFB}};


const IID LIBID_PRIMESVRLib = {0xE64EDDD1,0x2B2C,0x11D2,{0x98,0x3C,0x00,0x60,0x08,0x23,0xCF,0xFB}};


const CLSID CLSID_PrimeNumbers = {0xE64EDDDE,0x2B2C,0x11D2,{0x98,0x3C,0x00,0x60,0x08,0x23,0xCF,0xFB}};


const CLSID CLSID_PrimeNumberWords = {0x56CD9687,0x3398,0x11D2,{0x98,0x48,0x00,0x60,0x08,0x23,0xCF,0xFB}};


#ifdef __cplusplus
}
#endif

