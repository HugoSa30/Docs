/*
 * Program: n42.bin
 * Function: FUN_00108000
 * Entry: 00108000
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00108000(int param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined2 uVar3;
  
  uVar1 = _DAT_00f07e64 >> 5;
  if (uVar1 / 0x1fff < param_2) {
    param_2 = (uVar1 + (param_2 >> 1)) / param_2;
    *(short *)(param_3 + 1) = (short)param_2;
    if ((param_2 & 0xffff) != 0) goto LAB_00108044;
    uVar3 = 1;
  }
  else {
    uVar3 = 0x1fff;
  }
  *(undefined2 *)(param_3 + 1) = uVar3;
LAB_00108044:
  if ((*(ushort *)(*(int *)(param_1 + 4) + 0x36) & 0x200) == 0) {
    uVar2 = 1250000000;
  }
  else {
    uVar2 = 0x51f4d5c0;
  }
  *param_3 = uVar2 / ((uint)_DAT_00f096ce * (uVar1 / *(ushort *)(param_3 + 1) >> 3));
  return uVar1 / *(ushort *)(param_3 + 1);
}

