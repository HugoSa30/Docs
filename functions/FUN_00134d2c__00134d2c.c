/*
 * Program: n42.bin
 * Function: FUN_00134d2c
 * Entry: 00134d2c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00134d2c(void)

{
  ushort uVar1;
  
  DAT_003fb88c = ub;
  if (B_uhrrsec == '\0') {
    if (DAT_001ce01e <= DAT_003fde3d) goto LAB_00134dec;
    B_ekpubn = B_ekpubn | B_pvl2;
  }
  else {
    uVar1 = func_0xff2190c8(DAT_001ce020,0x1ce021,0x1ce02e,tmotab);
    if (tabst_w <= uVar1) goto LAB_00134dec;
    B_ekpubn = B_ekpubn | B_pvl1;
  }
  B_ekpubn = B_ekpubn | B_tpvl;
  DAT_003fb888 = DAT_001ce01b;
LAB_00134dec:
  if (DAT_003fb888 != '\0') {
    if (((_B_nlale & 0x4000) == 0) && ((DAT_003fde3c & 1) == 0)) {
      DAT_003fb888 = '\0';
    }
    else {
      B_ekpubn = B_ekpubn | B_ekpvl;
      B_ekp = B_airbag == '\0';
    }
  }
  return;
}

