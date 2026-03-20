/*
 * Program: n42.bin
 * Function: FUN_000a2524
 * Entry: 000a2524
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000a2524(void)

{
  byte bVar1;
  undefined auStack_38 [4];
  ushort local_34;
  undefined2 local_32;
  ushort local_30;
  ushort local_2e;
  byte local_2c;
  
  bVar1 = 0;
  local_34 = 0x600;
  FUN_000a3c90(_DAT_00016ed2,1,0,&local_34,auStack_38);
  FUN_000a3858(_DAT_00016ed2,auStack_38);
  FUN_000a4154();
  do {
    FUN_000a4154();
    local_2c = FUN_000a411c(_DAT_00016ed2);
    bVar1 = bVar1 + 1;
  } while ((local_2c >> 5 & 1) == 0 && bVar1 < 0xf);
  FUN_000a3f10(_DAT_00016ed2,0,0,&local_30,auStack_38);
  DAT_003fa1dc = (char)local_30;
  _DAT_003fa1de = 0;
  local_34 = DAT_00016eeb | 0x1500;
  FUN_000a3c90(_DAT_00016ed8,1,0,&local_34,auStack_38);
  FUN_000a3858(_DAT_00016ed8,auStack_38);
  bVar1 = 0;
  FUN_000a4154();
  do {
    FUN_000a4154();
    local_2c = FUN_000a411c(_DAT_00016ed8);
    bVar1 = bVar1 + 1;
  } while ((local_2c >> 5 & 1) == 0 && bVar1 < 0xf);
  local_34 = 0x2900;
  FUN_000a3c90(_DAT_00016ede,1,0,&local_34,auStack_38);
  FUN_000a3858(_DAT_00016ede,auStack_38);
  bVar1 = 0;
  FUN_000a4154();
  do {
    FUN_000a4154();
    local_2c = FUN_000a411c(_DAT_00016ede);
    bVar1 = bVar1 + 1;
  } while ((local_2c >> 5 & 1) == 0 && bVar1 < 0xf);
  FUN_000a3f10(_DAT_00016ede,0,0,&local_30,auStack_38);
  if ((local_30 & 0xff) == (ushort)DAT_00016eeb) {
    local_34 = 0x3d00;
    FUN_000a3c90(_DAT_00016ee2,1,0,&local_34,auStack_38);
    FUN_000a3858(_DAT_00016ee2,auStack_38);
    bVar1 = 0;
    FUN_000a4154();
    do {
      FUN_000a4154();
      local_2c = FUN_000a411c(_DAT_00016ee2);
      bVar1 = bVar1 + 1;
    } while ((local_2c >> 5 & 1) == 0 && bVar1 < 0xf);
  }
  else {
    _DAT_003fa1de = _DAT_003fa1de | 2;
  }
  _DAT_003fa1da = _DAT_003f9a4c | *_DAT_003f9a6c;
  FUN_000a3c90(_DAT_00016ee4,1,0,&DAT_003fa1da,auStack_38);
  FUN_000a3858(_DAT_00016ee4,auStack_38);
  bVar1 = 0;
  FUN_000a4154();
  do {
    FUN_000a4154();
    local_2c = FUN_000a411c(_DAT_00016ee4);
    bVar1 = bVar1 + 1;
  } while ((local_2c >> 5 & 1) == 0 && bVar1 < 0xf);
  FUN_000a3c90(_DAT_00016ee6,1,0,&UNK_003f9a4a,auStack_38);
  FUN_000a3858(_DAT_00016ee6,auStack_38);
  bVar1 = 0;
  FUN_000a4154();
  do {
    FUN_000a4154();
    local_2c = FUN_000a411c(_DAT_00016ee6);
    bVar1 = bVar1 + 1;
  } while ((local_2c >> 5 & 1) == 0 && bVar1 < 0xf);
  FUN_000a3f10(_DAT_00016ee6,0,0,&local_30,auStack_38);
  local_30 = local_30 & 7;
  bVar1 = *_DAT_003f9a6c;
  if (local_30 != *_DAT_003f9a6c) {
    _DAT_003fa1de = _DAT_003fa1de | 4;
    bVar1 = DAT_003fa52c;
  }
  DAT_003fa52c = bVar1;
  _DAT_003fa1e4 = 0;
  if (_DAT_00016ed0 != 0) {
    FUN_000a3af0(_DAT_00016ed0,1,3,0x16eec,&UNK_003fa1e3);
  }
  local_34 = 0x2500;
  FUN_000a3af0(_DAT_00016edc,1,1,&local_34,auStack_38);
  if (DAT_003fa1dc == '@') {
    local_34 = 0xc900;
    FUN_000a3af0(_DAT_00016ed4,1,1,&local_34,auStack_38);
  }
  local_34 = DAT_00016ef9 & 0xf | 0x1e00;
  local_32 = 0x3100;
  FUN_000a3af0(_DAT_00016ee8,1,2,&local_34,&UNK_003fa1e3);
  FUN_000a3858(_DAT_00016ee8,auStack_38);
  bVar1 = 0;
  FUN_000a4154();
  do {
    FUN_000a4154();
    local_2c = FUN_000a411c(_DAT_00016ee8);
    bVar1 = bVar1 + 1;
  } while ((local_2c >> 5 & 1) == 0 && bVar1 < 0xf);
  FUN_000a3dbc(_DAT_00016ee8,0,2,&local_30,&UNK_003fa1e3);
  if ((local_2e & 0xff) != (DAT_00016ef9 & 0xf)) {
    _DAT_003fa1de = _DAT_003fa1de | 2;
  }
  if (DAT_003fa1dc == '@') {
    FUN_000a3858(_DAT_00016ed4,&UNK_003fa1e3);
    bVar1 = 0;
    FUN_000a4154();
    do {
      FUN_000a4154();
      local_2c = FUN_000a411c(_DAT_00016ed4);
      bVar1 = bVar1 + 1;
    } while ((local_2c >> 5 & 1) == 0 && bVar1 < 0xf);
  }
  FUN_000a3858(_DAT_00016edc,&UNK_003fa1e3);
  bVar1 = 0;
  FUN_000a4154();
  do {
    FUN_000a4154();
    local_2c = FUN_000a411c(_DAT_00016edc);
    bVar1 = bVar1 + 1;
  } while ((local_2c >> 5 & 1) == 0 && bVar1 < 0xf);
  FUN_000a3858(_DAT_00016ede,&UNK_003fa1e3);
  bVar1 = 0;
  FUN_000a4154();
  do {
    FUN_000a4154();
    local_2c = FUN_000a411c(_DAT_00016ede);
    bVar1 = bVar1 + 1;
  } while ((local_2c >> 5 & 1) == 0 && bVar1 < 0xf);
  FUN_000a3858(_DAT_00016ed0,&UNK_003fa1e3);
  bVar1 = 0;
  FUN_000a4154();
  do {
    FUN_000a4154();
    local_2c = FUN_000a411c(_DAT_00016ed0);
    bVar1 = bVar1 + 1;
  } while ((local_2c >> 5 & 1) == 0 && bVar1 < 0xf);
  _DAT_003fa1e4 = _DAT_00016ed0;
  FUN_000a2190();
  return;
}

