/*
 * Program: n42.bin
 * Function: FUN_0010e1b4
 * Entry: 0010e1b4
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0010e1b4(void)

{
  int *piVar1;
  
  if (_DAT_003fffcc == 0) {
    return;
  }
  if ((_DAT_003fffcc & 2) != 0) {
    FUN_00108000(*_DAT_003fba9c,_DAT_003fffc8,&DAT_003fbaec);
    _4(*_DAT_003fba9c,&DAT_003fbaec);
    _DAT_003fff9c = _DAT_003fffc8;
    _DAT_003fffcc = _DAT_003fffcc & 0xfffd;
  }
  if ((_DAT_003fffcc & 1) != 0) {
    _DAT_003fff88 = _DAT_003fbafc;
    _DAT_003fff8c = _DAT_003fbb00;
    _DAT_003fff90 = _DAT_003fbb04;
    _DAT_003fff94 = _DAT_003fbb08;
    _DAT_003fff98 = _DAT_003fbb0c;
    _DAT_003fffcc = _DAT_003fffcc & 0xfffe;
  }
  if ((_DAT_003fffcc & 0x10) == 0) goto LAB_0010e2cc;
  if (DAT_003fbb50 == '\0') {
    piVar1 = (int *)&DAT_003fbb54;
LAB_0010e2bc:
    _DAT_003fff8c = *piVar1;
  }
  else {
    _DAT_003fbb54 = _DAT_003fff8c;
    _DAT_003fff8c = *_DAT_003fbb48;
    if (_DAT_003fff8c == 0) {
      piVar1 = (int *)&DAT_003fff94;
      goto LAB_0010e2bc;
    }
  }
  _DAT_003fffcc = _DAT_003fffcc & 0xffef;
LAB_0010e2cc:
  if ((_DAT_003fffcc & 8) != 0) {
    FUN_0010df98();
    _DAT_003fffcc = _DAT_003fffcc & 0xfff7;
  }
  if ((_DAT_003fffcc & 4) != 0) {
    _DAT_003fffcc = _DAT_003fffcc & 0xfffb;
    if (_DAT_003fbb4c != (code *)0x0) {
      (*_DAT_003fbb4c)();
    }
    _DAT_003fbb4c = (code *)0x0;
  }
                    /* WARNING: Read-only address (ram,0x003fbb04) is written */
                    /* WARNING: Read-only address (ram,0x003fbb08) is written */
                    /* WARNING: Read-only address (ram,0x003fbb0c) is written */
  return;
}

