/*
 * Program: n42.bin
 * Function: FUN_0012a568
 * Entry: 0012a568
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0012a568(void)

{
  ushort uVar1;
  ushort local_18;
  ushort local_14 [2];
  ushort local_10 [2];
  ushort *local_c;
  
  uVar1 = _B_bkcana;
  local_18 = _B_bkcana;
  DAT_003f9b81 = TDCANB1;
  DAT_003f9b82 = TDCANB3;
  DAT_003f9b83 = TDCANBH;
  canastati = FUN_001a319c(0);
  if ((canastati & 2) != 0) {
    local_18 = uVar1 & 0xd0fc | 0x2203;
    B_edprcanb = B_edprcanb;
  }
  local_14[0] = local_18;
  local_c = local_14;
  local_10[0] = local_18;
  func_0xff222958(9,local_10);
  return;
}

