/*
 * Program: n42.bin
 * Function: FUN_001a5e0c
 * Entry: 001a5e0c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001a5e0c(int param_1,int param_2)

{
  byte *pbVar1;
  int iVar2;
  
  iVar2 = (uint)*(byte *)(_DAT_003fbe70 + param_2 * 0x2c + 2) * 0x18;
  pbVar1 = &UNK_003fbe48 + iVar2;
  if (param_1 == 0) {
    *pbVar1 = *pbVar1 & 0x7f | 0x80;
    return;
  }
  if (param_1 == 1) {
    *pbVar1 = *pbVar1 & 0x7f;
    (&UNK_003fbe49)[iVar2] = (&UNK_003fbe49)[iVar2] & 0x7f;
  }
  return;
}

