/*
 * Program: n42.bin
 * Function: FUN_000c09d8
 * Entry: 000c09d8
 * Exported by: ExportAllDecompiledFunctions.java
 */


uint FUN_000c09d8(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = param_2 >> 8 & 0xff;
  if (uVar2 < param_3 - 1U) {
    uVar1 = (uint)*(ushort *)(param_1 + uVar2 * 2);
    uVar2 = uVar1 + ((int)(((param_2 & 0xffff) + uVar2 * -0x100) *
                          (*(ushort *)(param_1 + uVar2 * 2 + 2) - uVar1)) >> 8) & 0xffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(param_1 + param_3 * 2 + -2);
  }
  return uVar2;
}

