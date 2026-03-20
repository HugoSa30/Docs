/*
 * Program: n42.bin
 * Function: FUN_00142758
 * Entry: 00142758
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00142758(void)

{
  byte bVar1;
  int unaff_r28;
  int unaff_r29;
  byte *unaff_r30;
  int unaff_r31;
  ushort param_11;
  ushort param_12;
  ushort param_13;
  undefined *param_14;
  
  if (((int)(uint)*(byte *)(unaff_r31 + 0x3524) < unaff_r29) ||
     (((*unaff_r30 & 1) != 0 && (DAT_003fc1ac != '\0')))) {
    if (((int)(uint)*(byte *)(unaff_r31 + 0x3524) < unaff_r29) ||
       (((*unaff_r30 & 1) != 0 && (DAT_003fc1ac != '\0')))) {
      DAT_003fb8a9 = '\x01';
    }
  }
  else {
    DAT_003fb8a9 = '\0';
  }
  if (DAT_003fb8a9 == '\0') {
    *unaff_r30 = *unaff_r30 & 0xf7;
  }
  else {
    *unaff_r30 = *unaff_r30 | 8;
  }
  bVar1 = *unaff_r30;
  if ((((((bVar1 & 1) == 0) || ((bVar1 & 8) != 0)) || ((*(byte *)(unaff_r28 + 0x15f) >> 1 & 1) == 0)
       ) || (((*(byte *)(unaff_r28 + 0x15d) >> 1 & 1) == 0 ||
             ((*(byte *)(unaff_r28 + 0x15f) & 1) != 0)))) ||
     (((*(byte *)(unaff_r28 + 0x15d) & 1) != 0 || ((bVar1 & 2) == 0)))) {
    *unaff_r30 = bVar1 & 0xfb;
  }
  else {
    *unaff_r30 = bVar1 | 4;
  }
  bVar1 = tmot;
  param_11 = *(ushort *)(unaff_r28 + 0x15a);
  if ((tmot < DAT_001d3523) && ((*unaff_r30 & 4) != 0)) {
    *unaff_r30 = *unaff_r30 | 0x20;
  }
  else {
    *unaff_r30 = *unaff_r30 & 0xdf;
  }
  if ((bVar1 < DAT_001d3523) || ((*unaff_r30 & 4) == 0)) {
    *unaff_r30 = *unaff_r30 & 0xef;
  }
  else {
    *unaff_r30 = *unaff_r30 | 0x10;
  }
  if ((*unaff_r30 & 0x20) != 0) {
    param_11 = param_11 & 0xd0fc | 0x2203;
  }
  if ((*unaff_r30 & 0x10) != 0) {
    param_11 = param_11 & 0xd0fc | 0x2002;
  }
  param_12 = param_11;
  param_14 = (undefined *)&stack0x0000000c;
  param_13 = param_11;
  func_0xff222958(0xad,&stack0x00000018);
  if (((*unaff_r30 & 4) == 0) || (DAT_003fb8ac != '\0')) {
    DAT_003fb8ab = false;
  }
  else {
    DAT_003fb8ab = true;
  }
  DAT_003fb8ac = '\x01' - ((*unaff_r30 & 4) == 0);
  if ((bool)DAT_003fb8ab) {
    DAT_003fde60 = DAT_001d351e + -0x80;
    _DAT_003fde5c = (ushort)DAT_001d3523;
    _DAT_003fde5e = (ushort)tmot;
  }
  return;
}

