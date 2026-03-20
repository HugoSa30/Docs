/*
 * Program: n42.bin
 * Function: FUN_0019d578
 * Entry: 0019d578
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_0019d578(void)

{
  char cVar1;
  
  if (DAT_005bb8ec == '\0') {
    if (DAT_005bb94e < top_w) {
      cVar1 = func_0xff2102d0(4,0x10,2,0,&top_w,0);
      if (cVar1 == '\x02') {
        DAT_005bb8ec = '\x01';
      }
      else {
        DAT_005bb8ec = '\0';
        B_eemrdy = 0;
      }
    }
    else {
      DAT_005bb8ec = '\x01';
    }
  }
  return;
}

