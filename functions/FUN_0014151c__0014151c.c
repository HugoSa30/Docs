/*
 * Program: n42.bin
 * Function: FUN_0014151c
 * Entry: 0014151c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0014151c(void)

{
  float fVar1;
  char *unaff_r27;
  int unaff_r29;
  float *unaff_r31;
  
  func_0xff22291c((double)_DAT_003fddcc,(double)*unaff_r31,(float *)(unaff_r29 + -0x4b50));
  _DAT_003fddd0 = *(float *)(unaff_r29 + -0x4b50);
  fVar1 = (_DAT_003fddd0 * _DAT_0001cc70) / _DAT_0001cc58 + _DAT_0001cc74;
  if (_DAT_0001cc6c <= fVar1) {
    if (fVar1 <= _DAT_0001cc78) {
      tbatt = (byte)(int)fVar1;
    }
    else {
      tbatt = 0xff;
    }
  }
  else {
    tbatt = 0;
  }
  _DAT_003fddcc =
       (float)((double)CONCAT44(0x43300000,(int)(short)*unaff_r27 + (int)DAT_001caf55 ^ 0x80000000)
              - (double)_DAT_0001cc48);
  func_0xff218740((double)_DAT_003fddd0,&DAT_001caf14);
  return;
}

