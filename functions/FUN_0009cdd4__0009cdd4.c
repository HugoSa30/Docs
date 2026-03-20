/*
 * Program: n42.bin
 * Function: FUN_0009cdd4
 * Entry: 0009cdd4
 * Exported by: ExportAllDecompiledFunctions.java
 */


int FUN_0009cdd4(int param_1,int param_2)

{
  uint uVar1;
  
  if ((uint)*(ushort *)(param_2 + 4) ==
      (param_1 + ~((uint)*(ushort *)(param_2 + 2) + (uint)*(ushort *)(param_2 + 6)) & 0xffff)) {
    uVar1 = (uint)(*(ushort *)(param_2 + 2) >> 8) << 5;
  }
  else {
    uVar1 = (uint)*(ushort *)(param_1 * 4 + 0xec00);
  }
  return param_2 + (uVar1 & 0xfffffffe) + 8;
}

