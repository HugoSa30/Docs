/*
 * Program: n42.bin
 * Function: FUN_00133554
 * Entry: 00133554
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00133554(void)

{
  undefined2 uVar1;
  
  _B_nlale = _B_nlale | 4;
  DAT_005bb821 = (B_nmin & 1) << 1 | DAT_005bb821 & 0xfc | 1;
  if (B_pwf != '\0') {
    _trminaus_w = 0;
    _tabsnl_w = 0xffff;
    tabstm_w = 0xffff;
    tabst_w = 0xffff;
    tumta = TUMTAI;
    BgtabstNvBits = BgtabstNvBits & 0xfe;
  }
  FUN_0013e034();
  if (B_pwf == '\0') {
    if ((DAT_003fdfc1 & 1) == 0) {
      uVar1 = func_0xff2189bc(&DAT_001d00e8,tum_ein);
      tabstm_w = func_0xff22181c(DAT_005bb81c,uVar1);
    }
    else {
      tabstm_w = 0xffff;
    }
    FUN_0018f4b8();
  }
  return;
}

