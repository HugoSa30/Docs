/*
 * Program: n42.bin
 * Function: FUN_00169fa8
 * Entry: 00169fa8
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00169fa8(void)

{
  ushort local_20;
  ushort local_1c [2];
  ushort local_18 [2];
  ushort *local_14;
  
  local_20 = _sfpegfe;
  if (CWDEGFE == '\0') {
    local_20 = _sfpegfe & 0xf0fe;
  }
  else if (B_stend == '\0') {
    DAT_003fabfc = TDEGFEST;
  }
  else if (DAT_003fabfc == '\0') {
    if ((B_fkmsmn == 0) || (B_fkpvmn == 0)) {
      DAT_003fabfd = TDEGFEMN;
    }
    else if (DAT_003fabfd == '\0') {
      local_20 = _sfpegfe & 0xd0fc | 0x2203;
    }
    else {
      DAT_003fabfd = DAT_003fabfd + -1;
    }
    if ((B_fkmsmx == 0) || (B_fkpvmx == 0)) {
      DAT_003fabfe = TDEGFEMX;
    }
    else if (DAT_003fabfe == '\0') {
      local_20 = local_20 & 0xd0fc | 0x2103;
    }
    else {
      DAT_003fabfe = DAT_003fabfe + -1;
    }
    if (((B_fkmsmx == 0) || (B_fkpvmx == 0)) && ((B_fkmsmn == 0 || (B_fkpvmn == 0)))) {
      if (DAT_003fabff == '\0') {
        local_20 = local_20 & 0xd0fc | 0x2002;
      }
      else {
        DAT_003fabff = DAT_003fabff + -1;
      }
    }
    else {
      DAT_003fabff = TDEGFENO;
    }
  }
  else {
    DAT_003fabfc = DAT_003fabfc + -1;
  }
  local_1c[0] = local_20;
  local_14 = local_1c;
  local_18[0] = local_20;
  func_0xff222958(0x46,local_18);
  return;
}

