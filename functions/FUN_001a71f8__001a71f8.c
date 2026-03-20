/*
 * Program: n42.bin
 * Function: FUN_001a71f8
 * Entry: 001a71f8
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_001a71f8(int param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  iVar3 = 0;
  uVar5 = (1000000000 / _DAT_00f07e68) / 100;
  uVar2 = 2000000 / uVar5;
  uVar5 = 150000 / uVar5;
  iVar6 = uVar2 - uVar5;
  if ((0 < param_1 - iVar6) && (uVar7 = (uint)DAT_003fb9c0, iVar4 = param_1, uVar7 < 8)) {
    do {
      if (param_2 != 0) {
        DAT_003f9b7a = DAT_003f9b7a | (byte)(1 << (uVar7 & 0x3f));
      }
      uVar7 = uVar7 + 1;
      param_1 = param_1 - uVar2;
      iVar3 = iVar3 + uVar5;
    } while ((0 < (iVar4 - iVar6) - iVar6) && (iVar4 = iVar4 - iVar6, (uVar7 & 0xff) < 8));
    DAT_003fb9c0 = (byte)uVar7;
  }
  if (DAT_003fb9c0 == 8) {
    _DAT_003fb9c8 = 3;
  }
  if ((iVar3 < param_1) || (param_1 < -iVar3)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

