/*
 * Program: n42.bin
 * Function: FUN_001e1cf0
 * Entry: 001e1cf0
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_001e1cf0(int param_1,char param_2,uint param_3,uint param_4)

{
  undefined4 uVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  
  bVar4 = param_2 + 0x23;
  if (bVar4 < 0x23) {
    bVar4 = 0xff;
  }
  bVar2 = 0;
  if (bVar4 != 0) {
    do {
      if (param_3 < 0x80000000) {
        param_3 = param_3 * 2;
      }
      else {
        uVar3 = _DAT_00ffff80;
        if (param_1 != 5) {
          uVar3 = *(uint *)(param_1 * 4 + 0xffff84);
        }
        if ((uVar3 == 0) || (uVar3 == 0xffffffff)) {
          param_3 = 0;
        }
        else {
          param_3 = uVar3 ^ param_3 * 2;
        }
      }
      bVar2 = bVar2 + 1;
    } while (bVar2 < bVar4);
  }
  if ((param_3 == param_4) && (param_3 != 0)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

