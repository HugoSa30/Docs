/*
 * Program: n42.bin
 * Function: FUN_0019e1f4
 * Entry: 0019e1f4
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Removing unreachable block (ram,0x0019e474) */
/* WARNING: Removing unreachable block (ram,0x0019e490) */
/* WARNING: Removing unreachable block (ram,0x0019e4a0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0019e1f4(void)

{
  int iVar1;
  uint uVar2;
  
  if (nmot_um != '\0') {
    return;
  }
  if (e_mem_um == '\0') {
    if (mem_ur != -0x67) goto LAB_0019e24c;
  }
  else if (mem_ur != 'f') {
LAB_0019e24c:
    e_mem_um = '\x01';
    mem_ur = 'f';
    FUN_00110cc4(0x132);
    FUN_00110efc(0x132);
  }
  if (e_ram_um == '\0') {
    if (ram_ur == -0x67) goto LAB_0019e2cc;
  }
  else if (ram_ur == 'f') goto LAB_0019e2cc;
  e_ram_um = '\x01';
  ram_ur = 'f';
  FUN_00110cc4(0x132);
  FUN_00110efc(0x132);
LAB_0019e2cc:
  FUN_00110ec4();
  _DAT_003f9800 = 0xf0f;
  _DAT_003f9810 = 0xf0f0;
  _DAT_003f980c = (uint *)&DAT_001ce77c;
  _DAT_003f9804 = _DAT_001ce77c;
  _DAT_003f9808 = _DAT_001ce780;
  while ((_DAT_003f9804 != 0 && (_DAT_003f9808 != 0))) {
    if (_DAT_003f9808 < _DAT_003f9804) {
      FUN_00110cc4(0x133);
      FUN_00110efc(0x133);
    }
    else {
      while (uVar2 = _DAT_003f9804 + 0x640, uVar2 <= _DAT_003f9808) {
        _DAT_003f9808 = uVar2;
        iVar1 = func_0xff2617e8(_DAT_003f9804,uVar2);
        if (iVar1 != 0) {
          _DAT_003f9800 = _DAT_003f9800 + 1;
        }
        _DAT_003f9804 = _DAT_003f9808;
        _DAT_003f9808 = _DAT_003f980c[1];
        (*(code *)&SUB_000693f0)();
      }
      iVar1 = func_0xff2617e8();
      if (iVar1 != 0) {
        _DAT_003f9800 = _DAT_003f9800 + 1;
      }
    }
    _DAT_003f9804 = _DAT_003f980c[2];
    _DAT_003f9808 = _DAT_003f980c[3];
    _DAT_003f980c = _DAT_003f980c + 2;
  }
  e_ram_um = _DAT_003f9800 != (ushort)~_DAT_003f9810;
  if ((bool)e_ram_um) {
    ram_ur = 0x66;
  }
  else {
    ram_ur = 0x99;
  }
  func_0xff20ba70(0x21,0,0);
  do {
  } while( true );
}

