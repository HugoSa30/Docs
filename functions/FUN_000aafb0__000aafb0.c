/*
 * Program: n42.bin
 * Function: FUN_000aafb0
 * Entry: 000aafb0
 * Exported by: ExportAllDecompiledFunctions.java
 */


uint FUN_000aafb0(int param_1,int param_2,uint param_3,uint param_4)

{
  uint uVar1;
  ushort *puVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = param_4 & 0xffff;
  puVar2 = (ushort *)(param_1 + ((param_4 >> 0x10) + param_2 * (param_3 >> 0x10)) * 2);
  uVar4 = (uint)*puVar2;
  if (uVar1 != 0) {
    uVar4 = uVar4 + ((int)(uVar1 * (puVar2[1] - uVar4)) >> 0x10);
  }
  if ((param_3 & 0xffff) != 0) {
    uVar3 = (uint)puVar2[param_2];
    uVar4 = uVar4 + ((int)((param_3 & 0xffff) *
                          ((uVar3 + ((int)(uVar1 * ((puVar2 + param_2)[1] - uVar3)) >> 0x10) &
                           0xffff) - (uVar4 & 0xffff))) >> 0x10);
  }
  return uVar4 & 0xffff;
}

