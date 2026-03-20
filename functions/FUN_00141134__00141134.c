/*
 * Program: n42.bin
 * Function: FUN_00141134
 * Entry: 00141134
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00141134(void)

{
  float fVar1;
  float *unaff_r30;
  float *unaff_r31;
  double in_f30;
  
  *unaff_r31 = (float)in_f30;
  if (DAT_005b8ab4 == '\0') {
    fVar1 = (float)((double)_DAT_003fb4a0 - in_f30);
    if (fVar1 <= _DAT_0001cc6c) {
      fVar1 = -fVar1;
    }
    if (_DAT_001caf84 < fVar1) {
      *unaff_r31 = _DAT_003fb4a0;
    }
  }
  else {
    DAT_005b8ab4 = '\0';
  }
  _DAT_003fb4a0 = *unaff_r31;
  func_0xff22291c((double)_DAT_003fb4a0,(double)*unaff_r30,&DAT_003fb4bc);
  _DAT_003fddd0 = _DAT_003fb4bc;
  fVar1 = (_DAT_003fb4bc * _DAT_0001cc70) / _DAT_0001cc58 + _DAT_0001cc74;
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
  func_0xff218740((double)_DAT_003fb4bc,&DAT_001caf14);
  return;
}

