/*
 * Program: n42.bin
 * Function: FUN_000973a4
 * Entry: 000973a4
 * Exported by: ExportAllDecompiledFunctions.java
 */


undefined4 FUN_000973a4(uint *param_1,uint *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = *param_1;
  *param_2 = ~uVar1;
  if (uVar1 == 0x2ee2) {
    uVar2 = 2;
  }
  else if (uVar1 == 0x3dd3) {
    uVar2 = 3;
  }
  else if (uVar1 == 0x4cc4) {
    uVar2 = 4;
  }
  else if (uVar1 == 0x55555555) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

