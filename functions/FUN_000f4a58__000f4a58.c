/*
 * Program: n42.bin
 * Function: FUN_000f4a58
 * Entry: 000f4a58
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_000f4a58(int param_1)

{
  byte bVar1;
  short sVar2;
  
  bVar1 = DAT_003fc34b;
  if (param_1 == 1) {
    bVar1 = DAT_003fc34a;
  }
  sVar2 = (*(ushort *)(_DAT_003fc2e4 + 0xc) & 0xff) - (ushort)bVar1;
  if (sVar2 < 0) {
    sVar2 = sVar2 + 0x78;
  }
  return (int)sVar2 / (int)(uint)_DAT_003fc332 & 0xff;
}

