/*
 * Program: n42.bin
 * Function: FUN_00110b9c
 * Entry: 00110b9c
 * Exported by: ExportAllDecompiledFunctions.java
 */


undefined FUN_00110b9c(byte *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                      undefined4 param_5)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined uVar4;
  uint uVar5;
  
  bVar1 = *param_1;
  uVar5 = (uint)param_1[1];
  param_1 = param_1 + 2;
  uVar2 = FUN_001109ec(param_1,(uint)bVar1,param_2,param_4,param_5,param_3);
  uVar3 = FUN_001109ec(param_1 + bVar1,uVar5,param_3);
  uVar4 = FUN_00110b18(param_1 + bVar1 + uVar5,uVar5,uVar2,uVar3);
  return uVar4;
}

