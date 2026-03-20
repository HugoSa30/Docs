/*
 * Program: n42.bin
 * Function: FUN_000f4540
 * Entry: 000f4540
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000f4540(undefined4 *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  
  if (_DAT_003fc2f8 < 7) {
    uVar1 = 0;
  }
  else {
    uVar2 = *_DAT_003fc2e4 & 0xffffff;
    if (_DAT_003fc2f8 < 10) {
      uVar3 = *(uint *)(_DAT_003fc2e8 + 4) & 0xffffff;
      if (uVar3 * 2 < uVar2) {
        uVar2 = uVar3;
      }
    }
    uVar1 = (*(code *)&SUB_000655d8)(uVar2);
    *param_1 = uVar1;
    uVar1 = 1;
  }
  return uVar1;
}

