/*
 * Program: n42.bin
 * Function: FUN_000a523c
 * Entry: 000a523c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000a523c(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint in_MSR;
  undefined uStack_20;
  byte local_1f;
  undefined uStack_1e;
  undefined uStack_1d;
  ushort local_1c;
  ushort local_1a;
  ushort local_18;
  ushort local_16;
  ushort local_14;
  undefined2 local_12;
  
  if (DAT_003fa336 == '\x01') {
    local_1f = FUN_000a411c(_DAT_00016ecc + 5);
    if ((((int)(uint)local_1f >> 5 & 1U) == 1) && (((int)(uint)local_1f >> 2 & 1U) == 0)) {
      FUN_000a3f10(_DAT_00016ecc,0,4,&local_1c,&uStack_1e);
      DAT_003fa335 = (undefined)local_1c;
      if ((local_1c & 1) != 0) {
        _DAT_003fa338 = _DAT_003fa338 + 1;
      }
      if (((int)(local_1c & 0xff) >> 1 & 1U) != 0) {
        _DAT_003fa33a = _DAT_003fa33a + 1;
      }
      if (((int)(local_1c & 0xff) >> 2 & 1U) != 0) {
        _DAT_003fa33c = _DAT_003fa33c + 1;
      }
      FUN_000a3f10(_DAT_00016ecc,0,5,&local_1c,&uStack_1e);
      DAT_003fa334 = (byte)local_1c;
      DAT_003fa312 = DAT_003fa334 & 0xf;
      uVar1 = (int)(local_1c & 0xff) >> 4;
      DAT_003fa313 = (byte)uVar1 & 7;
      *(int *)(&UNK_003fa314 + (uVar1 & 7) * 4) = *(int *)(&UNK_003fa314 + (uVar1 & 7) * 4) + 1;
      FUN_000a3f10(_DAT_00016ecc,0,6,&local_1c,&uStack_1e);
      _DAT_003fa30c = local_1c & 0x3f;
      FUN_000a40f8(&DAT_003fa2f8,&uStack_1d);
      uVar1 = _DAT_003fa2fc;
      uVar3 = (((_DAT_003fa30c * 0xfa0000) / (uint)_DAT_003fa310) * 10) /
              ((1000000000 / _DAT_00f07e68) / 100);
      if (_DAT_003fa10c == 0) {
        _DAT_003fa110 = in_MSR >> 0xf & 1;
      }
      _DAT_003fa304 = _DAT_003fa2fc + uVar3;
      _DAT_003fa300 = _DAT_003fa2f8 + (uint)CARRY4(_DAT_003fa2fc,uVar3);
      DAT_003fa308 = 1;
      iVar2 = (_DAT_003fa340 & 0x1f) * 8;
      *(int *)(&DAT_005ba080 + iVar2) = _DAT_003fa2f8;
      *(uint *)(&DAT_005ba084 + iVar2) = uVar1;
      if (DAT_003fa1dc == '@') {
        uVar1 = (uint)DAT_003fa312;
        local_1a = *(byte *)(uVar1 + 0x15740) | _DAT_0001572a;
        local_18 = *(byte *)(uVar1 + 0x15750) | _DAT_00015728;
        local_16 = *(byte *)(uVar1 + 0x15760) | _DAT_00015726;
        local_14 = *(byte *)(uVar1 + 0x15770) | _DAT_00015724;
      }
      else {
        uVar1 = (uint)DAT_003fa312;
        local_1a = *(byte *)(uVar1 + 0x15780) | _DAT_00015738;
        local_18 = *(byte *)(uVar1 + 0x15790) | _DAT_00015736;
        local_16 = *(byte *)(uVar1 + 0x157a0) | _DAT_00015734;
        local_14 = *(byte *)(uVar1 + 0x157b0) | _DAT_00015732;
      }
      FUN_000a3c90(_DAT_00016ecc,1,0,&local_14,&uStack_1e);
      FUN_000a3c90(_DAT_00016ecc,1,1,&local_16,&uStack_1e);
      FUN_000a3c90(_DAT_00016ecc,1,2,&local_18,&uStack_1e);
      FUN_000a3c90(_DAT_00016ecc,1,3,&local_1a,&uStack_1e);
      _DAT_003fa340 = _DAT_003fa340 + 1;
    }
  }
  else {
    local_12 = 0x191f;
    FUN_000a3af0(_DAT_00016eda,1,1,&local_12,&uStack_1e);
    FUN_000a3858(_DAT_00016eda,&uStack_20);
    DAT_003fa336 = '\x01';
    _DAT_003fa340 = 0;
    FUN_000a4030(_DAT_00016ecc + 4,&uStack_1e);
  }
  return;
}

