/*
 * Program: n42.bin
 * Function: FUN_001e57dc
 * Entry: 001e57dc
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_001e57dc(int param_1,char *param_2)

{
  undefined4 uVar1;
  char cVar2;
  undefined *local_38;
  undefined *local_34;
  
  uVar1 = _DAT_002fc03c;
  if (param_2 != &DAT_003fb8c8) {
    FUN_001e8824(0x1b);
  }
  _DAT_003fb8c4 = 0x5031963;
  _DAT_003fb850 = 0x5031963;
  _DAT_003fb854 = 0;
  _DAT_002fc03c = 0x3000000;
  _DAT_003fb899 = _DAT_00fe169c;
  _DAT_003fb9b2 = 0xfe2ecc;
  _DAT_003fbac6 = 0xfe3900;
  DAT_003fb89d = 3;
  _DAT_003fb89e = 0xfe8c64;
  _DAT_003fbaca = 0xfe8c64;
  _DAT_003fb9b6 = 0xfe8c64;
  DAT_003fb8a2 = DAT_00fe16e2;
  _DAT_003fb8a3 = 0xfe16e4;
  _DAT_003fbace = 0xfe16e4;
  _DAT_003fb9ba = 0xfe16e4;
  _DAT_003fb8a7 = &DAT_003fb808;
  DAT_003fb8ab = DAT_00fe160c;
  _DAT_003fb8ac = 0xfe1610;
  _DAT_003fb8b0 = &DAT_003fbc4c;
  _DAT_003fb800 = &DAT_003fb7fc;
  if (((param_1 == 0x40) || (param_1 == 0x1f)) || (param_1 == 0x50)) {
    if ((_DAT_003fb8d4 & 0x100) != 0) {
      DAT_003fb9b1 = 1;
      DAT_003fbac5 = 0;
      DAT_003fb8bf = 7;
      FUN_001e2f2c(&DAT_003fb9b1,&DAT_003fbac5,1);
      if (DAT_003fb8be == '\a') {
        DAT_003fb9b1 = 1;
        DAT_003fbac5 = 1;
        DAT_003fb8bf = '\a';
        do {
          FUN_001e2f2c(&DAT_003fb9b1,&DAT_003fbac5,1);
          cVar2 = DAT_003fb8be;
        } while (DAT_003fb8bf != '\0');
        if (DAT_003fb8be != '\0') {
          param_1 = 5;
          param_2[1] = '\a';
          param_2[2] = cVar2;
        }
      }
      else {
        param_1 = 5;
        param_2[1] = DAT_003fb8be;
        param_2[2] = '\0';
      }
      DAT_003fb9b1 = 1;
      DAT_003fbac5 = 0;
      DAT_003fb8bf = 8;
      FUN_001e2f2c(&DAT_003fb9b1,&DAT_003fbac5,1);
    }
    DAT_003fbac5 = 0;
    DAT_003fb9b1 = 0;
    DAT_003fb8bf = 0;
  }
  *param_2 = (char)param_1;
  if (param_1 == 0x40) {
LAB_001e5a6c:
    if (((param_1 != 0x1f) && (param_1 != 0x50)) && (param_1 != 0x58)) goto joined_r0x001e5ae0;
  }
  else if (param_1 != 0x1f) {
    if ((param_1 != 0x50) && (param_1 != 0x58)) {
      FUN_001e3934(param_1,param_2,0xfd);
      _DAT_003fb854 = 2;
      _pm_akt = 3;
      DAT_003fb8b4 = '\x01';
      FUN_001e15cc();
    }
    goto LAB_001e5a6c;
  }
  FUN_001e4d74(param_2);
  if ((_DAT_003fb854 == 0x80) && (*param_2 != 'A')) {
    FUN_001e2eec();
    if (_DAT_003fb8d0 == (code *)0x0) {
      FUN_001e8824(0x1b);
    }
    (*_DAT_003fb8d0)();
    FUN_001e8824(0x1b);
  }
joined_r0x001e5ae0:
  while (_DAT_003fb854 != 0x80) {
    if (_DAT_003fb854 == 0) {
      FUN_001e4d74(param_2);
      if (_DAT_003fb854 != 0x80) {
        if (DAT_003fb8b4 == '\0') {
          local_38 = &DAT_003fbbd4;
          local_34 = &DAT_003fbc10;
          FUN_001e7878(0x3c,&local_38);
        }
        _DAT_003fb858 = 1;
        if (_DAT_003fb854 == 1) {
          FUN_001e4700();
        }
      }
    }
    else if ((_DAT_003fb854 == 1) || (_DAT_003fb854 == 2)) {
      FUN_001e55b4();
    }
    else if (_DAT_003fb854 != 0x80) {
      FUN_001e8824(0x1b);
    }
  }
  _DAT_003fb8c4 = 0;
  _DAT_003fb850 = 0;
  if (*param_2 == 'A') {
    FUN_001e2eec();
    FUN_001e885c();
  }
  _DAT_002fc03c = uVar1;
  return _pm_akt;
}

