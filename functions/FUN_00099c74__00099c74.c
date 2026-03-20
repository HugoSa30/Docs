/*
 * Program: n42.bin
 * Function: FUN_00099c74
 * Entry: 00099c74
 * Exported by: ExportAllDecompiledFunctions.java
 */


uint FUN_00099c74(int param_1)

{
  uint uVar1;
  
  if ((DAT_003fa124 & (&DAT_003fce40)[param_1 * 8]) == 0) {
    uVar1 = 0x10000;
  }
  else {
    uVar1 = (uint)**(ushort **)(&DAT_003fce3c + param_1 * 8);
  }
  return uVar1;
}

