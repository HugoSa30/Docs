/*
 * Program: n42.bin
 * Function: FUN_001781ac
 * Entry: 001781ac
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001781ac(void)

{
  ushort local_20;
  ushort local_1c [2];
  ushort local_18 [2];
  ushort *local_14;
  ushort local_10 [2];
  ushort *local_c;
  
  local_20 = _B_ftkrtp;
  if (DAT_001c7f2a == '\0') {
    local_20 = _B_ftkrtp & 0xd0fc | 0x2002;
  }
  else {
    if (E_hlpkrtp == '\0') {
      local_20 = _B_ftkrtp & 0xf0fe;
    }
    else {
      if (Z_hlpkrtp == '\0') goto LAB_001782a0;
      local_20 = _B_ftkrtp & 0xf0fe | 0x801;
    }
    if (Z_hlpkrtp != '\0') {
      local_20 = local_20 & 0xdffd | 0x2002;
    }
  }
LAB_001782a0:
  local_1c[0] = local_20;
  local_14 = local_1c;
  local_18[0] = local_20;
  func_0xff222958(0x6b,local_18);
  local_20 = _Z_krtp2;
  if (DAT_001c7f2b == '\0') {
    local_20 = _Z_krtp2 & 0xd0fc | 0x2002;
  }
  else {
    if (E_hlpkrtp2 == '\0') {
      local_20 = _Z_krtp2 & 0xf0fe;
    }
    else {
      if (Z_hlpkrtp2 == '\0') goto LAB_001783a0;
      local_20 = _Z_krtp2 & 0xf0fe | 0x801;
    }
    if (Z_hlpkrtp2 != '\0') {
      local_20 = local_20 & 0xdffd | 0x2002;
    }
  }
LAB_001783a0:
  local_1c[0] = local_20;
  local_c = local_1c;
  local_10[0] = local_20;
  func_0xff222958(0x6c,local_10);
  return;
}

