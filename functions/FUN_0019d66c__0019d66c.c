/*
 * Program: n42.bin
 * Function: FUN_0019d66c
 * Entry: 0019d66c
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_0019d66c(void)

{
  char cVar1;
  
  if (DAT_005bb826 == '\0') {
    cVar1 = func_0xff2102d0(5,10,2,0,&DAT_005bb9cc,0);
    if ((((((cVar1 == '\x02') &&
           (cVar1 = func_0xff2102d0(5,0xe,2,0,&DAT_005bb9d0,0), cVar1 == '\x02')) &&
          (cVar1 = func_0xff2102d0(5,0x1a,2,0,&DAT_005bb9d4,0), cVar1 == '\x02')) &&
         ((cVar1 = func_0xff2102d0(5,0x12,2,0,&DAT_005bb9d8,0), cVar1 == '\x02' &&
          (cVar1 = func_0xff2102d0(5,0x16,2,0,&DAT_005bb9dc,0), cVar1 == '\x02')))) &&
        ((cVar1 = func_0xff2102d0(5,0xc,2,0,&DAT_005bb9e0,0), cVar1 == '\x02' &&
         ((cVar1 = func_0xff2102d0(5,0x10,2,0,&DAT_005bb9e4,0), cVar1 == '\x02' &&
          (cVar1 = func_0xff2102d0(5,0x1c,2,0,&DAT_005bb9e8,0), cVar1 == '\x02')))))) &&
       ((cVar1 = func_0xff2102d0(5,0x14,2,0,&DAT_005bb9ec,0), cVar1 == '\x02' &&
        (cVar1 = func_0xff2102d0(5,0x18,2,0,&DAT_005bb9f0,0), cVar1 == '\x02')))) {
      DAT_005bb826 = '\x01';
    }
    else {
      DAT_005bb826 = '\0';
      B_eemrdy = 0;
    }
  }
  return;
}

