/*
 * Program: n42.bin
 * Function: FUN_001510fc
 * Entry: 001510fc
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_001510fc(double param_1)

{
  float fVar1;
  short sVar2;
  
  fVar1 = (float)param_1;
  if (fVar1 < _DAT_0001cb90) {
    if (_DAT_0001cb94 < fVar1) {
      if (fVar1 < _DAT_0001cb98) {
        sVar2 = (short)(int)(fVar1 * _DAT_0001cba4 * _DAT_0001cba8);
      }
      else {
        sVar2 = (short)(int)(fVar1 * _DAT_0001cb9c * _DAT_0001cba0);
      }
    }
    else {
      sVar2 = -0x8000;
    }
  }
  else {
    sVar2 = 0x7fff;
  }
  return (int)sVar2;
}

