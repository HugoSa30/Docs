/*
 * Program: n42.bin
 * Function: FUN_00095888
 * Entry: 00095888
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00095888(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  
  if ((_DAT_003f9f28 & 3) == 0) {
    return;
  }
  if (DAT_003f9ef6 < 3) {
    if (DAT_003f9ef6 == 2) {
LAB_00095980:
      if (&UNK_003f9f9e + _DAT_003f9f00 == _DAT_003f9f60) {
        DAT_003f9ef6 = 3;
        goto LAB_000959cc;
      }
      if (_DAT_003f9f60 <= &UNK_003f9f9e + _DAT_003f9f00) goto LAB_000959ac;
    }
    else {
      if (DAT_003f9ef6 == 0) {
        cVar1 = FUN_00097748();
        if (cVar1 == '\0') {
          return;
        }
        if (_DAT_003f9f60 < &DAT_003f9fa0) {
          return;
        }
        FUN_0009562c(&DAT_003f9efc,DAT_003f9f9f);
        DAT_003f9ef6 = 1;
      }
      else if (DAT_003f9ef6 != 1) {
        return;
      }
      if (&DAT_003f9f9f + DAT_003f9efc < _DAT_003f9f60) {
        FUN_000956d4(&DAT_003f9efc);
        cVar1 = FUN_00095740(&DAT_003f9efc);
        if (cVar1 == '\x01') {
          _DAT_003f9f00 = (ushort)DAT_003f9efd + (ushort)DAT_003f9efc + 2;
          DAT_003f9ef6 = 2;
          goto LAB_00095980;
        }
        if (DAT_003f9eec == '\0') {
          FUN_000926a8(0xff,3);
          return;
        }
      }
      else {
LAB_000959ac:
        cVar1 = FUN_00097790();
        if (cVar1 == '\0') {
          return;
        }
      }
    }
    FUN_000976c8();
    DAT_003f9ef6 = 0;
  }
  else {
    if (DAT_003f9ef6 == 3) {
LAB_000959cc:
      cVar1 = FUN_0009583c(&DAT_003f9efc);
      if ((cVar1 != '\0') && ((DAT_003f9eec != '\0' || ((&DAT_003f9f9f)[DAT_003f9efc] == -0x7f)))) {
        FUN_00097688();
        uVar3 = (uint)DAT_003f9efc;
        DAT_003f9ef6 = 4;
        _DAT_003f9f18 = &DAT_003f9fa0 + uVar3;
        _DAT_003f9f1c = &DAT_003f9fa0 + uVar3;
        _DAT_003f9f20 = &UNK_003f9fa1 + uVar3;
        DAT_003f9f24 = (&DAT_003f9f9f)[uVar3];
        DAT_003f9f25 = (&DAT_003f9fa0)[uVar3];
        DAT_003f9f26 = DAT_003f9efd - 1;
        DAT_003f9f27 = 1;
        return;
      }
      FUN_000976c8();
      DAT_003f9ef6 = 0;
      iVar2 = 3;
    }
    else {
      if (DAT_003f9ef6 != 0xb) {
        return;
      }
      cVar1 = FUN_00095fe0();
      if (cVar1 == '\0') {
        return;
      }
      DAT_003f9f27 = 1;
      DAT_003f9ef6 = 4;
      iVar2 = 6;
    }
    (&DAT_003f9ee8)[iVar2] = 0;
  }
                    /* WARNING: Read-only address (ram,0x003f9efc) is written */
                    /* WARNING: Read-only address (ram,0x003f9efd) is written */
                    /* WARNING: Read-only address (ram,0x003f9f9f) is written */
  return;
}

