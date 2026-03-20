/*
 * Program: n42.bin
 * Function: FUN_001a7df4
 * Entry: 001a7df4
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_001a7df4(uint param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (*(byte *)(_DAT_003fbd48 + 2) == param_1) {
    iVar3 = 0;
  }
  else {
    iVar3 = 0;
    DAT_003fbb90 = 0;
    if (*(char *)(_DAT_003fbb84 + 8) == '\0') {
      DAT_003fbb90 = 0;
      DAT_003fbbe0 = 0;
      return 0;
    }
    do {
      if (iVar3 != 0) goto LAB_001a7ee8;
      uVar1 = (uint)*(byte *)(_DAT_003fbb8c + (uint)DAT_003fbb90 * 0x14);
      if (((param_1 == uVar1) ||
          ((*(byte *)(_DAT_003fbd48 + 2) == uVar1 && (iVar2 = FUN_0010b1e0(param_1), iVar2 != 0))))
         && (iVar2 = (**(code **)(_DAT_003fbb8c + (uint)DAT_003fbb90 * 0x14 + 4))(), iVar2 != 0)) {
        iVar3 = 1;
      }
      DAT_003fbb90 = DAT_003fbb90 + 1;
    } while (DAT_003fbb90 < *(byte *)(_DAT_003fbb84 + 8));
  }
  if (iVar3 == 0) {
    DAT_003fbbe0 = 0;
    DAT_003fbb90 = 0;
    return 0;
  }
LAB_001a7ee8:
  DAT_003fbb90 = DAT_003fbb90 - 1;
  DAT_003fbbe0 = 1;
  return iVar3;
}

