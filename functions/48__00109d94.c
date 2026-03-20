/*
 * Program: n42.bin
 * Function: 48
 * Entry: 00109d94
 * Exported by: ExportAllDecompiledFunctions.java
 */


uint _8(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 == 1) {
    uVar1 = param_1 << 0x15;
    uVar2 = 0;
  }
  else {
    uVar1 = param_1 << 3;
    uVar2 = param_1 * 2 & 0x7fffeU | 0x180000;
  }
  return uVar1 & 0xffe00000 | uVar2;
}

