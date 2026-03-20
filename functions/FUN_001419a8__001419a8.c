/*
 * Program: n42.bin
 * Function: FUN_001419a8
 * Entry: 001419a8
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001419a8(double param_1,float *param_2)

{
  float fVar1;
  byte *unaff_r31;
  double in_f10;
  double in_f12;
  
  fVar1 = (float)(in_f12 * in_f10) / _DAT_0001cc90;
  if (_DAT_0001cc94 <= fVar1) {
    if (fVar1 <= _DAT_0001cc98) {
      dfmonitor = (undefined)(int)fVar1;
    }
    else {
      dfmonitor = 0xff;
    }
  }
  else {
    dfmonitor = 0;
  }
  dffgenflo = (dword)(float)(((double)CONCAT44(0x43300000,(uint)*unaff_r31) - (double)_DAT_0001cc9c)
                             * (double)_DAT_0001cc90 * (double)_DAT_0001cca0);
  *param_2 = (float)(param_1 + (double)(float)dffgenflo);
  return;
}

