/*
 * Program: n42.bin
 * Function: FUN_0018f640
 * Entry: 0018f640
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0018f640(void)

{
  uint uVar1;
  ushort uVar2;
  short sVar3;
  
  if (B_pwml2cok == '\0') {
    tabsmn_w = 0;
LAB_0018f6d4:
    if (B_stend == '\0') goto LAB_0018f768;
  }
  else if (B_stend == '\0') {
    trminein_w = trmin_w;
    if (trmin_w < _trminaus_w) {
      sVar3 = -1 - _trminaus_w;
    }
    else {
      sVar3 = -_trminaus_w;
    }
    uVar1 = (uint)(ushort)(sVar3 + trmin_w) * 0x3c;
    if (0xfffe < uVar1) {
      uVar1 = 0xffff;
    }
    tabsmn_w = (word)uVar1;
    goto LAB_0018f6d4;
  }
  if (trmin_w < trminein_w) {
    uVar2 = ~trminein_w + trmin_w + 1;
  }
  else {
    uVar2 = trmin_w - trminein_w;
  }
  if (_TPLUHRC < uVar2) {
    BgtabstNvBits = BgtabstNvBits & 0xfe;
  }
  else if (_TPLUHRR < tnst_w) {
    BgtabstNvBits = BgtabstNvBits | 1;
  }
LAB_0018f768:
  if (((B_vbemg != '\0') && (B_nmin != 0)) && ((DAT_005bb821 >> 1 & 1) == 0)) {
    _tabsnl_w = 0;
  }
  DAT_005bb821 = (B_nmin & 1) << 1 | DAT_005bb821 & 0xfd;
  FUN_0018f4b8();
  return;
}

