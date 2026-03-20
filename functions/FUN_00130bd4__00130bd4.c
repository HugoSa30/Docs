/*
 * Program: n42.bin
 * Function: FUN_00130bd4
 * Entry: 00130bd4
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00130bd4(void)

{
  if (B_eepwf != '\0') {
    if (B_eepdif == '\0') {
      _dmvadll_w = _DAT_003fe7de;
      _dmvadko_w = _DAT_003fe7e0;
      _dmvadfs_w = _DAT_003fe7e2;
      _dmvadfk_w = _DAT_003fe7e4;
    }
    else {
      _dmvadll_w = 0;
      _DAT_003fddb0 = 0;
      _dmvadko_w = 0;
      _DAT_003fddb4 = 0;
      _dmvadfs_w = 0;
      _DAT_003fddb8 = 0;
      _dmvadfk_w = 0;
      _DAT_003fddbc = 0;
    }
  }
  if (((int)(short)(ushort)DMADMXLL << 5 < (int)_dmvadll_w) ||
     ((int)_dmvadll_w < (short)(ushort)DMADMNLL * -0x20)) {
    _dmvadll_w = 0;
    _DAT_003fddb0 = 0;
  }
  if (((int)(short)(ushort)DMADMXKO << 5 < (int)_dmvadko_w) ||
     ((int)_dmvadko_w < (short)(ushort)DMADMNKO * -0x20)) {
    _dmvadko_w = 0;
    _DAT_003fddb4 = 0;
  }
  if (((int)(short)(ushort)DMADMXFS << 5 < (int)_dmvadfs_w) ||
     ((int)_dmvadfs_w < (short)(ushort)DMADMNFS * -0x20)) {
    _dmvadfs_w = 0;
    _DAT_003fddb8 = 0;
  }
  if (((int)(short)(ushort)DMADMXFK << 5 < (int)_dmvadfk_w) ||
     ((int)_dmvadfk_w < (short)(ushort)DMADMNFK * -0x20)) {
    _dmvadfk_w = 0;
    _DAT_003fddbc = 0;
  }
  DAT_003fb355 = TWDMAD;
  DAT_003fb356 = 0;
  return;
}

