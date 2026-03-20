/*
 * Program: n42.bin
 * Function: FUN_000e1854
 * Entry: 000e1854
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_000e1854(void)

{
  short sVar1;
  int iVar2;
  
  DAT_005b8dff = FUN_000a87cc(&DAT_001c295c,nmot);
  DAT_005b8dfe = FUN_000a87cc(&DAT_001c2944,nmot);
  DAT_005b8dfd = FUN_000a87cc(&DAT_001c292c,nmot);
  sVar1 = calc_value_from_y_2(&KLZYLN,(int)DAT_005b9858);
  iVar2 = (int)(((int)((int)sVar1 * (uint)DAT_001c2971 + (uint)DAT_005b8dff * 0x200) >> 1) *
               (uint)DAT_005b8dfe) >> 6;
  if (iVar2 < 0) {
    DAT_005b9852 = 0;
  }
  else if (iVar2 < 0x10000) {
    DAT_005b9852 = (ushort)iVar2;
  }
  else {
    DAT_005b9852 = 0xffff;
  }
  sVar1 = calc_value_from_y_2(&DAT_001c2902,(int)DAT_005b986a);
  iVar2 = ((int)(((int)sVar1 * (int)(short)dps_w >> 0x10) * (uint)DAT_005b986e) >> 8) *
          (uint)DAT_005b8dfd;
  if (iVar2 < 0) {
    DAT_005b9856 = 0;
  }
  else if (iVar2 < 0x10000) {
    DAT_005b9856 = (ushort)iVar2;
  }
  else {
    DAT_005b9856 = 0xffff;
  }
  if ((uint)DAT_005b9852 + (uint)DAT_005b9856 < 0x10000) {
    DAT_005b9854 = (undefined2)((uint)DAT_005b9852 + (uint)DAT_005b9856);
  }
  else {
    DAT_005b9854 = 0xffff;
  }
  return;
}

