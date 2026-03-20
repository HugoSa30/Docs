/*
 * Program: n42.bin
 * Function: FUN_0009b508
 * Entry: 0009b508
 * Exported by: ExportAllDecompiledFunctions.java
 */


undefined4 FUN_0009b508(uint *param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  
  uVar1 = param_1[0xb];
  if (param_2 != 0) {
    if ((param_2 & 0xff) != 0) {
      if ((param_3 & 0xff) == 0) {
        uVar1 = uVar1 & 0xfffffbff;
      }
      else {
        uVar1 = uVar1 | 0x400;
      }
    }
    if ((param_2 >> 8 & 0xff) != 0) {
      if ((param_3 >> 8 & 0xff) == 0) {
        uVar1 = uVar1 & 0xfffff7ff;
      }
      else {
        uVar1 = uVar1 | 0x800;
      }
    }
    if ((param_2 >> 0x10 & 0xff) != 0) {
      if ((param_3 >> 0x10 & 0xff) == 0) {
        uVar1 = uVar1 & 0xffffefff;
      }
      else {
        uVar1 = uVar1 | 0x1000;
      }
    }
    if (((param_2 >> 0x18 & 3) != 0) && ((*param_1 >> 0x11 & 3) == 1)) {
      *param_1 = *param_1 & 0xfff9ffff;
      *param_1 = *param_1 | 0x20000;
    }
    if (param_2 >> 0x18 != 0) {
      uVar1 = uVar1 & 0xffffff | param_3 & 0xff000000;
    }
    param_1[0xb] = uVar1;
    param_1[10] = param_4 & param_2 & param_3;
  }
  return 0;
}

