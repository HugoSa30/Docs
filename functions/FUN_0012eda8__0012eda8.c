/*
 * Program: n42.bin
 * Function: FUN_0012eda8
 * Entry: 0012eda8
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0012eda8(void)

{
  uint uVar1;
  int iVar2;
  
  if (_DAT_001c794a < 0x1f) {
    kamfz_w = _DAT_001c794a;
  }
  else {
    kamfz_w = 0x1e;
  }
  if (_DAT_001c7948 < 0x1f) {
    if (_DAT_001c7948 == 0) {
      dmdsegl_w = 1;
    }
    else {
      dmdsegl_w = _DAT_001c7948;
    }
  }
  else {
    dmdsegl_w = 0x1e;
  }
  uVar1 = (uint)kamfz_w;
  if (uVar1 < 0x13) {
    iVar2 = 0x12 - uVar1;
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    else if (0xffff < iVar2) {
      iVar2 = 0xffff;
    }
    seg1BegD_w = (word)iVar2;
  }
  else {
    iVar2 = 0x30 - uVar1;
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    else if (0xffff < iVar2) {
      iVar2 = 0xffff;
    }
    seg1BegD_w = (word)iVar2;
  }
  seg2BegD_w = seg1BegD_w + dmdsegl_w;
  if (seg2BegD_w < 0x1e) {
    B_ts1delay = 0;
    _DAT_003faf68 = seg2BegD_w;
  }
  else {
    iVar2 = seg2BegD_w - 0x1e;
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    else if (0xffff < iVar2) {
      iVar2 = 0xffff;
    }
    B_ts1delay = B_ts1delay;
    _DAT_003faf68 = (ushort)iVar2;
  }
  DAT_003f9b06 = (undefined)seg1BegD_w;
  DAT_003f9b07 = (undefined)_DAT_003faf68;
  _DAT_003faf64 = (*(code *)&SUB_00fadaf8)();
  return;
}

