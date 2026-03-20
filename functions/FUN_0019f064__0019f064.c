/*
 * Program: n42.bin
 * Function: FUN_0019f064
 * Entry: 0019f064
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_0019f064(void)

{
  char cVar1;
  uint uVar2;
  undefined local_20 [28];
  
  uVar2 = 0;
  do {
    local_20[uVar2] = (&DAT_001c0210)[uVar2];
    uVar2 = uVar2 + 1 & 0xff;
  } while (uVar2 < 0x11);
  if (DAT_003faad6 == '\0') {
    cVar1 = func_0xff2102d0(1,2,0x11,0,local_20,0);
    if (cVar1 == '\x02') {
      DAT_003faad6 = '\x01';
    }
    else {
      DAT_003faad6 = '\0';
      B_eemrdy = 0;
    }
  }
  return;
}

