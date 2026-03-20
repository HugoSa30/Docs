/*
 * Program: n42.bin
 * Function: FUN_000f80b0
 * Entry: 000f80b0
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000f80b0(short param_1,int param_2)

{
  int iVar1;
  
  *(short *)(&UNK_003fc678 + param_2 * 0xc) = param_1;
  iVar1 = (int)((short)(*(short *)(_DAT_003fc670 + param_2 * 2) - param_1) % 0x1c20);
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0x1c20;
  }
  if (DAT_003fc6da == 0) {
    iVar1 = (int)(short)((short)iVar1 + (short)(iVar1 / 0xe10) * -0xe10);
  }
  **(ushort **)(_DAT_003fc674 + param_2 * 0xc + 4) =
       (ushort)(((uint)(iVar1 * 0x3c) / 0xe10 & 0xff) << 9) |
       (ushort)(((uint)(iVar1 * 0x3c00) / 0xe10 & 0xff) << 1) | DAT_003fc6da & 1;
  return 1;
}

