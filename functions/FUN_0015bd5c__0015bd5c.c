/*
 * Program: n42.bin
 * Function: FUN_0015bd5c
 * Entry: 0015bd5c
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_0015bd5c(undefined2 *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < 0x12) {
    if (iVar1 == 0x11) {
      if ((DAT_005b863a & 1) != 0) {
        *(undefined4 *)(param_1 + 8) = 0x17;
        DAT_005b863a = DAT_005b863a & 0xfc;
        *(undefined *)((int)param_1 + 0xd) = 0;
        *(undefined *)(param_1 + 6) = 0;
        flgst_w = 0;
        param_1[5] = 0;
        return;
      }
      if (*(char *)(param_1 + 4) != '\x01') {
        return;
      }
      FUN_0015bd14(param_1);
      *(undefined4 *)(param_1 + 8) = 1;
      return;
    }
    if (iVar1 == 1) {
      if ((DAT_005b863a & 1) != 0) {
        *(undefined4 *)(param_1 + 8) = 0x17;
        DAT_005b863a = DAT_005b863a & 0xfc;
        *(undefined *)((int)param_1 + 0xd) = 0;
        *(undefined *)(param_1 + 6) = 0;
        flgst_w = 0;
        param_1[5] = 0;
        return;
      }
      if (param_1[5] == 1) {
        *(undefined4 *)(param_1 + 8) = 0x17;
        DAT_005b863a = DAT_005b863a & 0xfc;
        *(undefined *)((int)param_1 + 0xd) = 0;
        *(undefined *)(param_1 + 6) = 0;
        flgst_w = 0;
        param_1[5] = 0;
        return;
      }
      if (DAT_005b9794 == 4) {
        *param_1 = 0;
        param_1[2] = 0;
        param_1[1] = 0;
        param_1[3] = 0;
        *(undefined *)((int)param_1 + 0xf) = 0;
        *(undefined4 *)(param_1 + 8) = 0x1e;
        return;
      }
      if (DAT_005b9794 == 6) {
        *param_1 = 0;
        param_1[2] = 0;
        param_1[1] = 0;
        param_1[3] = 0;
        *(undefined *)((int)param_1 + 0xf) = 0;
        *(undefined4 *)(param_1 + 8) = 0xb;
        return;
      }
      if (DAT_005b9794 != 1) {
        return;
      }
      *param_1 = 0;
      param_1[2] = 0;
      param_1[1] = 0;
      param_1[3] = 0;
      *(undefined *)((int)param_1 + 0xf) = 0;
      *(undefined4 *)(param_1 + 8) = 0x11;
      return;
    }
    if (iVar1 == 0xb) {
      if ((DAT_005b863a & 1) != 0) {
        *(undefined4 *)(param_1 + 8) = 0x17;
        DAT_005b863a = DAT_005b863a & 0xfc;
        *(undefined *)((int)param_1 + 0xd) = 0;
        *(undefined *)(param_1 + 6) = 0;
        flgst_w = 0;
        param_1[5] = 0;
        return;
      }
      if (*(char *)(param_1 + 4) != '\x01') {
        return;
      }
      FUN_0015bd14(param_1);
      *(undefined4 *)(param_1 + 8) = 1;
      return;
    }
  }
  else {
    if (iVar1 == 0x17) {
      if ((DAT_005b863a & 2) == 0) {
        return;
      }
      *(undefined4 *)(param_1 + 8) = 1;
      return;
    }
    if (iVar1 == 0x1e) {
      if ((DAT_005b863a & 1) != 0) {
        *(undefined4 *)(param_1 + 8) = 0x17;
        DAT_005b863a = DAT_005b863a & 0xfc;
        *(undefined *)((int)param_1 + 0xd) = 0;
        *(undefined *)(param_1 + 6) = 0;
        flgst_w = 0;
        param_1[5] = 0;
        return;
      }
      if (*(char *)(param_1 + 4) != '\x01') {
        return;
      }
      FUN_0015bd14(param_1);
      *(undefined4 *)(param_1 + 8) = 1;
      return;
    }
  }
  if ((DAT_005b863a & 2) != 0) {
    *(undefined4 *)(param_1 + 8) = 1;
  }
  return;
}

