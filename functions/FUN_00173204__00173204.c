/*
 * Program: n42.bin
 * Function: FUN_00173204
 * Entry: 00173204
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00173204(void)

{
  ushort uVar1;
  undefined2 local_28;
  ushort local_24 [2];
  ushort local_20 [2];
  ushort *local_1c;
  
  uVar1 = _DAT_003fdfc8;
  ub_w = (word)ub;
  if (B_stend == '\0') {
    DAT_005bb7ac = DAT_001c793f;
    DAT_005bb7ae = DAT_001c7940;
    DAT_005bb7af = DAT_001c7940;
    DAT_005bb7b0 = DAT_001c7940;
    if ((DAT_003f9b90 & 1) == 0) {
      local_28 = _DAT_003fdfc8 & 0xffbf;
      if ((_DAT_003fdfc8 & 1) == 0) {
        local_28 = _DAT_003fdfc8 & 0xf0bf;
      }
    }
    else {
      local_28 = _DAT_003fdfc8 & 0xffbf | 0x40;
      if (DAT_005bb7ad == '\0') {
        local_28._0_1_ = (undefined)((_DAT_003fdfc8 & 0xffbf) >> 8);
        local_28 = CONCAT11(local_28._0_1_,(undefined)local_28) & 0xd0fc | 0x2803;
      }
    }
    goto LAB_00173610;
  }
  func_0xff22339c();
  DAT_005bb7a8 = DAT_005bb7a8 & 0xe0;
  if ((DAT_003f9b90 & 1) == 0) {
    local_28 = uVar1 & 0xffbf;
    if ((uVar1 & 1) == 0) {
      local_28 = uVar1 & 0xf0bf;
    }
    if (wub < DAT_001c7942) {
      DAT_005bb7a8 = DAT_005bb7a8 | 1;
    }
    else if ((byte)FUN_001c7944 < wub) {
      DAT_005bb7a8 = DAT_005bb7a8 | 2;
    }
  }
  else {
    DAT_005bb7a8 = DAT_005bb7a8 | 1;
    local_28 = uVar1 & 0xffbf | 0x40;
    if (DAT_005bb7ad == '\0') {
      local_28._0_1_ = (undefined)((uVar1 & 0xffbf) >> 8);
      local_28 = CONCAT11(local_28._0_1_,(undefined)local_28) & 0xd0fc | 0x2803;
    }
  }
  if (DAT_005bb7ac != '\0') {
    DAT_005bb7b1 = DAT_005bb7b1 + 1;
    if (9 < DAT_005bb7b1) {
      DAT_005bb7b1 = 0;
      DAT_005bb7ac = DAT_005bb7ac + -1;
    }
    goto LAB_00173610;
  }
  if ((((DAT_005bb7a8 >> 1 & 1) == 0) || (vfzg <= bRam001c7945)) || ((DAT_003fdfdf & 1) != 0)) {
    if ((DAT_005bb7a8 & 1) != 0) {
      if (((DAT_003f9b90 & 1) == 0) && (DAT_005bb7a8 = DAT_005bb7a8 | 4, DAT_005bb7af == '\0')) {
        local_28 = local_28 & 0xf0fe | 0x201;
        goto LAB_00173478;
      }
      goto LAB_00173494;
    }
  }
  else {
    DAT_005bb7a8 = DAT_005bb7a8 | 8;
    if (DAT_005bb7ae == '\0') {
      local_28 = local_28 & 0xf0fe | 0x101;
LAB_00173478:
      local_28 = local_28 & 0xdffd | 0x2002;
    }
LAB_00173494:
    if ((DAT_005bb7a8 & 1) != 0) goto LAB_00173610;
  }
  if (((DAT_005bb7a8 >> 1 & 1) == 0) && (DAT_005bb7a8 = DAT_005bb7a8 | 0x10, DAT_005bb7b0 == '\0'))
  {
    local_28 = local_28 & 0xd0fc | 0x2002;
  }
LAB_00173610:
  if ((DAT_003f9b90 & 1) == 0) {
    DAT_005bb7ad = DAT_001c7940;
  }
  else if (DAT_005bb7ad != '\0') {
    DAT_005bb7ad = DAT_005bb7ad + -1;
  }
  if ((DAT_005bb7a8 >> 3 & 1) == 0) {
    DAT_005bb7ae = DAT_001c7940;
  }
  else if (DAT_005bb7ae != '\0') {
    DAT_005bb7ae = DAT_005bb7ae + -1;
  }
  if ((DAT_005bb7a8 >> 2 & 1) == 0) {
    DAT_005bb7af = DAT_001c7940;
  }
  else if (DAT_005bb7af != '\0') {
    DAT_005bb7af = DAT_005bb7af + -1;
  }
  if ((DAT_005bb7a8 >> 4 & 1) == 0) {
    DAT_005bb7b0 = DAT_001c7940;
  }
  else if (DAT_005bb7b0 != '\0') {
    DAT_005bb7b0 = DAT_005bb7b0 + -1;
  }
  local_24[0] = local_28;
  local_1c = local_24;
  local_20[0] = local_28;
  func_0xff222958(0xb3,local_20);
  return;
}

