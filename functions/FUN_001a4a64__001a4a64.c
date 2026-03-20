/*
 * Program: n42.bin
 * Function: FUN_001a4a64
 * Entry: 001a4a64
 * Exported by: ExportAllDecompiledFunctions.java
 */


byte FUN_001a4a64(int param_1)

{
  char cVar1;
  int iVar2;
  undefined uVar3;
  byte bVar4;
  int in_TBLr;
  
  iVar2 = DAT_005ba9f0;
  DAT_005baa24 = 1;
  param_1 = param_1 * 0xc;
  *(undefined *)(*(int *)(DAT_005ba9f0 + 0x18) + param_1) = 1;
  cVar1 = *(char *)(*(int *)(iVar2 + 0x18) + param_1);
  if (cVar1 == '\x02') {
LAB_001a4ac0:
    uVar3 = 3;
    DAT_005ba9f8 = in_TBLr;
  }
  else {
    if (cVar1 != '\x03') {
      if (cVar1 != '\x04') goto LAB_001a4b10;
      goto LAB_001a4ac0;
    }
    if (*(uint *)(iVar2 + 0x20) < (uint)(DAT_005ba9f8 - in_TBLr)) {
      *(undefined *)(*(int *)(DAT_005ba9f0 + 0x18) + param_1) = 4;
    }
    uVar3 = 1;
  }
  *(undefined *)(*(int *)(DAT_005ba9f0 + 0x18) + param_1) = uVar3;
LAB_001a4b10:
  bVar4 = *(byte *)(*(int *)(DAT_005ba9f0 + 0x18) + param_1);
  if (4 < bVar4) {
    bVar4 = 1;
  }
  return bVar4;
}

