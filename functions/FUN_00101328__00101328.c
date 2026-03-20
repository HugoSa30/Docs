/*
 * Program: n42.bin
 * Function: FUN_00101328
 * Entry: 00101328
 * Exported by: ExportAllDecompiledFunctions.java
 */


ushort FUN_00101328(int param_1,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  undefined4 *puVar3;
  undefined4 local_18;
  undefined4 local_14;
  
  uVar2 = 0;
  if (param_2 != 0) {
    puVar3 = (undefined4 *)(param_1 + -8);
    do {
      local_18 = puVar3[2];
      local_14 = puVar3[3];
      uVar1 = func_0xff7bcca4(&local_18);
      uVar2 = uVar2 | uVar1;
      param_2 = param_2 + -1;
      puVar3 = puVar3 + 2;
    } while (param_2 != 0);
  }
  return uVar2;
}

