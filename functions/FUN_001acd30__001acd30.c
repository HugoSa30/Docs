/*
 * Program: n42.bin
 * Function: FUN_001acd30
 * Entry: 001acd30
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_001acd30(int param_1,uint param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint in_TBLr;
  int in_TBUr;
  
  uVar2 = in_TBUr * 0x6666 + (int)((ulonglong)in_TBLr * 0x6666 >> 0x20);
  uVar4 = uVar2 * 0x10000 | in_TBLr * 0x6666 >> 0x10;
  uVar2 = uVar2 >> 0x10;
  uVar5 = uVar2 + param_1 + (uint)CARRY4(uVar4,param_2);
  bVar1 = uVar2 < uVar5;
  if (uVar2 == uVar5) {
    bVar1 = uVar4 < uVar4 + param_2;
  }
  if (bVar1) {
    do {
      uVar3 = in_TBUr * 0x6666 + (int)((ulonglong)in_TBLr * 0x6666 >> 0x20);
      uVar2 = uVar3 >> 0x10;
      bVar1 = uVar2 < uVar5;
      if (uVar2 == uVar5) {
        bVar1 = (uVar3 * 0x10000 | in_TBLr * 0x6666 >> 0x10) < uVar4 + param_2;
      }
    } while (bVar1);
  }
  return;
}

