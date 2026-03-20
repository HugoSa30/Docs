/*
 * Program: n42.bin
 * Function: FUN_0019d484
 * Entry: 0019d484
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_0019d484(void)

{
  char cVar1;
  
  if (DAT_003fa67a == '\x01') {
    if (DAT_003fa67b == '\0') {
      cVar1 = func_0xff2102d0(6,2,0x79,0,&DAT_003fe8b2,0);
      if (cVar1 == '\x02') {
        DAT_003fa67b = '\x01';
      }
      else {
        DAT_003fa67b = '\0';
        B_eemrdy = 0;
      }
    }
  }
  else {
    B_eemrdy = 0;
  }
  return;
}

