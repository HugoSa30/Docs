/*
 * Program: n42.bin
 * Function: FUN_000a2190
 * Entry: 000a2190
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000a2190(void)

{
  char cVar1;
  undefined auStack_20 [6];
  byte local_1a [2];
  undefined local_18;
  undefined uStack_17;
  
  if (DAT_003fa1dc == '@') {
    local_1a[0] = FUN_000a411c(_DAT_00016ed4);
    if ((local_1a[0] & 0xa4) == 0x20) {
      cVar1 = FUN_000a3f10(_DAT_00016ed4,0,0,&local_18,local_1a);
      if (cVar1 == '\0') {
        DAT_003fa1d8 = DAT_003fa1d8 | 6;
        DAT_003fa1e8 = 0;
      }
      else {
        DAT_003fa1e8 = 1;
      }
    }
    else {
      DAT_003fa1e8 = 0;
      if ((local_1a[0] & 0x80) != 0) {
        DAT_003fa1d8 = DAT_003fa1d8 | 6;
      }
    }
    FUN_000a3858(_DAT_00016ed4,&UNK_003fa1e3);
  }
  local_1a[0] = FUN_000a411c(_DAT_00016edc);
  if ((local_1a[0] & 0xa4) == 0x20) {
    cVar1 = FUN_000a3f10(_DAT_00016edc,0,0,&local_18,&UNK_003fa1e3);
    if (cVar1 == '\0') {
      DAT_003fa1d8 = DAT_003fa1d8 | 6;
      DAT_003fa1e8 = 0;
    }
    else {
      DAT_003fa1e6 = 1;
      DAT_003fa1e1 = uStack_17;
    }
  }
  else {
    DAT_003fa1e6 = 0;
    if ((local_1a[0] & 0x80) != 0) {
      DAT_003fa1d8 = DAT_003fa1d8 | 6;
    }
  }
  FUN_000a3858(_DAT_00016edc,&UNK_003fa1e3);
  local_1a[0] = FUN_000a411c(_DAT_00016ede);
  if ((local_1a[0] & 0xa4) == 0x20) {
    cVar1 = FUN_000a3f10(_DAT_00016ede,0,0,&local_18,&UNK_003fa1e3);
    if (cVar1 == '\0') {
      DAT_003fa1d8 = DAT_003fa1d8 | 6;
      DAT_003fa1e7 = 0;
    }
    else {
      DAT_003fa1e2 = uStack_17;
      DAT_003fa1e7 = 1;
    }
  }
  else {
    DAT_003fa1e7 = 0;
    if ((local_1a[0] & 0x80) != 0) {
      DAT_003fa1d8 = DAT_003fa1d8 | 6;
    }
  }
  FUN_000a3858(_DAT_00016ede,&UNK_003fa1e3);
  if (_DAT_003fa1e4 != 0) {
    local_1a[0] = FUN_000a411c(_DAT_003fa1e4);
    if ((local_1a[0] & 0xa4) == 0x20) {
      cVar1 = FUN_000a3dbc(_DAT_003fa1e4,0,3,auStack_20,&UNK_003fa1e3);
      if (cVar1 == '\0') {
        DAT_003fa1d8 = DAT_003fa1d8 | 6;
      }
      else {
        (*_DAT_00016efc)(auStack_20);
      }
      _DAT_003fa1e4 = 0;
    }
    else if ((local_1a[0] & 0x80) != 0) {
      DAT_003fa1d8 = DAT_003fa1d8 | 6;
      _DAT_003fa1e4 = 0;
    }
    if (_DAT_003fa1e4 != 0) {
      return;
    }
  }
  if (_DAT_00016ed0 != 0) {
    _DAT_003fa1e4 = _DAT_00016ed0;
    cVar1 = FUN_000a3858(_DAT_00016ed0,&UNK_003fa1e3);
    if (cVar1 == '\0') {
      _DAT_003fa1e4 = 0;
      DAT_003fa1d8 = DAT_003fa1d8 | 6;
    }
  }
  return;
}

