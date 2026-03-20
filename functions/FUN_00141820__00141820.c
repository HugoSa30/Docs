/*
 * Program: n42.bin
 * Function: FUN_00141820
 * Entry: 00141820
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00141820(void)

{
  float fVar1;
  ushort uVar2;
  int unaff_r31;
  byte *pbVar3;
  
  pbVar3 = (byte *)(unaff_r31 + -0x76d2);
  if ((((DAT_001cb25a < *pbVar3) || (B_genoff != 0)) || (B_genfprl != 0)) || (B_noctrgen != 0)) {
    st_ldstgen = 2;
  }
  else {
    if (DAT_001cb256 == '\0') {
      uVar2 = (ushort)*pbVar3;
    }
    else {
      uVar2 = func_0xff2189bc(&DAT_001cb23a,gentemp);
    }
    if (uVar2 < DAT_001cb258) {
      st_ldstgen = 0;
    }
    else {
      if (DAT_001cb256 == '\0') {
        uVar2 = (ushort)*pbVar3;
      }
      else {
        uVar2 = func_0xff2189bc(&DAT_001cb23a,gentemp);
      }
      if (uVar2 < DAT_001cb259) {
        st_ldstgen = 1;
      }
      else {
        if (DAT_001cb256 == '\0') {
          uVar2 = (ushort)*pbVar3;
        }
        else {
          uVar2 = func_0xff2189bc(&DAT_001cb23a,gentemp);
        }
        if (DAT_001cb257 <= uVar2) {
          st_ldstgen = 2;
        }
      }
    }
  }
  if (((B_stend != '\0') && (B_genfprl == 0)) && (B_genoff == 0)) {
    _dfwanzahl = _dfwanzahl + _DAT_0001cc88;
    fVar1 = ((_dfsumme / _dfwanzahl) * _DAT_0001cc8c) / _DAT_0001cc90;
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
    dffgenflo = (dword)(float)(((double)CONCAT44(0x43300000,(uint)*pbVar3) - (double)_DAT_0001cc9c)
                               * (double)_DAT_0001cc90 * (double)_DAT_0001cca0);
    _dfsumme = _dfsumme + (float)dffgenflo;
  }
  return;
}

