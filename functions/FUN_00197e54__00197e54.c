/*
 * Program: n42.bin
 * Function: FUN_00197e54
 * Entry: 00197e54
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00197e54(void)

{
  short sVar1;
  int iVar2;
  
  if ((DAT_003fc205 == '\0') || (DAT_001d1982 == '\0')) {
    DAT_003fc092 = 0;
    DAT_005b94fc = 0;
    DAT_005b9169 = '\0';
  }
  else {
    DAT_003fc092 = 1;
    if (DAT_001c8404 < wkrm) {
      sVar1 = func_0xff2192a8(_DAT_001c83e0,&DAT_001c83e2,&DAT_001c83f2,wkrm);
    }
    else {
      sVar1 = func_0xff2192a8(_DAT_001c83be,&DAT_001c83c0,&DAT_001c83d0,nmot);
    }
    _DAT_003fb1a8 = _DAT_003fb1a8 + sVar1;
    if (DAT_001c8403 * 0x600 < _DAT_003fb1a8) {
      _DAT_003fb1a8 = DAT_001c8403 * 0x600;
    }
    if (_DAT_003fb1a8 < 0) {
      _DAT_003fb1a8 = 0;
    }
    if (_DAT_003fb1a8 < 0x5fa00) {
      DAT_005b916a = (char)(_DAT_003fb1a8 / 0x600);
    }
    else {
      DAT_005b916a = -1;
    }
    DAT_005b94fc = func_0xff2190c8(DAT_001d1984,&DAT_001d1985,&DAT_001d198e,DAT_005b916a);
    iVar2 = (int)zwbas - (int)zwspae;
    if (iVar2 < -0x80) {
      iVar2 = -0x80;
    }
    else if (0x7f < iVar2) {
      iVar2 = 0x7f;
    }
    iVar2 = (int)(char)iVar2 - (int)DAT_001c8402;
    if (iVar2 < -0x80) {
      iVar2 = -0x80;
    }
    else if (0x7f < iVar2) {
      iVar2 = 0x7f;
    }
    if (DAT_005b916a < (char)iVar2) {
      DAT_005b9169 = -DAT_005b916a;
    }
    else {
      DAT_005b9169 = -(char)iVar2;
    }
  }
  return;
}

