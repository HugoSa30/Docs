/*
 * Program: n42.bin
 * Function: FUN_000a35ac
 * Entry: 000a35ac
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_000a35ac(void)

{
  uint uVar1;
  byte bVar2;
  ushort local_18;
  undefined auStack_16 [2];
  ushort local_14 [4];
  
  bVar2 = 0;
  do {
    uVar1 = FUN_000a411c(_DAT_00016f00);
    bVar2 = bVar2 + 1;
    if (((int)(uVar1 & 0xff) >> 5 & 1U) != 0) {
      FUN_000a3f10(_DAT_00016f00,0,4,&local_18,auStack_16);
      FUN_000a3f10(_DAT_00016f00,0,5,local_14,auStack_16);
      return (local_14[0] & 0xff) << 8 | local_18 & 0xff;
    }
  } while (bVar2 < 0x1e);
  return 0xffff;
}

