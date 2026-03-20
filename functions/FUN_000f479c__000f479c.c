/*
 * Program: n42.bin
 * Function: FUN_000f479c
 * Entry: 000f479c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000f479c(undefined4 *param_1,int param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  
  if (_DAT_003fc2f8 < 5) {
    uVar2 = 0;
  }
  else {
    if (param_2 == 1) {
      uVar1 = *(ushort *)(_DAT_003fc2e8 + 0xe);
    }
    else {
      uVar1 = *(ushort *)(_DAT_003fc2f4 + 0xe);
    }
    uVar2 = (*(code *)&SUB_000655d8)((uint)uVar1 << 6);
    *param_1 = uVar2;
    uVar2 = 1;
  }
  return uVar2;
}

