/*
 * Program: n42.bin
 * Function: FUN_001311e8
 * Entry: 001311e8
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001311e8(void)

{
  float fVar1;
  
  DAT_005b8ab6 = DAT_005b8ab7;
  if (DAT_001caf50 != '\0') {
    DAT_005b8ab6 = DAT_001caf53;
  }
  DAT_005b8ab4 = 1;
  fVar1 = _DAT_001caf8c * _DAT_0001cc7c - _DAT_0001cc80;
  if (_DAT_0001cc6c <= fVar1) {
    if (fVar1 <= _DAT_0001cc78) {
      ctrgenutar = (byte)(int)fVar1;
    }
    else {
      ctrgenutar = 0xff;
    }
  }
  else {
    ctrgenutar = 0;
  }
  return;
}

