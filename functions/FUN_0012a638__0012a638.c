/*
 * Program: n42.bin
 * Function: FUN_0012a638
 * Entry: 0012a638
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0012a638(void)

{
  ushort uVar1;
  ushort local_18;
  ushort local_14 [2];
  ushort local_10 [2];
  ushort *local_c;
  
  uVar1 = _B_bkcanb;
  local_18 = _B_bkcanb;
  DAT_003f9b85 = TDCANA1;
  DAT_003f9b86 = TDCANA3;
  DAT_003f9b87 = TDCANAH;
  canbstati = FUN_001a319c(1);
  if ((canbstati & 2) != 0) {
    local_18 = uVar1 & 0xd0fc | 0x2203;
    B_edprcana = B_edprcana;
  }
  local_14[0] = local_18;
  local_c = local_14;
  local_10[0] = local_18;
  func_0xff222958(10,local_10);
  return;
}

