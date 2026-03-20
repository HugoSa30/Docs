/*
 * Program: n42.bin
 * Function: FUN_000f5aac
 * Entry: 000f5aac
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000f5aac(byte *param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = param_2 & 0xff;
  if (((uVar1 < 4) && (*(int *)(_DAT_003fc5a8 + uVar1 * 0xc) != 0)) &&
     (3 < *(int *)(&UNK_003fc44c + uVar1 * 0x70))) {
    *param_1 = (byte)((ushort)**(undefined2 **)(_DAT_003fc5a8 + param_2 * 0xc + 4) >> 0xf);
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

