/*
 * Program: n42.bin
 * Function: FUN_000afc90
 * Entry: 000afc90
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_000afc90(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4)

{
  bool bVar1;
  bool bVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  
  uVar5 = FUN_000afde8();
  uVar4 = (uint)(uVar5 >> 0x20);
  bVar2 = 0x7fffffff < uVar4;
  uVar3 = uVar5;
  if (bVar2) {
    uVar3 = CONCAT44(-(((int)uVar5 != 0) + uVar4),-(int)uVar5);
  }
  bVar1 = 0 < (int)param_3;
  if (param_3 == 0) {
    bVar1 = param_4 != 0;
  }
  if (!bVar1) {
    if ((param_3 | param_4) == 0) {
      if (uVar5 < 0x8000000000000000) {
        uVar6 = 0x7fffffffffffffff;
      }
      else {
        uVar6 = 0x8000000000000000;
      }
      goto LAB_000afd54;
    }
    bVar2 = param_4 != 0;
    param_4 = -param_4;
    param_3 = -(bVar2 + param_3);
    bVar2 = uVar4 < 0x80000000;
  }
  uVar6 = FUN_000afa20((int)(uVar3 >> 0x20),(int)uVar3);
  if (bVar2) {
    uVar6 = CONCAT44(-((uint)((int)uVar6 != 0) + (int)((ulonglong)uVar6 >> 0x20)),-(int)uVar6);
  }
LAB_000afd54:
  FUN_000afe3c((int)((ulonglong)uVar6 >> 0x20),(int)uVar6);
  if ((param_3 | param_4) != 0) {
    FUN_000afa20();
  }
  return;
}

