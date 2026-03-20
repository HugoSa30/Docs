/*
 * Program: n42.bin
 * Function: FUN_000a7cf8
 * Entry: 000a7cf8
 * Exported by: ExportAllDecompiledFunctions.java
 */


uint FUN_000a7cf8(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = param_3 * 0x10000 + param_4;
  uVar3 = param_5 * 0x10000 + param_6;
  uVar4 = param_7 * 0x10000 + param_8;
  uVar1 = uVar2 + param_1 * param_2;
  if (((uVar2 <= uVar1) && (uVar1 <= uVar4)) && (uVar4 = uVar1, uVar1 < uVar3)) {
    uVar4 = uVar3;
  }
  return uVar4;
}

