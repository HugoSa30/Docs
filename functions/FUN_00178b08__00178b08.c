/*
 * Program: n42.bin
 * Function: FUN_00178b08
 * Entry: 00178b08
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00178b08(void)

{
  short sVar1;
  
  dyesv_w = func_0xff21b038(&DAT_001c7fbc,(int)_DAT_001ce9ea,esst_snm08kruw,esst_swd06krsw);
  dyesofv_w = func_0xff21b038(&DAT_001c80dc,(int)_DAT_001ce9ea,esst_snm08kruw,esst_swd06krsw);
  dyesehv_w = func_0xff21b038(&DAT_001c801c,(int)_DAT_001ce976,esst_snm08kruw,esst_seh06kruw);
  dyesehof_w = func_0xff21b038(&DAT_001c807c,(int)_DAT_001ce976,esst_snm08kruw,esst_seh06kruw);
  sVar1 = func_0xff2189bc(&DAT_001d15ec,nmot);
  ngkrv_w = sVar1 + 0x8000;
  sVar1 = func_0xff2189bc(0x1d162e,nmot);
  nngkrv_w = sVar1 + 0x8000;
  azkrndy = func_0xff2187cc(&DAT_001d1594,nmot);
  azkrldy = func_0xff2187cc(&DAT_001d1570,nmot);
  if (B_sa != '\0') goto LAB_00178ca8;
  if (DAT_003fb156 == '\x01') {
    DAT_003fb156 = '\0';
    DAT_003fb15c = TZVER;
LAB_00178c8c:
    if (DAT_003fb15c != '\0') goto LAB_00178ca8;
  }
  else if (DAT_003fb15c != '\0') {
    DAT_003fb15c = DAT_003fb15c + -1;
    goto LAB_00178c8c;
  }
  B_krsadyn = 1;
LAB_00178ca8:
  wkrdyvs = func_0xff2196d0(&DAT_001d15b8,tans,nmot);
  return;
}

