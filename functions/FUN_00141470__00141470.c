/*
 * Program: n42.bin
 * Function: FUN_00141470
 * Entry: 00141470
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00141470(void)

{
  char cVar1;
  float fVar2;
  char *unaff_r24;
  char *unaff_r27;
  char *unaff_r28;
  float *unaff_r30;
  double in_f13;
  double in_f29;
  double in_f31;
  
  if (in_f13 <= in_f29) {
    in_f31 = (double)*unaff_r30;
  }
  _DAT_003fb4a8 = (float)in_f31;
  cVar1 = *unaff_r24;
  if ((DAT_001caf4e != cVar1) && (*unaff_r28 == '\0')) {
    _DAT_003fb4b4 = _DAT_001caf8c;
    _DAT_003fb4b0 = _DAT_003fb4a8;
    *unaff_r28 = '\x01';
  }
  if ((DAT_001caf4e != cVar1) && (*unaff_r28 != '\0')) {
    if (vfzg < DAT_001caf4f) {
      _DAT_003fb47c = _DAT_001caf60;
    }
    else {
      _DAT_003fb47c = _DAT_001caf5c;
    }
    func_0xff22291c((double)_DAT_003fddcc,(double)_DAT_003fb47c,&DAT_003fb4b0);
    _DAT_003fddd0 = _DAT_003fb4b0;
    fVar2 = (_DAT_003fb4b0 * _DAT_0001cc70) / _DAT_0001cc58 + _DAT_0001cc74;
    if (_DAT_0001cc6c <= fVar2) {
      if (fVar2 <= _DAT_0001cc78) {
        tbatt = (byte)(int)fVar2;
      }
      else {
        tbatt = 0xff;
      }
    }
    else {
      tbatt = 0;
    }
    _DAT_003fddcc =
         (float)((double)CONCAT44(0x43300000,(int)(short)*unaff_r27 + (int)DAT_001caf55 ^ 0x80000000
                                 ) - (double)_DAT_0001cc48);
    func_0xff218740((double)_DAT_003fb4b0,&DAT_001caf14);
    return;
  }
  if (DAT_001caf4d == *unaff_r24) {
    fVar2 = _DAT_001caf8c * _DAT_0001cc7c - _DAT_0001cc80;
    if (_DAT_0001cc6c <= fVar2) {
      if (_DAT_0001cc78 < fVar2) {
        FUN_001416c8();
        return;
      }
      ctrgenutar = (byte)(int)fVar2;
    }
    else {
      ctrgenutar = 0;
    }
  }
  else if ((DAT_001caf4e == *unaff_r24) && (*unaff_r28 != '\0')) {
    fVar2 = _DAT_003fb4b8;
    if (B_taerr != 0) {
      fVar2 = _DAT_001caf8c;
    }
    fVar2 = fVar2 * _DAT_0001cc64 * _DAT_0001cc84 - _DAT_0001cc80;
    if (_DAT_0001cc6c <= fVar2) {
      if (fVar2 <= _DAT_0001cc78) {
        ctrgenutar = (byte)(int)fVar2;
      }
      else {
        ctrgenutar = 0xff;
      }
    }
    else {
      ctrgenutar = 0;
    }
  }
  else {
    fVar2 = _DAT_003fb4b4 * _DAT_0001cc7c - _DAT_0001cc80;
    if (_DAT_0001cc6c <= fVar2) {
      if (fVar2 <= _DAT_0001cc78) {
        ctrgenutar = (byte)(int)fVar2;
      }
      else {
        ctrgenutar = 0xff;
      }
    }
    else {
      ctrgenutar = 0;
    }
  }
  return;
}

