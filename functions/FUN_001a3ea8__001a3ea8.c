/*
 * Program: n42.bin
 * Function: FUN_001a3ea8
 * Entry: 001a3ea8
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_001a3ea8(int param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  
  param_1 = param_1 * 5;
  bVar1 = *(byte *)(param_1 + 0xf2321b);
  if (bVar1 != 0) {
    bVar2 = *(byte *)(param_1 + 0xf2321a);
    iVar4 = (int)(uint)bVar2 >> 3;
    bVar3 = *(byte *)(param_1 + 0xf23218);
    _5();
    iVar5 = (uint)bVar3 * 0x14;
    param_2[1] = *(byte *)(_DAT_003fae80 + iVar5 + 0xf);
    *param_2 = (byte)((int)(uint)*(ushort *)(_DAT_003fae80 + iVar5 + iVar4) >>
                     ((uint)bVar2 + iVar4 * -8 & 0x3f)) & (char)(1 << (bVar1 & 0x3f)) - 1U;
    _6();
  }
  return param_2[1];
}

