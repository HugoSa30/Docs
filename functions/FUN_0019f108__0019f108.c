/*
 * Program: n42.bin
 * Function: FUN_0019f108
 * Entry: 0019f108
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_0019f108(void)

{
  char cVar1;
  
  if (DAT_003fab08 == '\0') {
    cVar1 = func_0xff2102d0(4,0x14,2,0,&anzpbr_w,0);
    if ((cVar1 == '\x02') && (cVar1 = func_0xff2102d0(4,0x16,2,0,&kmstpbr_w,0), cVar1 == '\x02')) {
      DAT_003fab08 = '\x01';
    }
    else {
      DAT_003fab08 = '\0';
      B_eemrdy = 0;
    }
  }
  return;
}

