/*
 * Program: n42.bin
 * Function: FUN_000cdf9c
 * Entry: 000cdf9c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Removing unreachable block (ram,0x000ce170) */
/* WARNING: Removing unreachable block (ram,0x000ce1b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000cdf9c(void)

{
  char cVar1;
  uint uVar2;
  uint local_20;
  uint local_1c;
  
  local_20 = _DAT_003f9a8c;
  local_1c = _DAT_003f9a90;
  cVar1 = func_0x010339ac(0,&local_20);
  if (cVar1 == '\0') {
    DAT_003fbeab = '\x01' - ((local_20 & 1) == 0);
    DAT_003fbeaf = '\x01' - ((local_20 >> 1 & 1) == 0);
    B_asc_reg = '\x01' - ((local_20 >> 9 & 1) == 0);
    DAT_003fbeae = '\x01' - ((local_20 >> 10 & 1) == 0);
    vfzgv1_w = (word)((local_20 >> 0xb) << 3);
    DAT_005b8ff7 = (byte)(local_20 >> 0x18);
    func_0x010339ac(1,&local_20);
    DAT_005b8ff8 = (undefined)local_20;
    DAT_005b8ff6 = (byte)(local_20 >> 0x10);
    DAT_005b8ff5 = (byte)(local_20 >> 0x18) & 0xf;
    DAT_003fbea5 = 1;
    DAT_003fbea4 = 1;
    DAT_003fd7e6 = 0x55;
    DAT_003fd7e5 = 1;
  }
  else {
    DAT_003fbea5 = 0;
    if ((local_1c & 0x7000000) != 0) {
      DAT_003fbea4 = 0;
      FUN_000cdec8();
    }
  }
  if ((DAT_005b925e < 0x28) || ((DAT_003fde6d & 1) != 0)) {
    uVar2 = (uint)_DAT_003fa5f4 + (uint)DAT_001c0eda * 0x40;
    if (0xffff < uVar2) {
      uVar2 = 0xffff;
    }
    _DAT_003fa5f4 = (ushort)uVar2;
    uVar2 = (uint)_DAT_003fa5f6 + (uint)DAT_001c0eda * 0x40;
    if (0xffff < uVar2) {
      uVar2 = 0xffff;
    }
    _DAT_003fa5f6 = (ushort)uVar2;
  }
  else {
    _DAT_003fa5f4 = (ushort)DAT_005b8ff6 << 8;
    _DAT_003fa5f6 = (ushort)DAT_005b8ff7 << 8;
    DAT_003fbeac = DAT_003fbeab;
  }
  if (DAT_003fbeac == '\0') {
    DAT_005b9266 = 0xffff;
    miasrl_w = 0xffff;
  }
  else {
    DAT_005b9266 = _DAT_003fa5f6;
    miasrl_w = _DAT_003fa5f4;
    if (_DAT_003fa5f4 < _DAT_003fa5f6) {
      miasrl_w = _DAT_003fa5f6;
    }
  }
  cVar1 = func_0x010339ac(10,&local_20);
  if (cVar1 == '\0') {
    vrad_lv = (ushort)local_20 & 0x1fff;
    vrad_rv = (ushort)(local_20 >> 0x10) & 0x1fff;
    func_0x010339ac(0xb,&local_20);
    vrad_lh = (ushort)local_20 & 0x1fff;
    vrad_rh = (ushort)(local_20 >> 0x10) & 0x1fff;
    DAT_003fbea7 = 1;
    B_dsc1cok = 1;
  }
  else {
    DAT_003fbea7 = 0;
    if ((local_1c & 0x7000000) != 0) {
      if (DAT_003fddad != '\0') {
        DAT_003fd7e6 = 0;
        DAT_003fd7e5 = 0;
      }
      B_dsc1cok = 0;
      vrad_lv = 0x1fff;
      vrad_rv = 0x1fff;
      vrad_lh = 0x1fff;
      vrad_rh = 0x1fff;
    }
  }
  cVar1 = func_0x010339ac(0xc,&local_20);
  if (cVar1 == '\0') {
    func_0x010339ac(0xd,&local_20);
    DAT_003fbead = '\x01' - ((local_20 >> 2 & 1) == 0);
    DAT_003fbea9 = 1;
    DAT_003fbea8 = 1;
  }
  else {
    DAT_003fbea9 = 0;
    if ((local_1c & 0x7000000) != 0) {
      DAT_003fbea8 = 0;
      DAT_003fbead = '\0';
    }
  }
  return;
}

