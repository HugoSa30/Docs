/*
 * Program: n42.bin
 * Function: FUN_00095b8c
 * Entry: 00095b8c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00095b8c(int param_1,short param_2)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  
  bVar2 = DAT_003f9efc;
  if (param_1 < 0x1f) {
    if (param_1 == 0x1e) {
      DAT_003f9ee8 = 1;
      DAT_003f9f0a = 0x21;
      return 0;
    }
    if (param_1 != 10) {
      if (param_1 != 0x12) {
        if (param_1 != 0x14) {
          return 1;
        }
        if (DAT_003f9f02 != '\x04') {
          DAT_003f9f27 = 0;
          uVar1 = (uint)DAT_003f9efc;
          (&DAT_003f9f9f)[uVar1] = 0x7f;
          (&DAT_003f9fa0)[uVar1] = DAT_003f9f24;
          _DAT_003f9f14 = FUN_00095aa8(&DAT_003f9efc,param_2 + 2U & 0xff,&UNK_003f9f9e);
          _DAT_003f9ef4 = (ushort)bVar2 + param_2 + 1;
          if ((DAT_003f9eee == '\0') && (DAT_003f9eed == '\0')) {
            _DAT_003f9ef2 = _DAT_003f9ef4;
            _DAT_003f9f10 = _DAT_003f9f14;
          }
          DAT_003f9eeb = 1;
          return 0;
        }
        DAT_003f9f27 = 0;
        FUN_000976c8();
        DAT_003f9ef6 = 0;
        DAT_003f9f45 = 1;
        return 0;
      }
      DAT_003f9eef = 1;
    }
    DAT_003f9f27 = 0;
    (&DAT_003f9f9f)[DAT_003f9efc] = DAT_003f9f24 ^ 0x40;
    _DAT_003f9f14 = FUN_00095aa8(&DAT_003f9efc,param_2 + 1U & 0xff,&UNK_003f9f9e);
    _DAT_003f9ef4 = (ushort)bVar2 + param_2;
    if ((DAT_003f9eee == '\0') && (DAT_003f9eed == '\0')) {
      _DAT_003f9ef2 = _DAT_003f9ef4;
      _DAT_003f9f10 = _DAT_003f9f14;
    }
    iVar3 = 3;
  }
  else {
    if (param_1 == 0x28) {
      DAT_003f9ee8 = 1;
      DAT_003f9f0a = 0x23;
      return 0;
    }
    if (param_1 != 0x32) {
      return 1;
    }
    iVar3 = 1;
  }
  (&DAT_003f9ee8)[iVar3] = 1;
                    /* WARNING: Read-only address (ram,0x003f9efc) is written */
                    /* WARNING: Read-only address (ram,0x003f9f02) is written */
  return 0;
}

