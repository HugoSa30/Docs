/*
 * Program: n42.bin
 * Function: FUN_000a7b40
 * Entry: 000a7b40
 * Exported by: ExportAllDecompiledFunctions.java
 */


uint FUN_000a7b40(int param_1,int param_2,ushort param_3)

{
  uint uVar1;
  
  if (param_3 == 0) {
    uVar1 = 0xffff;
  }
  else {
    uVar1 = (uint)(param_1 * 0x10000 + param_2) / (uint)param_3;
    if (0xffff < uVar1) {
      uVar1 = 0xffff;
    }
  }
  return uVar1 & 0xffff;
}

