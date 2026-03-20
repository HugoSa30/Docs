/*
 * Program: n42.bin
 * Function: FUN_0013dbf0
 * Entry: 0013dbf0
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_0013dbf0(undefined4 param_1,int param_2,undefined4 param_3,byte param_4,byte *param_5)

{
  char cVar1;
  byte bVar2;
  byte *unaff_r31;
  ushort uStack00000008;
  ushort uStack0000000c;
  ushort uStack00000018;
  undefined *puStack0000001c;
  
  cVar1 = *(char *)(param_2 + -0x470a);
  if (cVar1 == '\0') {
    *unaff_r31 = param_4 | 0x10;
  }
  else {
    *(char *)(param_2 + -0x470a) = cVar1 + -1;
  }
  bVar2 = *unaff_r31;
  if (((bVar2 & 0x20) == 0) || ((bVar2 & 0x40) != 0)) {
    *unaff_r31 = bVar2 & 0x7f;
    DAT_005bb8f8 = TVHSHRIZ;
    if ((bVar2 & 0x10) != 0) {
      DAT_005bb8f8 = TVHSHRIHEL;
    }
  }
  else if (DAT_005bb8f8 == '\0') {
    *unaff_r31 = bVar2 | 0x80;
    if ((*param_5 & 2) != 0) {
      *unaff_r31 = bVar2 & 0xef | 0x80;
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

