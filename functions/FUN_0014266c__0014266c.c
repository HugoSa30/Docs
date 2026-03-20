/*
 * Program: n42.bin
 * Function: FUN_0014266c
 * Entry: 0014266c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0014266c(int param_1)

{
  char cVar1;
  byte bVar2;
  int unaff_r28;
  byte *unaff_r29;
  byte *unaff_r30;
  ushort uStack00000008;
  ushort uStack0000000c;
  ushort uStack00000018;
  undefined *in_stack_0000001c;
  
  cVar1 = *(char *)(param_1 + -0x40a9);
  if ((cVar1 == '\0') || (DAT_003fb8a8 != '\0')) {
    DAT_003fb8a7 = false;
  }
  else {
    DAT_003fb8a7 = true;
  }
  if ((bool)DAT_003fb8a7) {
    DAT_005b8c39 = DAT_005b90d4;
  }
  DAT_005b8c3a = DAT_005b8c39;
  DAT_003fb8a8 = cVar1;
  if ((uint)DAT_001d3522 + (uint)DAT_005b8c39 < (uint)DAT_005b90d4) {
    *unaff_r29 = *unaff_r29 | 1;
  }
  else {
    *unaff_r29 = *unaff_r29 & 0xfe;
  }
  if (B_sa == '\0') {
    DAT_003fb8aa = 0;
  }
  if (((*unaff_r30 & 1) != 0) && (B_sa != '\0')) {
    func_0xff221d08(&DAT_003fb8aa);
  }
  DAT_005b8c3b = DAT_003fb8aa;
  if ((bRam001d3524 < DAT_003fb8aa) || (((*unaff_r30 & 1) != 0 && (DAT_003fc1ac != '\0')))) {
    if ((bRam001d3524 < DAT_003fb8aa) || (((*unaff_r30 & 1) != 0 && (DAT_003fc1ac != '\0')))) {
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
  bVar2 = *unaff_r30;
  if ((((((bVar2 & 1) == 0) || ((bVar2 & 8) != 0)) || ((*(byte *)(unaff_r28 + 0x15f) >> 1 & 1) == 0)
       ) || (((*(byte *)(unaff_r28 + 0x15d) >> 1 & 1) == 0 ||
             ((*(byte *)(unaff_r28 + 0x15f) & 1) != 0)))) ||
     (((*(byte *)(unaff_r28 + 0x15d) & 1) != 0 || ((bVar2 & 2) == 0)))) {
    *unaff_r30 = bVar2 & 0xfb;
  }
  else {
    *unaff_r30 = bVar2 | 4;
  }
  bVar2 = tmot;
  uStack00000008 = *(ushort *)(unaff_r28 + 0x15a);
  if ((tmot < DAT_001d3523) && ((*unaff_r30 & 4) != 0)) {
    *unaff_r30 = *unaff_r30 | 0x20;
  }
  else {
    *unaff_r30 = *unaff_r30 & 0xdf;
  }
  if ((bVar2 < DAT_001d3523) || ((*unaff_r30 & 4) == 0)) {
    *unaff_r30 = *unaff_r30 & 0xef;
  }
  else {
    *unaff_r30 = *unaff_r30 | 0x10;
  }
  if ((*unaff_r30 & 0x20) != 0) {
    uStack00000008 = uStack00000008 & 0xd0fc | 0x2203;
  }
  if ((*unaff_r30 & 0x10) != 0) {
    uStack00000008 = uStack00000008 & 0xd0fc | 0x2002;
  }
  uStack0000000c = uStack00000008;
  in_stack_0000001c = (undefined *)&stack0x0000000c;
  uStack00000018 = uStack00000008;
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

