/*
 * Program: n42.bin
 * Function: FUN_001e5c50
 * Entry: 001e5c50
 * Exported by: ExportAllDecompiledFunctions.java
 */


int FUN_001e5c50(int param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  
  if (param_2 <= param_3) {
    do {
      uVar1 = *param_2;
      param_1 = param_1 + uVar1 * 0x1000000 + (uVar1 & 0xff00) * 0x100 + (uVar1 >> 8 & 0xff00) +
                (uVar1 >> 0x18);
      param_2 = param_2 + 1;
    } while (param_2 <= param_3);
  }
  return param_1;
}

