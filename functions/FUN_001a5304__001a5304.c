/*
 * Program: n42.bin
 * Function: FUN_001a5304
 * Entry: 001a5304
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_001a5304(undefined *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(_DAT_003fbd7c + 8);
  uVar1 = *(short *)(_DAT_003fbd7c + 6) - 1;
  uVar2 = (uint)*(byte *)(iVar3 + 2);
  DAT_005baa0b = 0;
  if (uVar1 < 2) {
    DAT_005baa0b = 0;
    return 1;
  }
  if (uVar2 == 6) {
    if (uVar1 != 5) {
LAB_001a5378:
      *param_1 = 0x12;
      return 0;
    }
LAB_001a53f8:
    uVar2 = (uint)*(byte *)(iVar3 + 3) << 0x10 | (uint)*(byte *)(iVar3 + 4) << 8 |
            (uint)*(byte *)(iVar3 + 5);
  }
  else {
    if (uVar1 != 2) goto LAB_001a5378;
    if (uVar2 < 5) {
      if (uVar2 == 4) {
        uVar2 = 0xe100;
        goto LAB_001a5434;
      }
      if (uVar2 == 1) {
        uVar2 = 0x2580;
        goto LAB_001a5434;
      }
      if (uVar2 == 2) {
        uVar2 = 0x4b00;
        goto LAB_001a5434;
      }
      if (uVar2 == 3) {
        uVar2 = 0x9600;
        goto LAB_001a5434;
      }
    }
    else {
      if (uVar2 == 5) {
        uVar2 = 0x1c200;
        goto LAB_001a5434;
      }
      if (uVar2 == 6) goto LAB_001a53f8;
    }
    uVar2 = (1 << ((int)uVar2 >> 5)) * ((*(byte *)(iVar3 + 2) & 0x1f) + 0x20) * 200;
  }
LAB_001a5434:
  iVar3 = (**(code **)(_DAT_003fbd60 + 0xc))(uVar2);
  if (iVar3 == 0) {
    DAT_005baa0b = 1;
    return 1;
  }
  *param_1 = 0x31;
  return 0;
}

