/*
 * Program: n42.bin
 * Function: FUN_000a33ac
 * Entry: 000a33ac
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_000a33ac(uint param_1)

{
  byte bVar1;
  byte local_10;
  undefined uStack_f;
  ushort local_e [3];
  
  local_e[0] = (ushort)(param_1 / 0x640) & 0xff | 0x1900;
  FUN_000a3c90(_DAT_00016eda,1,0,local_e,&local_10);
  FUN_000a3858(_DAT_00016eda,&uStack_f);
  FUN_000a4154();
  bVar1 = 0;
  do {
    FUN_000a4154();
    local_10 = FUN_000a411c(_DAT_00016eda);
    bVar1 = bVar1 + 1;
  } while ((local_10 >> 5 & 1) == 0 && bVar1 < 0x1e);
  return 0x1e < bVar1;
}

