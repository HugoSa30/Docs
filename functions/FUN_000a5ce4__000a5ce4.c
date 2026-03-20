/*
 * Program: n42.bin
 * Function: FUN_000a5ce4
 * Entry: 000a5ce4
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_000a5ce4(int param_1,byte *param_2,undefined *param_3)

{
  undefined uVar1;
  
  uVar1 = FUN_000a5d64(param_1);
  *param_3 = uVar1;
  *param_2 = (byte)((ushort)*(undefined2 *)(&UNK_00306006 + param_1 * 8) >> 0xf);
  return;
}

