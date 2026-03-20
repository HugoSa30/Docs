/*
 * Program: n42.bin
 * Function: FUN_000b7768
 * Entry: 000b7768
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000b7768(void)

{
  float fVar1;
  
  if (B_mdstop == 0) {
    if (zzyllfb == 3) {
      _luarmn_f = _DAT_003fa88c;
      if (_DAT_003fa888 < _DAT_003fa88c) {
        _luarmn_f = _DAT_003fa888;
      }
      if (_DAT_003fa884 < _luarmn_f) {
        _luarmn_f = _DAT_003fa884;
      }
      if (_DAT_003fa880 < _luarmn_f) {
        _luarmn_f = _DAT_003fa880;
      }
      if (_DAT_003fa87c < _luarmn_f) {
        _luarmn_f = _DAT_003fa87c;
      }
      if (_DAT_003fa878 < _luarmn_f) {
        _luarmn_f = _DAT_003fa878;
      }
      if (_DAT_003fa874 < _luarmn_f) {
        _luarmn_f = _DAT_003fa874;
      }
      if (_DAT_003fa870 < _luarmn_f) {
        _luarmn_f = _DAT_003fa870;
      }
      if (_DAT_003fa86c < _luarmn_f) {
        _luarmn_f = _DAT_003fa86c;
      }
      if (_DAT_003fa868 < _luarmn_f) {
        _luarmn_f = _DAT_003fa868;
      }
      if (_DAT_003fa864 < _luarmn_f) {
        _luarmn_f = _DAT_003fa864;
      }
      if (_flutskzy_f < _luarmn_f) {
        _luarmn_f = _flutskzy_f;
      }
    }
    _luaralt_f = _luaroff_f;
    if (B_sch == '\0') {
      if (B_wkr == '\0') {
        if (B_wk == '\0') {
          fVar1 = _luaroff_f - (_flurmin_f * _DAT_0001bd5c + _fkfluar_f);
        }
        else {
          fVar1 = _luaroff_f - (_flurmin_f * _DAT_0001bd5c + _fkfluar1_f);
        }
      }
      else {
        fVar1 = _luaroff_f - (_flurmin_f * _DAT_0001bd5c + _fkfluar2_f);
      }
    }
    else {
      fVar1 = _luaroff_f - (_flurmin_f * _DAT_0001bd5c + _fkfluars_f);
    }
    if (fVar1 <= _DMXRFL) {
      if (B_sch == '\0') {
        if (B_wkr == '\0') {
          if (B_wk == '\0') {
            _luaroff_f = _flurmin_f * _DAT_0001bd5c + _fkfluar_f;
          }
          else {
            _luaroff_f = _flurmin_f * _DAT_0001bd5c + _fkfluar1_f;
          }
        }
        else {
          _luaroff_f = _flurmin_f * _DAT_0001bd5c + _fkfluar2_f;
        }
      }
      else {
        _luaroff_f = _flurmin_f * _DAT_0001bd5c + _fkfluars_f;
      }
    }
    else {
      _luaroff_f = _luaroff_f - _DMXRFL;
    }
    _luar_f = _luarmn_f + _luaroff_f;
    if (B_lustop == 0) {
      B_luaerk = (ENUM_005b8c70)(((uint)(byte)((_luar_f < _flutsk_f) << 2) << 8) >> 10);
    }
    else {
      B_luaerk = 0;
    }
  }
  return;
}

