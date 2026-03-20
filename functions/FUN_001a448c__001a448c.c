/*
 * Program: n42.bin
 * Function: FUN_001a448c
 * Entry: 001a448c
 * Exported by: ExportAllDecompiledFunctions.java
 */


undefined4 FUN_001a448c(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 local_10;
  undefined2 uStack_e;
  
  iVar2 = *(int *)(param_1 * 4 + 0xf09940);
  uVar1 = _8(param_3,param_4);
  _5();
  iVar2 = iVar2 + param_2 * 0x10;
  uStack_e = (undefined2)uVar1;
  *(undefined2 *)(iVar2 + 0x84) = uStack_e;
  local_10 = (undefined2)((uint)uVar1 >> 0x10);
  *(undefined2 *)(iVar2 + 0x82) = local_10;
  _6();
  return 1;
}

