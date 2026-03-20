/*
 * Program: n42.bin
 * Function: FUN_000df9d4
 * Entry: 000df9d4
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_000df9d4(void)

{
  uint uVar1;
  
  if (B_nomsr_um == '\0') {
    DAT_003f9b7f = DAT_001c0ea4;
  }
  else if (DAT_003f9b7f != '\0') {
    DAT_003f9b7f = DAT_003f9b7f + -1;
  }
  if (((DAT_003fbe9f == '\0') || (DAT_003f9b7f == '\0')) || (DAT_003fbeaf == '\0')) {
    mimsr_w = 0;
  }
  else {
    uVar1 = calc_value_from_y(0x1c0ea6,nmot_w);
    if ((uint)DAT_005b8ff8 << 8 < (uVar1 & 0xffff)) {
      mimsr_w = (ushort)DAT_005b8ff8 << 8;
    }
    else {
      mimsr_w = (word)uVar1;
    }
  }
  return;
}

