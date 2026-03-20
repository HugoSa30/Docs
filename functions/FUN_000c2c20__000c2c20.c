/*
 * Program: n42.bin
 * Function: FUN_000c2c20
 * Entry: 000c2c20
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000c2c20(void)

{
  double dVar1;
  undefined uStack_30;
  ENUM_005b8d04 local_2f;
  
  if (tsbsyctr <= TSBINVALID) {
    tsbsyctr = tsbsyctr + 1;
  }
  zzyldmd = zzyl - ZYLKOR;
  if ((char)zzyldmd < '\0') {
    zzyldmd = zzyldmd + 4;
  }
  dVar1 = (double)_DAT_0001c734;
  _zzyldmd_f = (float)((double)CONCAT44(0x43300000,(int)(char)zzyldmd ^ 0x80000000) - dVar1);
  if (B_ts1delay == 0) {
    B_ti1stamp = (*(code *)&SUB_000644f0)(&tSlave1_l,2);
    B_ti2stamp = (*(code *)&SUB_000644f0)(&DAT_005b9db4,3);
    if ((B_ti1stamp == 0) || (B_ti2stamp == 0)) {
      B_tsbready = 0;
      tSlave1_l = 0;
      DAT_005b9db4 = 0;
      _tsroh_f = _DAT_0001c740;
    }
    else {
      if (DAT_005b9db4 < tSlave1_l) {
        DAT_005b9db4 = DAT_005b9db4 + _DAT_003faf64;
      }
      tsegDmd_l = DAT_005b9db4 - tSlave1_l;
      if (TSBINVALID < tsbsyctr) {
        _tsroh_f = (float)((double)CONCAT44(0x43300000,tsegDmd_l * 100) - (double)_DAT_0001c738) /
                   _DAT_0001c73c;
      }
      else {
        _tsroh_f = _TSBSEGINI /
                   (float)((double)CONCAT44(0x43300000,0x3c / dmdsegl_w ^ 0x80000000) - dVar1);
      }
      B_tsbready = B_tsbready;
    }
  }
  else if (B_tsbcalc == 0) {
    B_ti1stamp = (*(code *)&SUB_000644f0)(&tSlave1_l,2);
    if (B_ti1stamp == 0) {
      tSlave1_l = 0;
      _tsroh_f = _DAT_0001c740;
    }
    else {
      B_tsbcalc = B_tsbcalc;
      _tsroh_f = _TSBSEGINI /
                 (float)((double)CONCAT44(0x43300000,0x3c / dmdsegl_w ^ 0x80000000) - dVar1);
    }
    B_ti2stamp = 0;
    B_tsbready = 0;
    DAT_005b9db4 = 0;
  }
  else {
    B_ti2stamp = (*(code *)&SUB_000644f0)(&DAT_005b9db4,3);
    if ((B_ti1stamp == 0) || (B_ti2stamp == 0)) {
      B_tsbcalc = 0;
      B_tsbready = 0;
      tSlave1_l = 0;
      DAT_005b9db4 = 0;
      _tsroh_f = _DAT_0001c740;
    }
    else {
      if (DAT_005b9db4 < tSlave1_l) {
        DAT_005b9db4 = DAT_005b9db4 + _DAT_003faf64;
      }
      tsegDmd_l = DAT_005b9db4 - tSlave1_l;
      if (TSBINVALID < tsbsyctr) {
        _tsroh_f = (float)((double)CONCAT44(0x43300000,tsegDmd_l * 100) - (double)_DAT_0001c738) /
                   _DAT_0001c73c;
      }
      else {
        _tsroh_f = _TSBSEGINI /
                   (float)((double)CONCAT44(0x43300000,0x3c / dmdsegl_w ^ 0x80000000) - dVar1);
      }
      B_tsbready = B_tsbready;
      B_ti1stamp = (*(code *)&SUB_000644f0)(&tSlave1_l,2);
    }
  }
  FUN_0009b900(5,1,&uStack_30);
  B_stimhelp = local_2f;
  return;
}

