/*
 * Program: n42.bin
 * Function: FUN_00141fcc
 * Entry: 00141fcc
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Removing unreachable block (ram,0x00142008) */

uint FUN_00141fcc(int param_1)

{
  uint uVar1;
  int unaff_r31;
  
  uVar1 = param_1 + unaff_r31;
  if ((int)uVar1 < 0) {
    uVar1 = 0;
  }
  else if (0xffff < (int)uVar1) {
    uVar1 = 0xffff;
  }
  uVar1 = (uVar1 & 0xffff) + 0x2586;
  if (0xffff < uVar1) {
    uVar1 = 0xffff;
  }
  return uVar1 & 0xffff;
}

