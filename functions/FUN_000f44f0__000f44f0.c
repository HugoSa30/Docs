/*
 * Program: n42.bin
 * Function: FUN_000f44f0
 * Entry: 000f44f0
 * Exported by: ExportAllDecompiledFunctions.java
 */


undefined4 FUN_000f44f0(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)&SUB_000655d8)(*(undefined4 *)(&DAT_003fc318 + param_2 * 4));
  *param_1 = uVar1;
  return 1;
}

