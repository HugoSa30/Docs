/*
 * Program: n42.bin
 * Function: FUN_0012d344
 * Entry: 0012d344
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0012d344(void)

{
  func_0xff252a70(0,1);
  B_di_ausschalt = B_di_ausschalt | 9;
  DAT_003fab8e = Di_dir != '\0';
  DAT_003fab8d = Di_dir == '\0';
  if (B_pwf != '\0') {
    _Disa_uma = _DISA_U;
    _DAT_003fdbd2 = 0;
    DAT_003fdbcf = 0;
    Dicntlfehl = 0;
    B_disalern = 0;
  }
  di_lernst = 0;
  DAT_003fab91 = 0;
  Di_lfehl = 0;
  t_disa2 = _DI_T2;
  return;
}

