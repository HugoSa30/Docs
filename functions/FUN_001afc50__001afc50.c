/*
 * Program: n42.bin
 * Function: FUN_001afc50
 * Entry: 001afc50
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001afc50(undefined4 param_1)

{
  uint uVar1;
  
  _DAT_003fc5dc = &DAT_0001ff28;
  _DAT_003fc5d8 = param_1;
  (*(code *)&SUB_00fafb34)();
  uVar1 = 0;
  do {
    if (*(int *)(_DAT_003fc5dc + uVar1 * 0x10) != 0) {
      (*(code *)&SUB_00faf874)(0x678a8,1,*(int *)(_DAT_003fc5dc + uVar1 * 0x10),9);
    }
    uVar1 = uVar1 + 1 & 0xffff;
  } while (uVar1 == 0);
  _DAT_003fc66a = (*(code *)&SUB_00faf148)();
  _DAT_003fc66c = 0;
  _DAT_003fc5e0 = 2;
  return;
}

