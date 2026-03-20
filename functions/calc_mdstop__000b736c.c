/*
 * Program: n42.bin
 * Function: calc_mdstop
 * Entry: 000b736c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void calc_mdstop(void)

{
  float fVar1;
  float fVar2;
  
  if (B_mdstop != 0) {
    return;
  }
  _flurmin_f = _flurmin2_f;
  if ((((fofstat_loc != 1) && (_flurmin_f = _flurmin3_f, fofstat_loc != 2)) &&
      (_flurmin_f = _flurmin1_f, fonstat_loc != 1)) && (_flurmin_f = _flurmin2_f, fonstat_loc != 2))
  {
    _flurmin_f = _DAT_0001bd3c;
  }
  if ((B_lustop == 0) && (DAT_003fa93d != '\0')) {
    DAT_003fa93c = true;
  }
  else {
    DAT_003fa93c = false;
  }
  DAT_003fa93d = B_lustop;
  if (!(bool)DAT_003fa93c) {
    if (B_analu == 0) {
      fVar1 = -((_tsknm1_f - _tskn_f) * _DAT_0001bd40 - _tsknm2_f) - _tsknp1_f;
      if (fVar1 <= _DAT_0001bd3c) {
        fVar1 = -fVar1;
      }
      FUN_000b291c((double)(((fVar1 * _DAT_0001bd44) / _tsknx3_f) * _FIAMALU * (float)z2_f),
                   (double)_FIMALU,&DAT_003fa940);
    }
    if (DAT_003fa93c == '\0') goto LAB_000b7534;
  }
  if (B_analu == 0) {
    _DAT_003fa940 = _DAT_0001bd3c;
  }
LAB_000b7534:
  _lums_f = _DAT_003fa940;
  _lurmsalt_f = _lurms_f;
  fVar1 = _fkflurm_f;
  if (B_wk != '\0') {
    fVar1 = _fkflurm1_f;
  }
  fVar1 = _flurktm_f + fVar1;
  if (_DMXRLU < _lurms_f - fVar1) {
    fVar1 = _lurms_f - _DMXRLU;
  }
  _famal_f = _DAT_0001bd48;
  if (((fVar1 < _DAT_003fa940) && (fonstat_loc < 2)) &&
     ((fofstat == '\0' &&
      ((_famal_f = _fkfamal2_f, B_wkr == '\0' && (_famal_f = _fkfamal_f, B_wk != '\0')))))) {
    _famal_f = _fkfamal1_f;
  }
  _lursalt_f = _lurs_f;
  if ((((B_ll == '\0') || ((DAT_003fdfdf & 1) != 0)) ||
      (fVar2 = _flurbrl_f,
      (double)CONCAT44(0x43300000,(uint)vfzg) - (double)_DAT_0001bd4c != (double)_DAT_0001bd3c)) &&
     ((fVar2 = _fkflurb2_f, B_wkr == '\0' && (fVar2 = _fkflurb_f, B_wk != '\0')))) {
    fVar2 = _fkflurb1_f;
  }
  fVar2 = _flurktm_f + fVar2 + _flurmin_f;
  if (_DMXRLU < _lurs_f - fVar2) {
    fVar2 = _lurs_f - _DMXRLU;
  }
  _lurs_f = fVar2 * _flurst_f * _famal_f;
  B_luerk_t = (ENUM_005b8c6f)(((uint)(byte)((_lurs_f < _lutsk_f) << 2) << 8) >> 10);
  if ((B_lustop != 0) || (B_luerk = B_luerk_t, B_analu != 0)) {
    B_luerk = 0;
  }
                    /* WARNING: Read-only address (ram,0x003fdfdf) is written */
  _lurms_f = fVar1;
  return;
}

