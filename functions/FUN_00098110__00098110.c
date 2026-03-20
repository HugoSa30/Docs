/*
 * Program: n42.bin
 * Function: FUN_00098110
 * Entry: 00098110
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00098110(int param_1)

{
  int iVar1;
  undefined uVar2;
  
  iVar1 = _DAT_003faf10 + param_1 * 0x18;
  param_1 = param_1 * 0x14;
  if (*(char *)(iVar1 + 2) == -1) {
    if ((*(byte *)(iVar1 + 1) & 1) != 1) {
      uVar2 = 1;
      *(undefined *)(_DAT_003fae80 + param_1 + 10) = 1;
      goto LAB_0009816c;
    }
    uVar2 = 2;
  }
  else {
    uVar2 = 0;
  }
  *(undefined *)(_DAT_003fae80 + param_1 + 10) = uVar2;
  uVar2 = 0;
LAB_0009816c:
  *(undefined *)(_DAT_003fae80 + param_1 + 0xe) = uVar2;
  return;
}

