/*
 * Program: n42.bin
 * Function: FUN_000a81f0
 * Entry: 000a81f0
 * Exported by: ExportAllDecompiledFunctions.java
 */


uint FUN_000a81f0(ushort *param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = (uint)*param_1;
  param_1 = param_1 + uVar2 + 1;
  uVar1 = FUN_000a80a0(param_1,uVar2,param_2);
  uVar3 = (uint)param_1[(uVar1 >> 0x10) - uVar2];
  return uVar3 + ((int)((uVar1 & 0xffff) * ((param_1 + ((uVar1 >> 0x10) - uVar2))[1] - uVar3)) >>
                 0x10) & 0xffff;
}

