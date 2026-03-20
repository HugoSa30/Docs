/*
 * Program: n42.bin
 * Function: FUN_00130668
 * Entry: 00130668
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_00130668(void)

{
  uint uVar1;
  
  FUN_00179000();
  fketm = 0x40;
  kezmxmit = 0xffff;
  uVar1 = 0;
  do {
    (&DAT_005b9ae8)[uVar1] = 0xffff;
    (&DAT_005b9154)[uVar1] = REFINI;
    (&DAT_005b9160)[uVar1] = KRVST;
    uVar1 = uVar1 + 1 & 0xff;
  } while (uVar1 < 4);
  return;
}

