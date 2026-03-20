/*
 * Program: n42.bin
 * Function: FUN_0010d4f0
 * Entry: 0010d4f0
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0010d4f0(void)

{
  int *piVar1;
  char cVar2;
  
  if (DAT_003fba78 == 0) {
    return;
  }
  if ((DAT_003fba78 & 2) != 0) {
    _DAT_003fff88 = _DAT_003fbbf4;
    _DAT_003fff8c = _DAT_003fbbf8;
    _DAT_003fff90 = _DAT_003fbbfc;
    _DAT_003fff94 = _DAT_003fbc00;
    _DAT_003fff98 = _DAT_003fbc04;
    DAT_003fba78 = DAT_003fba78 & 0xfd;
  }
  if ((DAT_003fba78 & 1) != 0) {
    _DAT_003fba68 = 1;
    DAT_003fba78 = DAT_003fba78 & 0xfe;
    _8(0);
    _9(0);
  }
  if ((DAT_003fba78 & 8) == 0) goto LAB_0010d5f4;
  if (DAT_003fba79 == '\0') {
    piVar1 = (int *)&DAT_003fbc08;
LAB_0010d5e4:
    _DAT_003fff8c = *piVar1;
  }
  else {
    _DAT_003fbc08 = _DAT_003fff8c;
    _DAT_003fff8c = *(int *)(_DAT_003fba8c + 4);
    if (_DAT_003fff8c == 0) {
      piVar1 = (int *)&DAT_003fff94;
      goto LAB_0010d5e4;
    }
  }
  DAT_003fba78 = DAT_003fba78 & 0xf7;
LAB_0010d5f4:
  if ((DAT_003fba78 & 4) != 0) {
    DAT_003fba78 = DAT_003fba78 & 0xfb;
    if (_DAT_003fba7c != (code *)0x0) {
      (*_DAT_003fba7c)();
    }
    _DAT_003fba7c = (code *)0x0;
  }
  if ((DAT_003fba78 & 0x10) != 0) {
    cVar2 = FUN_0010ace8();
    (**(code **)(_DAT_003fba8c + 0x10))(cVar2 + -2,_DAT_003fba88);
    DAT_003fba78 = DAT_003fba78 & 0xef;
  }
                    /* WARNING: Read-only address (ram,0x003fba88) is written */
                    /* WARNING: Read-only address (ram,0x003fbbfc) is written */
                    /* WARNING: Read-only address (ram,0x003fbc00) is written */
                    /* WARNING: Read-only address (ram,0x003fbc04) is written */
  return;
}

