/*
 * Program: n42.bin
 * Function: FUN_000e0cf8
 * Entry: 000e0cf8
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_000e0cf8(void)

{
  if ((((SDISALERN != '\0') && (DAT_003fab90 == '\0')) && (Sollwert < DI_SMIN)) &&
     ((B_disa_ersatz == '\0' && (Disa_lern = 1, DAT_003fdbcf != -1)))) {
    DAT_003fdbcf = DAT_003fdbcf + '\x01';
  }
  DAT_003fab90 = SDISALERN;
  if (((DAT_005b8785 == '\0') || (DAT_003fab92 != '\0')) ||
     ((DI_SMIN <= Sollwert || (B_disa_ersatz != '\0')))) {
    DAT_003fab92 = '\0';
  }
  else {
    DAT_003fab92 = DAT_005b8785;
    Disa_lern = 1;
    if (DAT_003fdbcf != -1) {
      DAT_003fdbcf = DAT_003fdbcf + '\x01';
    }
    DAT_005b8785 = '\0';
  }
  return;
}

