/*
 * Program: n42.bin
 * Function: FUN_0013e824
 * Entry: 0013e824
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_0013e824(uint param_1)

{
  uint uVar1;
  
  if (param_1 < 0x154) {
    uVar1 = param_1 * 3 >> 2;
    if (0xfffe < uVar1) {
      uVar1 = 0xffff;
    }
    DAT_003f9b9b = (undefined)uVar1;
  }
  else {
    DAT_003f9b9b = 0xff;
  }
  if (B_tabunpl == '\0') {
    if (tabst_w / 0x3c < 0xfe) {
      DAT_003f9b9c = (undefined)(tabst_w / 0x3c);
    }
    else {
      DAT_003f9b9c = 0xfe;
    }
  }
  else {
    DAT_003f9b9c = 0xff;
  }
  return;
}

