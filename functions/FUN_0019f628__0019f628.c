/*
 * Program: n42.bin
 * Function: FUN_0019f628
 * Entry: 0019f628
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_0019f628(void)

{
  char cVar1;
  
  if (DAT_003fb356 == '\0') {
    cVar1 = func_0xff2102d0(5,2,2,0,&dmvadll_w,0);
    if ((((cVar1 == '\x02') && (cVar1 = func_0xff2102d0(5,4,2,0,&dmvadko_w,0), cVar1 == '\x02')) &&
        (cVar1 = func_0xff2102d0(5,6,2,0,&dmvadfs_w,0), cVar1 == '\x02')) &&
       (cVar1 = func_0xff2102d0(5,8,2,0,&dmvadfk_w,0), cVar1 == '\x02')) {
      DAT_003fb356 = '\x01';
    }
    else {
      DAT_003fb356 = '\0';
      B_eemrdy = 0;
    }
  }
  return;
}

