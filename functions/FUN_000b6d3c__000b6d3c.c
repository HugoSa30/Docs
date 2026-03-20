/*
 * Program: n42.bin
 * Function: FUN_000b6d3c
 * Entry: 000b6d3c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000b6d3c(void)

{
  float fVar1;
  char *unaff_r19;
  float *unaff_r20;
  float *unaff_r23;
  byte *unaff_r25;
  float *unaff_r26;
  float *unaff_r27;
  float *unaff_r28;
  int unaff_r31;
  uint uVar2;
  uint uVar3;
  double in_f6;
  
  FUN_000b291c((double)(float)in_f6,(double)(float)fflutn_f,&DAT_003fa7d0);
  if (B_lustop != 0) {
    _DAT_003fa7d0 = _DAT_0001bd30;
  }
  _flutszyl_f = _DAT_003fa7d0;
  _fluts_f = *(undefined4 *)(&flutszyl_f + *unaff_r19 * 4);
  fVar1 = _DAT_0001bd30;
  if (_DAT_0001bd30 != *unaff_r23) {
    fVar1 = *unaff_r26 * ((*unaff_r27 - *unaff_r20) / *unaff_r23);
  }
  _dluts_f = *unaff_r28 - fVar1;
  _tsknp1_f = *(undefined4 *)(unaff_r31 + (uint)tskinp1 * 4);
  _tskn_f = *(undefined4 *)(unaff_r31 + (uint)tskin * 4);
  _tsknm1_f = *(undefined4 *)(unaff_r31 + (uint)tskinm1 * 4);
  _tsknm2_f = *(undefined4 *)(unaff_r31 + (uint)tskinm2 * 4);
  uVar2 = tskinp1 + 1;
  if (100 < (uVar2 & 0xff)) {
    uVar2 = 100;
  }
  tskinp1 = (byte)uVar2;
  uVar3 = (uint)*unaff_r25;
  if (uVar3 < (uVar2 & 0xff)) {
    tskinp1 = 0;
  }
  uVar2 = tskin + 1;
  if (100 < (uVar2 & 0xff)) {
    uVar2 = 100;
  }
  tskin = (byte)uVar2;
  if (uVar3 < (uVar2 & 0xff)) {
    tskin = 0;
  }
  uVar2 = tskinm1 + 1;
  if (100 < (uVar2 & 0xff)) {
    uVar2 = 100;
  }
  tskinm1 = (byte)uVar2;
  if (uVar3 < (uVar2 & 0xff)) {
    tskinm1 = 0;
  }
  uVar2 = tskinm2 + 1;
  if (100 < (uVar2 & 0xff)) {
    uVar2 = 100;
  }
  tskinm2 = (byte)uVar2;
  if (uVar3 < (uVar2 & 0xff)) {
    tskinm2 = 0;
  }
  return;
}

