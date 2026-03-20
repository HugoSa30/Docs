/*
 * Program: n42.bin
 * Function: FUN_000e0e20
 * Entry: 000e0e20
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000e0e20(void)

{
  uint uVar1;
  
  if ((Disa_lern != 0) && (DAT_003fab91 == '\0')) {
    DAT_003fab91 = 1;
    _DAT_003fab94 = _DISA_RAMP << 5;
    di_lernst = 1;
    Disolakt = _DI_LSTART << 5;
    t_disa1 = _DI_T1;
    return;
  }
  if (t_disa1 != 0) {
    if (di_lernst == 1) {
      t_disa1 = t_disa1 - 1;
    }
    if (t_disa1 != 0) goto LAB_000e0ff8;
  }
  if (di_lernst == 1) {
    uVar1 = (uint)Disa_spg;
    if (uVar1 < _DI_LSTART) {
      if ((int)(_DI_LSTART - uVar1) < (int)(uint)_DISALMN) {
        di_lernst = 2;
        t_disa2 = _DI_T2;
      }
      else {
        Di_lfehl = 1;
        Disa_lern = 0;
        DAT_003fab91 = '\0';
        if (Dicntlfehl != -1) {
          Dicntlfehl = Dicntlfehl + '\x01';
        }
        B_disalern = 0;
      }
    }
    else if ((int)(uVar1 - _DI_LSTART) < (int)(uint)_DISALMN) {
      di_lernst = 2;
      t_disa2 = _DI_T2;
    }
    else {
      Di_lfehl = 1;
      Disa_lern = 0;
      DAT_003fab91 = '\0';
      if (Dicntlfehl != -1) {
        Dicntlfehl = Dicntlfehl + '\x01';
      }
      B_disalern = 0;
    }
  }
LAB_000e0ff8:
  if (di_lernst == 2) {
    if (Disolakt != 0) {
      if (_DAT_003fab94 < Disolakt) {
        Disolakt = Disolakt - _DAT_003fab94;
      }
      else {
        Disolakt = 0;
      }
      if (Disaaus_p == 0) {
        t_disa2 = t_disa2 - 1;
      }
      else {
        t_disa2 = _DI_T2;
      }
    }
    if ((Disolakt == 0) || (t_disa2 == 0)) {
      if ((Disa_spg < _DISA_U) && (_DISA_UMN < Disa_spg)) {
        Di_lfehl = 0;
        _Disa_uma = Disa_spg;
        Disa_lern = 0;
        DAT_003fab91 = '\0';
        di_lernst = 3;
        B_disalern = 1;
      }
      else {
        Di_lfehl = 2;
        Disa_lern = 0;
        DAT_003fab91 = '\0';
        if (Dicntlfehl != -1) {
          Dicntlfehl = Dicntlfehl + '\x01';
        }
        B_disalern = 0;
      }
    }
  }
  return;
}

