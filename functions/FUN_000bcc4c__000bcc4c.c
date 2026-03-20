/*
 * Program: n42.bin
 * Function: FUN_000bcc4c
 * Entry: 000bcc4c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000bcc4c(void)

{
  float fVar1;
  
  if (B_ll == '\0') {
    _DAT_003fdb8e = 0;
    _DAT_003fdb90 = 0;
    _DAT_003fdb92 = 0;
    _DAT_003fdb94 = 0;
  }
  else if (zzyllfb == 0) {
    FUN_000b291c((double)_UNK_003fa6e8,(double)_DAT_001c1a98,&DAT_003faa34);
    fVar1 = ((_DAT_003faa34 * _DAT_0001bde4) / _DAT_0001bde8) * _DAT_0001bdec;
    if (_DAT_0001bdf0 <= fVar1) {
      if (fVar1 <= _DAT_0001bdf4) {
        _DAT_003fdb8e = (undefined2)(int)fVar1;
      }
      else {
        _DAT_003fdb8e = 0x7fff;
      }
    }
    else {
      _DAT_003fdb8e = 0x8000;
    }
  }
  else if (zzyllfb == 1) {
    FUN_000b291c((double)_UNK_003fa6ec,(double)_DAT_001c1a98,&DAT_003faa30);
    fVar1 = ((_DAT_003faa30 * _DAT_0001bde4) / _DAT_0001bde8) * _DAT_0001bdec;
    if (_DAT_0001bdf0 <= fVar1) {
      if (fVar1 <= _DAT_0001bdf4) {
        _DAT_003fdb92 = (undefined2)(int)fVar1;
      }
      else {
        _DAT_003fdb92 = 0x7fff;
      }
    }
    else {
      _DAT_003fdb92 = 0x8000;
    }
  }
  else if (zzyllfb == 2) {
    FUN_000b291c((double)_UNK_003fa6f0,(double)_DAT_001c1a98,&DAT_003faa3c);
    fVar1 = ((_DAT_003faa3c * _DAT_0001bde4) / _DAT_0001bde8) * _DAT_0001bdec;
    if (_DAT_0001bdf0 <= fVar1) {
      if (fVar1 <= _DAT_0001bdf4) {
        _DAT_003fdb94 = (undefined2)(int)fVar1;
      }
      else {
        _DAT_003fdb94 = 0x7fff;
      }
    }
    else {
      _DAT_003fdb94 = 0x8000;
    }
  }
  else if (zzyllfb == 3) {
    FUN_000b291c((double)_UNK_003fa6f4,(double)_DAT_001c1a98,&DAT_003faa38);
    fVar1 = ((_DAT_003faa38 * _DAT_0001bde4) / _DAT_0001bde8) * _DAT_0001bdec;
    if (_DAT_0001bdf0 <= fVar1) {
      if (fVar1 <= _DAT_0001bdf4) {
        _DAT_003fdb90 = (undefined2)(int)fVar1;
      }
      else {
        _DAT_003fdb90 = 0x7fff;
      }
    }
    else {
      _DAT_003fdb90 = 0x8000;
    }
  }
  return;
}

