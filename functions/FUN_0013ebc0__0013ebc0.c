/*
 * Program: n42.bin
 * Function: FUN_0013ebc0
 * Entry: 0013ebc0
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_0013ebc0(void)

{
  if (B_bt != '\0') {
    if (t_bttim != 0) {
      t_bttim = t_bttim - 1;
      goto LAB_0013ec00;
    }
  }
  FUN_001307fc();
LAB_0013ec00:
  if ((byte)(B_fadk | B_falsv2 | B_falsv | B_fadisa | B_fadka | B_fallas | B_falsh | B_fakat |
             B_grdst | B_faavr | B_fanwsd | B_fanws | B_falra | B_falr | B_falls | B_faevz | B_fates
             | B_fasls | B_falsh2 | B_fakat2 | B_fadmtle | B_favvtal) == 0) {
    nsolfa = 0;
    devoff = 0;
    wnwstst = 0;
    vvtal = 0;
    B_fa = '\0';
  }
  else if (B_fa == '\0') {
    FUN_00130700();
  }
  return;
}

