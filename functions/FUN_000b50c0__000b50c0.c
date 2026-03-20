/*
 * Program: n42.bin
 * Function: FUN_000b50c0
 * Entry: 000b50c0
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_000b50c0(ushort *param_1)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 < 4) {
    if (bVar1 == 3) {
      if ((*(char *)(param_1 + 0xc) == '\0') || (*(char *)((int)param_1 + 0x1f) == '\0')) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        *(undefined *)(param_1 + 0xe) = 6;
        *(undefined *)(param_1 + 0xd) = 1;
        *(undefined *)(param_1 + 0xf) = 0;
        *(undefined *)((int)param_1 + 0x19) = 0;
        return;
      }
      cVar2 = FUN_000b4e9c(param_1);
      if (cVar2 != '\0') {
        *(undefined *)(param_1 + 0xe) = 1;
        FUN_000b4efc(param_1);
        return;
      }
      FUN_000b4db4(param_1);
      return;
    }
    if (bVar1 == 0) {
      *(undefined *)(param_1 + 0xe) = 4;
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xf) = 0;
      return;
    }
    if (bVar1 == 1) {
      if ((*(char *)(param_1 + 0xc) == '\0') || (*(char *)((int)param_1 + 0x1f) == '\0')) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        *(undefined *)(param_1 + 0xe) = 6;
        *(undefined *)(param_1 + 0xd) = 1;
        *(undefined *)(param_1 + 0xf) = 0;
        *(undefined *)((int)param_1 + 0x19) = 0;
        return;
      }
      if ((*(char *)(param_1 + 0xc) == '\0') || (param_1[4] <= *param_1)) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      if (bVar3) {
        *(undefined *)(param_1 + 0xe) = 4;
        *(undefined *)(param_1 + 0xd) = 0;
        *(undefined *)(param_1 + 0xf) = 0;
        return;
      }
      FUN_000b4f34(param_1);
      return;
    }
    if (bVar1 == 2) {
      if (*(char *)((int)param_1 + 0x1f) == '\0') {
        *(undefined *)(param_1 + 0xe) = 3;
        *(undefined *)(param_1 + 0xd) = 3;
        *(undefined *)(param_1 + 0xf) = 1;
        *param_1 = 0;
        *(undefined4 *)(param_1 + 0x12) = 0;
        return;
      }
      FUN_000b22f0(param_1 + 0x14,(int)(short)param_1[0xb],0x1000,0,0x7ffe);
      param_1[3] = (short)((uint)*(undefined4 *)(param_1 + 0x14) >> 0x10) * 2;
      return;
    }
  }
  else {
    if (bVar1 == 4) {
      if ((*(char *)(param_1 + 0xc) == '\0') || (*(char *)((int)param_1 + 0x1f) == '\0')) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (!bVar3) {
        return;
      }
      *(undefined *)(param_1 + 0xe) = 6;
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined *)(param_1 + 0xf) = 0;
      *(undefined *)((int)param_1 + 0x19) = 0;
      return;
    }
    if (bVar1 == 6) {
      if (*(char *)((int)param_1 + 0x1f) == '\0') {
        *(undefined *)(param_1 + 0xe) = 4;
        *(undefined *)(param_1 + 0xd) = 0;
        *(undefined *)(param_1 + 0xf) = 0;
        return;
      }
      cVar2 = FUN_000b4d28(param_1);
      if (cVar2 != '\0') {
        *(undefined *)(param_1 + 0xe) = 2;
        *(undefined *)(param_1 + 0xd) = 2;
        *(undefined *)(param_1 + 0xf) = 0;
        *(undefined4 *)(param_1 + 0x14) = 0;
        param_1[3] = 0;
        return;
      }
      uVar4 = *(byte *)((int)param_1 + 0x19) + 1;
      if (0xff < uVar4) {
        uVar4 = 0xff;
      }
      *(char *)((int)param_1 + 0x19) = (char)uVar4;
      return;
    }
  }
  *(undefined *)(param_1 + 0xe) = 4;
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0xf) = 0;
  return;
}

