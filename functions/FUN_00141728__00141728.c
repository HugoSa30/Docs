/*
 * Program: n42.bin
 * Function: FUN_00141728
 * Entry: 00141728
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00141728(void)

{
  float fVar1;
  double in_f13;
  
  fVar1 = (float)in_f13 * _DAT_0001cc84 - _DAT_0001cc80;
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

