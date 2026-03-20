/*
 * Program: n42.bin
 * Function: FUN_00167a20
 * Entry: 00167a20
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00167a20(void)

{
  uint uVar1;
  
  if (DAT_005b8df8 == '\0') {
    DAT_005b8df7 = (undefined)(tabst_w >> 4);
    uVar1 = func_0xff2196d0(&KFMTOL1,DAT_003fdbca,tabst_w >> 4 & 0xff);
    uVar1 = (uVar1 & 0xff) + (uint)tmot + 0xffc0;
    if (0xff < (uVar1 & 0xffff)) {
      uVar1 = 0xff;
    }
    DAT_005b982c = (ushort)(uVar1 << 8);
    DAT_005b9830 = 0x4000;
    DAT_005b982e = 0x4000;
    uVar1 = uVar1 << 8 & 0xff00;
    m_tol = (byte)(uVar1 >> 8);
    if (0xff < uVar1 >> 8) {
      m_tol = 0xff;
    }
    DAT_005b8df8 = -1;
  }
  else {
    DAT_005b982c = func_0xff217fe8(_DAT_001c1d6e,tmot,DAT_005b982c);
    DAT_005b8dfa = func_0xff2196d0(&KFMTOL2,nmot,rl);
    DAT_005b982e = func_0xff217fe8(_DAT_001c1d70,DAT_005b8dfa,DAT_005b982e);
    DAT_005b8dfb = func_0xff2196d0(&KFMTOL3,tumg,vfzg);
    DAT_005b9830 = func_0xff217fe8(_DAT_001c1d72,DAT_005b8dfb,DAT_005b9830);
    uVar1 = ((uint)DAT_005b982c + (uint)DAT_005b982e + (uint)DAT_005b9830) - 0x8000 >> 8;
    if (0xff < uVar1) {
      uVar1 = 0xff;
    }
    DAT_003fdbca = (byte)uVar1;
    m_tol = DAT_003fdbca;
    if (DAT_001cf216 == '\0') {
      if (DAT_001cf217 < tka) {
        B_oelh = 0xff;
      }
      else {
        B_oelh = 0;
      }
    }
    else if ((uint)DAT_001cf217 < (uVar1 & 0xff)) {
      B_oelh = 0xff;
    }
    else {
      B_oelh = 0;
    }
  }
  return;
}

