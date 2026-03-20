/*
 * Program: n42.bin
 * Function: FUN_0013dc20
 * Entry: 0013dc20
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_0013dc20(void)

{
  byte bVar1;
  byte *in_r7;
  int in_r11;
  int in_r12;
  byte *unaff_r31;
  ushort uStack00000008;
  ushort uStack0000000c;
  ushort uStack00000018;
  undefined *puStack0000001c;
  
  *(undefined *)(in_r12 + -0x470a) = *(undefined *)(in_r11 + -0x117d);
  bVar1 = *unaff_r31;
  if (((bVar1 & 0x20) == 0) || ((bVar1 & 0x40) != 0)) {
    *unaff_r31 = bVar1 & 0x7f;
    DAT_005bb8f8 = TVHSHRIZ;
    if ((bVar1 & 0x10) != 0) {
      DAT_005bb8f8 = TVHSHRIHEL;
    }
  }
  else if (DAT_005bb8f8 == '\0') {
    *unaff_r31 = bVar1 | 0x80;
    if ((*in_r7 & 2) != 0) {
      *unaff_r31 = bVar1 & 0xef | 0x80;
    }
  }
  else {
    DAT_005bb8f8 = DAT_005bb8f8 + -1;
  }
  if ((*unaff_r31 & 0x10) != 0) {
    uStack00000008 = uStack00000008 & 0xd0fc | 0x2803;
  }
  uStack0000000c = uStack00000008;
  puStack0000001c = (undefined *)&stack0x0000000c;
  uStack00000018 = uStack00000008;
  func_0xff222958(0x5d,&stack0x00000018);
  return;
}

