/*
 * Program: n42.bin
 * Function: FUN_0010e4a8
 * Entry: 0010e4a8
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0010e4a8(void)

{
  int iVar1;
  
  iVar1 = (**(code **)(_DAT_003fbaa4 + 0x14))(&UNK_003fffa8,_DAT_003fbb28);
  if (((iVar1 == 0) || (iVar1 = (**(code **)(_DAT_003fbaa4 + 0x18))(&UNK_003fffa8), iVar1 == 0)) ||
     (iVar1 = (**(code **)(_DAT_003fbaa4 + 0x1c))(&UNK_003fffa8), iVar1 == 0)) {
    FUN_0010eae8();
  }
  else {
    DAT_003fbd5a = 1;
    DAT_003fbd5b = 0;
    _DAT_003fbd54 = _DAT_003fffb8;
    DAT_003fbd58 = DAT_003fffb5;
  }
  return;
}

